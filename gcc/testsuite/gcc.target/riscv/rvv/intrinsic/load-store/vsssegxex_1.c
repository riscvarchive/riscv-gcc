/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vssseg2e16_v_f16mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16mf4x2 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x2_t v0, size_t vl)
{
  vssseg2e16_v_f16mf4x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_f16mf4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16mf4x2_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x2_t v0)
{
  vssseg2e16_v_f16mf4x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_f16mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16mf4x2_m (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x2_t v0, size_t vl)
{
  vssseg2e16_v_f16mf4x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_f16mf4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16mf4x2_m_vl31 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x2_t v0)
{
  vssseg2e16_v_f16mf4x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_f16mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16mf4x3 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x3_t v0, size_t vl)
{
  vssseg3e16_v_f16mf4x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_f16mf4x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16mf4x3_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x3_t v0)
{
  vssseg3e16_v_f16mf4x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_f16mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16mf4x3_m (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x3_t v0, size_t vl)
{
  vssseg3e16_v_f16mf4x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_f16mf4x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16mf4x3_m_vl31 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x3_t v0)
{
  vssseg3e16_v_f16mf4x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_f16mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16mf4x4 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x4_t v0, size_t vl)
{
  vssseg4e16_v_f16mf4x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_f16mf4x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16mf4x4_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x4_t v0)
{
  vssseg4e16_v_f16mf4x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_f16mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16mf4x4_m (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x4_t v0, size_t vl)
{
  vssseg4e16_v_f16mf4x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_f16mf4x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16mf4x4_m_vl31 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x4_t v0)
{
  vssseg4e16_v_f16mf4x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_f16mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16mf4x5 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x5_t v0, size_t vl)
{
  vssseg5e16_v_f16mf4x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_f16mf4x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16mf4x5_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x5_t v0)
{
  vssseg5e16_v_f16mf4x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_f16mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16mf4x5_m (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x5_t v0, size_t vl)
{
  vssseg5e16_v_f16mf4x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_f16mf4x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16mf4x5_m_vl31 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x5_t v0)
{
  vssseg5e16_v_f16mf4x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_f16mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16mf4x6 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x6_t v0, size_t vl)
{
  vssseg6e16_v_f16mf4x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_f16mf4x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16mf4x6_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x6_t v0)
{
  vssseg6e16_v_f16mf4x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_f16mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16mf4x6_m (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x6_t v0, size_t vl)
{
  vssseg6e16_v_f16mf4x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_f16mf4x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16mf4x6_m_vl31 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x6_t v0)
{
  vssseg6e16_v_f16mf4x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_f16mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16mf4x7 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x7_t v0, size_t vl)
{
  vssseg7e16_v_f16mf4x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_f16mf4x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16mf4x7_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x7_t v0)
{
  vssseg7e16_v_f16mf4x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_f16mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16mf4x7_m (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x7_t v0, size_t vl)
{
  vssseg7e16_v_f16mf4x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_f16mf4x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16mf4x7_m_vl31 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x7_t v0)
{
  vssseg7e16_v_f16mf4x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_f16mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16mf4x8 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x8_t v0, size_t vl)
{
  vssseg8e16_v_f16mf4x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_f16mf4x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16mf4x8_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x8_t v0)
{
  vssseg8e16_v_f16mf4x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_f16mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16mf4x8_m (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x8_t v0, size_t vl)
{
  vssseg8e16_v_f16mf4x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_f16mf4x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16mf4x8_m_vl31 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x8_t v0)
{
  vssseg8e16_v_f16mf4x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_f16mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16mf2x2 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x2_t v0, size_t vl)
{
  vssseg2e16_v_f16mf2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_f16mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16mf2x2_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x2_t v0)
{
  vssseg2e16_v_f16mf2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_f16mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16mf2x2_m (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x2_t v0, size_t vl)
{
  vssseg2e16_v_f16mf2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_f16mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16mf2x2_m_vl31 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x2_t v0)
{
  vssseg2e16_v_f16mf2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_f16mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16mf2x3 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x3_t v0, size_t vl)
{
  vssseg3e16_v_f16mf2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_f16mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16mf2x3_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x3_t v0)
{
  vssseg3e16_v_f16mf2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_f16mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16mf2x3_m (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x3_t v0, size_t vl)
{
  vssseg3e16_v_f16mf2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_f16mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16mf2x3_m_vl31 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x3_t v0)
{
  vssseg3e16_v_f16mf2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_f16mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16mf2x4 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x4_t v0, size_t vl)
{
  vssseg4e16_v_f16mf2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_f16mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16mf2x4_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x4_t v0)
{
  vssseg4e16_v_f16mf2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_f16mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16mf2x4_m (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x4_t v0, size_t vl)
{
  vssseg4e16_v_f16mf2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_f16mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16mf2x4_m_vl31 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x4_t v0)
{
  vssseg4e16_v_f16mf2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_f16mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16mf2x5 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x5_t v0, size_t vl)
{
  vssseg5e16_v_f16mf2x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_f16mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16mf2x5_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x5_t v0)
{
  vssseg5e16_v_f16mf2x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_f16mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16mf2x5_m (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x5_t v0, size_t vl)
{
  vssseg5e16_v_f16mf2x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_f16mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16mf2x5_m_vl31 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x5_t v0)
{
  vssseg5e16_v_f16mf2x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_f16mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16mf2x6 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x6_t v0, size_t vl)
{
  vssseg6e16_v_f16mf2x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_f16mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16mf2x6_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x6_t v0)
{
  vssseg6e16_v_f16mf2x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_f16mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16mf2x6_m (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x6_t v0, size_t vl)
{
  vssseg6e16_v_f16mf2x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_f16mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16mf2x6_m_vl31 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x6_t v0)
{
  vssseg6e16_v_f16mf2x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_f16mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16mf2x7 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x7_t v0, size_t vl)
{
  vssseg7e16_v_f16mf2x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_f16mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16mf2x7_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x7_t v0)
{
  vssseg7e16_v_f16mf2x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_f16mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16mf2x7_m (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x7_t v0, size_t vl)
{
  vssseg7e16_v_f16mf2x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_f16mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16mf2x7_m_vl31 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x7_t v0)
{
  vssseg7e16_v_f16mf2x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_f16mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16mf2x8 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x8_t v0, size_t vl)
{
  vssseg8e16_v_f16mf2x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_f16mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16mf2x8_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x8_t v0)
{
  vssseg8e16_v_f16mf2x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_f16mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16mf2x8_m (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x8_t v0, size_t vl)
{
  vssseg8e16_v_f16mf2x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_f16mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16mf2x8_m_vl31 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x8_t v0)
{
  vssseg8e16_v_f16mf2x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_f16m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m1x2 (float16_t *base, ptrdiff_t bstride, vfloat16m1x2_t v0, size_t vl)
{
  vssseg2e16_v_f16m1x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_f16m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m1x2_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m1x2_t v0)
{
  vssseg2e16_v_f16m1x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_f16m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m1x2_m (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x2_t v0, size_t vl)
{
  vssseg2e16_v_f16m1x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_f16m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m1x2_m_vl31 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x2_t v0)
{
  vssseg2e16_v_f16m1x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_f16m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16m1x3 (float16_t *base, ptrdiff_t bstride, vfloat16m1x3_t v0, size_t vl)
{
  vssseg3e16_v_f16m1x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_f16m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16m1x3_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m1x3_t v0)
{
  vssseg3e16_v_f16m1x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_f16m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16m1x3_m (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x3_t v0, size_t vl)
{
  vssseg3e16_v_f16m1x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_f16m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16m1x3_m_vl31 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x3_t v0)
{
  vssseg3e16_v_f16m1x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_f16m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16m1x4 (float16_t *base, ptrdiff_t bstride, vfloat16m1x4_t v0, size_t vl)
{
  vssseg4e16_v_f16m1x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_f16m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16m1x4_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m1x4_t v0)
{
  vssseg4e16_v_f16m1x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_f16m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16m1x4_m (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x4_t v0, size_t vl)
{
  vssseg4e16_v_f16m1x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_f16m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16m1x4_m_vl31 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x4_t v0)
{
  vssseg4e16_v_f16m1x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_f16m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16m1x5 (float16_t *base, ptrdiff_t bstride, vfloat16m1x5_t v0, size_t vl)
{
  vssseg5e16_v_f16m1x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_f16m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16m1x5_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m1x5_t v0)
{
  vssseg5e16_v_f16m1x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_f16m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16m1x5_m (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x5_t v0, size_t vl)
{
  vssseg5e16_v_f16m1x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_f16m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16m1x5_m_vl31 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x5_t v0)
{
  vssseg5e16_v_f16m1x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_f16m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16m1x6 (float16_t *base, ptrdiff_t bstride, vfloat16m1x6_t v0, size_t vl)
{
  vssseg6e16_v_f16m1x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_f16m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16m1x6_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m1x6_t v0)
{
  vssseg6e16_v_f16m1x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_f16m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16m1x6_m (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x6_t v0, size_t vl)
{
  vssseg6e16_v_f16m1x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_f16m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16m1x6_m_vl31 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x6_t v0)
{
  vssseg6e16_v_f16m1x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_f16m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16m1x7 (float16_t *base, ptrdiff_t bstride, vfloat16m1x7_t v0, size_t vl)
{
  vssseg7e16_v_f16m1x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_f16m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16m1x7_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m1x7_t v0)
{
  vssseg7e16_v_f16m1x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_f16m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16m1x7_m (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x7_t v0, size_t vl)
{
  vssseg7e16_v_f16m1x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_f16m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16m1x7_m_vl31 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x7_t v0)
{
  vssseg7e16_v_f16m1x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_f16m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16m1x8 (float16_t *base, ptrdiff_t bstride, vfloat16m1x8_t v0, size_t vl)
{
  vssseg8e16_v_f16m1x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_f16m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16m1x8_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m1x8_t v0)
{
  vssseg8e16_v_f16m1x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_f16m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16m1x8_m (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x8_t v0, size_t vl)
{
  vssseg8e16_v_f16m1x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_f16m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16m1x8_m_vl31 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x8_t v0)
{
  vssseg8e16_v_f16m1x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_f16m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m2x2 (float16_t *base, ptrdiff_t bstride, vfloat16m2x2_t v0, size_t vl)
{
  vssseg2e16_v_f16m2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_f16m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m2x2_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m2x2_t v0)
{
  vssseg2e16_v_f16m2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_f16m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m2x2_m (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x2_t v0, size_t vl)
{
  vssseg2e16_v_f16m2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_f16m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m2x2_m_vl31 (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x2_t v0)
{
  vssseg2e16_v_f16m2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_f16m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16m2x3 (float16_t *base, ptrdiff_t bstride, vfloat16m2x3_t v0, size_t vl)
{
  vssseg3e16_v_f16m2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_f16m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16m2x3_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m2x3_t v0)
{
  vssseg3e16_v_f16m2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_f16m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16m2x3_m (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x3_t v0, size_t vl)
{
  vssseg3e16_v_f16m2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_f16m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16m2x3_m_vl31 (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x3_t v0)
{
  vssseg3e16_v_f16m2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_f16m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16m2x4 (float16_t *base, ptrdiff_t bstride, vfloat16m2x4_t v0, size_t vl)
{
  vssseg4e16_v_f16m2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_f16m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16m2x4_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m2x4_t v0)
{
  vssseg4e16_v_f16m2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_f16m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16m2x4_m (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x4_t v0, size_t vl)
{
  vssseg4e16_v_f16m2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_f16m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16m2x4_m_vl31 (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x4_t v0)
{
  vssseg4e16_v_f16m2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_f16m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m4x2 (float16_t *base, ptrdiff_t bstride, vfloat16m4x2_t v0, size_t vl)
{
  vssseg2e16_v_f16m4x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_f16m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m4x2_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m4x2_t v0)
{
  vssseg2e16_v_f16m4x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_f16m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m4x2_m (vbool4_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m4x2_t v0, size_t vl)
{
  vssseg2e16_v_f16m4x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_f16m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m4x2_m_vl31 (vbool4_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m4x2_t v0)
{
  vssseg2e16_v_f16m4x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_f32mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32mf2x2 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x2_t v0, size_t vl)
{
  vssseg2e32_v_f32mf2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_f32mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32mf2x2_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x2_t v0)
{
  vssseg2e32_v_f32mf2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_f32mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32mf2x2_m (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x2_t v0, size_t vl)
{
  vssseg2e32_v_f32mf2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_f32mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32mf2x2_m_vl31 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x2_t v0)
{
  vssseg2e32_v_f32mf2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_f32mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32mf2x3 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x3_t v0, size_t vl)
{
  vssseg3e32_v_f32mf2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_f32mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32mf2x3_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x3_t v0)
{
  vssseg3e32_v_f32mf2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_f32mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32mf2x3_m (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x3_t v0, size_t vl)
{
  vssseg3e32_v_f32mf2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_f32mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32mf2x3_m_vl31 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x3_t v0)
{
  vssseg3e32_v_f32mf2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_f32mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32mf2x4 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x4_t v0, size_t vl)
{
  vssseg4e32_v_f32mf2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_f32mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32mf2x4_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x4_t v0)
{
  vssseg4e32_v_f32mf2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_f32mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32mf2x4_m (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x4_t v0, size_t vl)
{
  vssseg4e32_v_f32mf2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_f32mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32mf2x4_m_vl31 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x4_t v0)
{
  vssseg4e32_v_f32mf2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e32_v_f32mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_f32mf2x5 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x5_t v0, size_t vl)
{
  vssseg5e32_v_f32mf2x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e32_v_f32mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_f32mf2x5_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x5_t v0)
{
  vssseg5e32_v_f32mf2x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e32_v_f32mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_f32mf2x5_m (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x5_t v0, size_t vl)
{
  vssseg5e32_v_f32mf2x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e32_v_f32mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_f32mf2x5_m_vl31 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x5_t v0)
{
  vssseg5e32_v_f32mf2x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e32_v_f32mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_f32mf2x6 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x6_t v0, size_t vl)
{
  vssseg6e32_v_f32mf2x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e32_v_f32mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_f32mf2x6_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x6_t v0)
{
  vssseg6e32_v_f32mf2x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e32_v_f32mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_f32mf2x6_m (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x6_t v0, size_t vl)
{
  vssseg6e32_v_f32mf2x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e32_v_f32mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_f32mf2x6_m_vl31 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x6_t v0)
{
  vssseg6e32_v_f32mf2x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e32_v_f32mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_f32mf2x7 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x7_t v0, size_t vl)
{
  vssseg7e32_v_f32mf2x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e32_v_f32mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_f32mf2x7_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x7_t v0)
{
  vssseg7e32_v_f32mf2x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e32_v_f32mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_f32mf2x7_m (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x7_t v0, size_t vl)
{
  vssseg7e32_v_f32mf2x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e32_v_f32mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_f32mf2x7_m_vl31 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x7_t v0)
{
  vssseg7e32_v_f32mf2x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e32_v_f32mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_f32mf2x8 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x8_t v0, size_t vl)
{
  vssseg8e32_v_f32mf2x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e32_v_f32mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_f32mf2x8_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x8_t v0)
{
  vssseg8e32_v_f32mf2x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e32_v_f32mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_f32mf2x8_m (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x8_t v0, size_t vl)
{
  vssseg8e32_v_f32mf2x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e32_v_f32mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_f32mf2x8_m_vl31 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x8_t v0)
{
  vssseg8e32_v_f32mf2x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_f32m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m1x2 (float32_t *base, ptrdiff_t bstride, vfloat32m1x2_t v0, size_t vl)
{
  vssseg2e32_v_f32m1x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_f32m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m1x2_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m1x2_t v0)
{
  vssseg2e32_v_f32m1x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_f32m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m1x2_m (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x2_t v0, size_t vl)
{
  vssseg2e32_v_f32m1x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_f32m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m1x2_m_vl31 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x2_t v0)
{
  vssseg2e32_v_f32m1x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_f32m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32m1x3 (float32_t *base, ptrdiff_t bstride, vfloat32m1x3_t v0, size_t vl)
{
  vssseg3e32_v_f32m1x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_f32m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32m1x3_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m1x3_t v0)
{
  vssseg3e32_v_f32m1x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_f32m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32m1x3_m (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x3_t v0, size_t vl)
{
  vssseg3e32_v_f32m1x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_f32m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32m1x3_m_vl31 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x3_t v0)
{
  vssseg3e32_v_f32m1x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_f32m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32m1x4 (float32_t *base, ptrdiff_t bstride, vfloat32m1x4_t v0, size_t vl)
{
  vssseg4e32_v_f32m1x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_f32m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32m1x4_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m1x4_t v0)
{
  vssseg4e32_v_f32m1x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_f32m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32m1x4_m (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x4_t v0, size_t vl)
{
  vssseg4e32_v_f32m1x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_f32m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32m1x4_m_vl31 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x4_t v0)
{
  vssseg4e32_v_f32m1x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e32_v_f32m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_f32m1x5 (float32_t *base, ptrdiff_t bstride, vfloat32m1x5_t v0, size_t vl)
{
  vssseg5e32_v_f32m1x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e32_v_f32m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_f32m1x5_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m1x5_t v0)
{
  vssseg5e32_v_f32m1x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e32_v_f32m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_f32m1x5_m (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x5_t v0, size_t vl)
{
  vssseg5e32_v_f32m1x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e32_v_f32m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_f32m1x5_m_vl31 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x5_t v0)
{
  vssseg5e32_v_f32m1x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e32_v_f32m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_f32m1x6 (float32_t *base, ptrdiff_t bstride, vfloat32m1x6_t v0, size_t vl)
{
  vssseg6e32_v_f32m1x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e32_v_f32m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_f32m1x6_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m1x6_t v0)
{
  vssseg6e32_v_f32m1x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e32_v_f32m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_f32m1x6_m (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x6_t v0, size_t vl)
{
  vssseg6e32_v_f32m1x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e32_v_f32m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_f32m1x6_m_vl31 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x6_t v0)
{
  vssseg6e32_v_f32m1x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e32_v_f32m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_f32m1x7 (float32_t *base, ptrdiff_t bstride, vfloat32m1x7_t v0, size_t vl)
{
  vssseg7e32_v_f32m1x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e32_v_f32m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_f32m1x7_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m1x7_t v0)
{
  vssseg7e32_v_f32m1x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e32_v_f32m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_f32m1x7_m (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x7_t v0, size_t vl)
{
  vssseg7e32_v_f32m1x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e32_v_f32m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_f32m1x7_m_vl31 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x7_t v0)
{
  vssseg7e32_v_f32m1x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e32_v_f32m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_f32m1x8 (float32_t *base, ptrdiff_t bstride, vfloat32m1x8_t v0, size_t vl)
{
  vssseg8e32_v_f32m1x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e32_v_f32m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_f32m1x8_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m1x8_t v0)
{
  vssseg8e32_v_f32m1x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e32_v_f32m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_f32m1x8_m (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x8_t v0, size_t vl)
{
  vssseg8e32_v_f32m1x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e32_v_f32m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_f32m1x8_m_vl31 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x8_t v0)
{
  vssseg8e32_v_f32m1x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_f32m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m2x2 (float32_t *base, ptrdiff_t bstride, vfloat32m2x2_t v0, size_t vl)
{
  vssseg2e32_v_f32m2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_f32m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m2x2_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m2x2_t v0)
{
  vssseg2e32_v_f32m2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_f32m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m2x2_m (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x2_t v0, size_t vl)
{
  vssseg2e32_v_f32m2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_f32m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m2x2_m_vl31 (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x2_t v0)
{
  vssseg2e32_v_f32m2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_f32m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32m2x3 (float32_t *base, ptrdiff_t bstride, vfloat32m2x3_t v0, size_t vl)
{
  vssseg3e32_v_f32m2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_f32m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32m2x3_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m2x3_t v0)
{
  vssseg3e32_v_f32m2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_f32m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32m2x3_m (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x3_t v0, size_t vl)
{
  vssseg3e32_v_f32m2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_f32m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32m2x3_m_vl31 (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x3_t v0)
{
  vssseg3e32_v_f32m2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_f32m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32m2x4 (float32_t *base, ptrdiff_t bstride, vfloat32m2x4_t v0, size_t vl)
{
  vssseg4e32_v_f32m2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_f32m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32m2x4_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m2x4_t v0)
{
  vssseg4e32_v_f32m2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_f32m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32m2x4_m (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x4_t v0, size_t vl)
{
  vssseg4e32_v_f32m2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_f32m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32m2x4_m_vl31 (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x4_t v0)
{
  vssseg4e32_v_f32m2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_f32m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m4x2 (float32_t *base, ptrdiff_t bstride, vfloat32m4x2_t v0, size_t vl)
{
  vssseg2e32_v_f32m4x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_f32m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m4x2_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m4x2_t v0)
{
  vssseg2e32_v_f32m4x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_f32m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m4x2_m (vbool8_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m4x2_t v0, size_t vl)
{
  vssseg2e32_v_f32m4x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_f32m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m4x2_m_vl31 (vbool8_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m4x2_t v0)
{
  vssseg2e32_v_f32m4x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_f64m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m1x2 (float64_t *base, ptrdiff_t bstride, vfloat64m1x2_t v0, size_t vl)
{
  vssseg2e64_v_f64m1x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_f64m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m1x2_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m1x2_t v0)
{
  vssseg2e64_v_f64m1x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_f64m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m1x2_m (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x2_t v0, size_t vl)
{
  vssseg2e64_v_f64m1x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_f64m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m1x2_m_vl31 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x2_t v0)
{
  vssseg2e64_v_f64m1x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e64_v_f64m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_f64m1x3 (float64_t *base, ptrdiff_t bstride, vfloat64m1x3_t v0, size_t vl)
{
  vssseg3e64_v_f64m1x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e64_v_f64m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_f64m1x3_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m1x3_t v0)
{
  vssseg3e64_v_f64m1x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e64_v_f64m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_f64m1x3_m (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x3_t v0, size_t vl)
{
  vssseg3e64_v_f64m1x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e64_v_f64m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_f64m1x3_m_vl31 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x3_t v0)
{
  vssseg3e64_v_f64m1x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e64_v_f64m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_f64m1x4 (float64_t *base, ptrdiff_t bstride, vfloat64m1x4_t v0, size_t vl)
{
  vssseg4e64_v_f64m1x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e64_v_f64m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_f64m1x4_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m1x4_t v0)
{
  vssseg4e64_v_f64m1x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e64_v_f64m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_f64m1x4_m (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x4_t v0, size_t vl)
{
  vssseg4e64_v_f64m1x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e64_v_f64m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_f64m1x4_m_vl31 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x4_t v0)
{
  vssseg4e64_v_f64m1x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e64_v_f64m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e64_v_f64m1x5 (float64_t *base, ptrdiff_t bstride, vfloat64m1x5_t v0, size_t vl)
{
  vssseg5e64_v_f64m1x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e64_v_f64m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e64_v_f64m1x5_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m1x5_t v0)
{
  vssseg5e64_v_f64m1x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e64_v_f64m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e64_v_f64m1x5_m (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x5_t v0, size_t vl)
{
  vssseg5e64_v_f64m1x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e64_v_f64m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e64_v_f64m1x5_m_vl31 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x5_t v0)
{
  vssseg5e64_v_f64m1x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e64_v_f64m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e64_v_f64m1x6 (float64_t *base, ptrdiff_t bstride, vfloat64m1x6_t v0, size_t vl)
{
  vssseg6e64_v_f64m1x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e64_v_f64m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e64_v_f64m1x6_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m1x6_t v0)
{
  vssseg6e64_v_f64m1x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e64_v_f64m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e64_v_f64m1x6_m (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x6_t v0, size_t vl)
{
  vssseg6e64_v_f64m1x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e64_v_f64m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e64_v_f64m1x6_m_vl31 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x6_t v0)
{
  vssseg6e64_v_f64m1x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e64_v_f64m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e64_v_f64m1x7 (float64_t *base, ptrdiff_t bstride, vfloat64m1x7_t v0, size_t vl)
{
  vssseg7e64_v_f64m1x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e64_v_f64m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e64_v_f64m1x7_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m1x7_t v0)
{
  vssseg7e64_v_f64m1x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e64_v_f64m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e64_v_f64m1x7_m (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x7_t v0, size_t vl)
{
  vssseg7e64_v_f64m1x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e64_v_f64m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e64_v_f64m1x7_m_vl31 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x7_t v0)
{
  vssseg7e64_v_f64m1x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e64_v_f64m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e64_v_f64m1x8 (float64_t *base, ptrdiff_t bstride, vfloat64m1x8_t v0, size_t vl)
{
  vssseg8e64_v_f64m1x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e64_v_f64m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e64_v_f64m1x8_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m1x8_t v0)
{
  vssseg8e64_v_f64m1x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e64_v_f64m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e64_v_f64m1x8_m (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x8_t v0, size_t vl)
{
  vssseg8e64_v_f64m1x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e64_v_f64m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e64_v_f64m1x8_m_vl31 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x8_t v0)
{
  vssseg8e64_v_f64m1x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_f64m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m2x2 (float64_t *base, ptrdiff_t bstride, vfloat64m2x2_t v0, size_t vl)
{
  vssseg2e64_v_f64m2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_f64m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m2x2_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m2x2_t v0)
{
  vssseg2e64_v_f64m2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_f64m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m2x2_m (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x2_t v0, size_t vl)
{
  vssseg2e64_v_f64m2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_f64m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m2x2_m_vl31 (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x2_t v0)
{
  vssseg2e64_v_f64m2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e64_v_f64m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_f64m2x3 (float64_t *base, ptrdiff_t bstride, vfloat64m2x3_t v0, size_t vl)
{
  vssseg3e64_v_f64m2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e64_v_f64m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_f64m2x3_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m2x3_t v0)
{
  vssseg3e64_v_f64m2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e64_v_f64m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_f64m2x3_m (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x3_t v0, size_t vl)
{
  vssseg3e64_v_f64m2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e64_v_f64m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_f64m2x3_m_vl31 (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x3_t v0)
{
  vssseg3e64_v_f64m2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e64_v_f64m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_f64m2x4 (float64_t *base, ptrdiff_t bstride, vfloat64m2x4_t v0, size_t vl)
{
  vssseg4e64_v_f64m2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e64_v_f64m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_f64m2x4_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m2x4_t v0)
{
  vssseg4e64_v_f64m2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e64_v_f64m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_f64m2x4_m (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x4_t v0, size_t vl)
{
  vssseg4e64_v_f64m2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e64_v_f64m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_f64m2x4_m_vl31 (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x4_t v0)
{
  vssseg4e64_v_f64m2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_f64m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m4x2 (float64_t *base, ptrdiff_t bstride, vfloat64m4x2_t v0, size_t vl)
{
  vssseg2e64_v_f64m4x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_f64m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m4x2_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m4x2_t v0)
{
  vssseg2e64_v_f64m4x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_f64m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m4x2_m (vbool16_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m4x2_t v0, size_t vl)
{
  vssseg2e64_v_f64m4x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_f64m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m4x2_m_vl31 (vbool16_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m4x2_t v0)
{
  vssseg2e64_v_f64m4x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_i8mf8x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf8x2 (int8_t *base, ptrdiff_t bstride, vint8mf8x2_t v0, size_t vl)
{
  vssseg2e8_v_i8mf8x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_i8mf8x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf8x2_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf8x2_t v0)
{
  vssseg2e8_v_i8mf8x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_i8mf8x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf8x2_m (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x2_t v0, size_t vl)
{
  vssseg2e8_v_i8mf8x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_i8mf8x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf8x2_m_vl31 (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x2_t v0)
{
  vssseg2e8_v_i8mf8x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_i8mf8x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf8x3 (int8_t *base, ptrdiff_t bstride, vint8mf8x3_t v0, size_t vl)
{
  vssseg3e8_v_i8mf8x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_i8mf8x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf8x3_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf8x3_t v0)
{
  vssseg3e8_v_i8mf8x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_i8mf8x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf8x3_m (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x3_t v0, size_t vl)
{
  vssseg3e8_v_i8mf8x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_i8mf8x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf8x3_m_vl31 (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x3_t v0)
{
  vssseg3e8_v_i8mf8x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_i8mf8x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf8x4 (int8_t *base, ptrdiff_t bstride, vint8mf8x4_t v0, size_t vl)
{
  vssseg4e8_v_i8mf8x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_i8mf8x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf8x4_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf8x4_t v0)
{
  vssseg4e8_v_i8mf8x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_i8mf8x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf8x4_m (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x4_t v0, size_t vl)
{
  vssseg4e8_v_i8mf8x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_i8mf8x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf8x4_m_vl31 (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x4_t v0)
{
  vssseg4e8_v_i8mf8x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e8_v_i8mf8x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf8x5 (int8_t *base, ptrdiff_t bstride, vint8mf8x5_t v0, size_t vl)
{
  vssseg5e8_v_i8mf8x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e8_v_i8mf8x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf8x5_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf8x5_t v0)
{
  vssseg5e8_v_i8mf8x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e8_v_i8mf8x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf8x5_m (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x5_t v0, size_t vl)
{
  vssseg5e8_v_i8mf8x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e8_v_i8mf8x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf8x5_m_vl31 (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x5_t v0)
{
  vssseg5e8_v_i8mf8x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e8_v_i8mf8x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf8x6 (int8_t *base, ptrdiff_t bstride, vint8mf8x6_t v0, size_t vl)
{
  vssseg6e8_v_i8mf8x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e8_v_i8mf8x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf8x6_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf8x6_t v0)
{
  vssseg6e8_v_i8mf8x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e8_v_i8mf8x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf8x6_m (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x6_t v0, size_t vl)
{
  vssseg6e8_v_i8mf8x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e8_v_i8mf8x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf8x6_m_vl31 (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x6_t v0)
{
  vssseg6e8_v_i8mf8x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e8_v_i8mf8x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf8x7 (int8_t *base, ptrdiff_t bstride, vint8mf8x7_t v0, size_t vl)
{
  vssseg7e8_v_i8mf8x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e8_v_i8mf8x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf8x7_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf8x7_t v0)
{
  vssseg7e8_v_i8mf8x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e8_v_i8mf8x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf8x7_m (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x7_t v0, size_t vl)
{
  vssseg7e8_v_i8mf8x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e8_v_i8mf8x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf8x7_m_vl31 (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x7_t v0)
{
  vssseg7e8_v_i8mf8x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e8_v_i8mf8x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf8x8 (int8_t *base, ptrdiff_t bstride, vint8mf8x8_t v0, size_t vl)
{
  vssseg8e8_v_i8mf8x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e8_v_i8mf8x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf8x8_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf8x8_t v0)
{
  vssseg8e8_v_i8mf8x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e8_v_i8mf8x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf8x8_m (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x8_t v0, size_t vl)
{
  vssseg8e8_v_i8mf8x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e8_v_i8mf8x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf8x8_m_vl31 (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x8_t v0)
{
  vssseg8e8_v_i8mf8x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_i8mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf4x2 (int8_t *base, ptrdiff_t bstride, vint8mf4x2_t v0, size_t vl)
{
  vssseg2e8_v_i8mf4x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_i8mf4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf4x2_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf4x2_t v0)
{
  vssseg2e8_v_i8mf4x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_i8mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf4x2_m (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x2_t v0, size_t vl)
{
  vssseg2e8_v_i8mf4x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_i8mf4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf4x2_m_vl31 (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x2_t v0)
{
  vssseg2e8_v_i8mf4x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_i8mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf4x3 (int8_t *base, ptrdiff_t bstride, vint8mf4x3_t v0, size_t vl)
{
  vssseg3e8_v_i8mf4x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_i8mf4x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf4x3_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf4x3_t v0)
{
  vssseg3e8_v_i8mf4x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_i8mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf4x3_m (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x3_t v0, size_t vl)
{
  vssseg3e8_v_i8mf4x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_i8mf4x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf4x3_m_vl31 (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x3_t v0)
{
  vssseg3e8_v_i8mf4x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_i8mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf4x4 (int8_t *base, ptrdiff_t bstride, vint8mf4x4_t v0, size_t vl)
{
  vssseg4e8_v_i8mf4x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_i8mf4x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf4x4_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf4x4_t v0)
{
  vssseg4e8_v_i8mf4x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_i8mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf4x4_m (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x4_t v0, size_t vl)
{
  vssseg4e8_v_i8mf4x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_i8mf4x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf4x4_m_vl31 (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x4_t v0)
{
  vssseg4e8_v_i8mf4x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e8_v_i8mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf4x5 (int8_t *base, ptrdiff_t bstride, vint8mf4x5_t v0, size_t vl)
{
  vssseg5e8_v_i8mf4x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e8_v_i8mf4x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf4x5_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf4x5_t v0)
{
  vssseg5e8_v_i8mf4x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e8_v_i8mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf4x5_m (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x5_t v0, size_t vl)
{
  vssseg5e8_v_i8mf4x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e8_v_i8mf4x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf4x5_m_vl31 (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x5_t v0)
{
  vssseg5e8_v_i8mf4x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e8_v_i8mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf4x6 (int8_t *base, ptrdiff_t bstride, vint8mf4x6_t v0, size_t vl)
{
  vssseg6e8_v_i8mf4x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e8_v_i8mf4x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf4x6_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf4x6_t v0)
{
  vssseg6e8_v_i8mf4x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e8_v_i8mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf4x6_m (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x6_t v0, size_t vl)
{
  vssseg6e8_v_i8mf4x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e8_v_i8mf4x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf4x6_m_vl31 (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x6_t v0)
{
  vssseg6e8_v_i8mf4x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e8_v_i8mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf4x7 (int8_t *base, ptrdiff_t bstride, vint8mf4x7_t v0, size_t vl)
{
  vssseg7e8_v_i8mf4x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e8_v_i8mf4x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf4x7_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf4x7_t v0)
{
  vssseg7e8_v_i8mf4x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e8_v_i8mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf4x7_m (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x7_t v0, size_t vl)
{
  vssseg7e8_v_i8mf4x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e8_v_i8mf4x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf4x7_m_vl31 (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x7_t v0)
{
  vssseg7e8_v_i8mf4x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e8_v_i8mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf4x8 (int8_t *base, ptrdiff_t bstride, vint8mf4x8_t v0, size_t vl)
{
  vssseg8e8_v_i8mf4x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e8_v_i8mf4x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf4x8_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf4x8_t v0)
{
  vssseg8e8_v_i8mf4x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e8_v_i8mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf4x8_m (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x8_t v0, size_t vl)
{
  vssseg8e8_v_i8mf4x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e8_v_i8mf4x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf4x8_m_vl31 (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x8_t v0)
{
  vssseg8e8_v_i8mf4x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_i8mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf2x2 (int8_t *base, ptrdiff_t bstride, vint8mf2x2_t v0, size_t vl)
{
  vssseg2e8_v_i8mf2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_i8mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf2x2_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf2x2_t v0)
{
  vssseg2e8_v_i8mf2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_i8mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf2x2_m (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x2_t v0, size_t vl)
{
  vssseg2e8_v_i8mf2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_i8mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf2x2_m_vl31 (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x2_t v0)
{
  vssseg2e8_v_i8mf2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_i8mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf2x3 (int8_t *base, ptrdiff_t bstride, vint8mf2x3_t v0, size_t vl)
{
  vssseg3e8_v_i8mf2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_i8mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf2x3_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf2x3_t v0)
{
  vssseg3e8_v_i8mf2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_i8mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf2x3_m (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x3_t v0, size_t vl)
{
  vssseg3e8_v_i8mf2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_i8mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf2x3_m_vl31 (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x3_t v0)
{
  vssseg3e8_v_i8mf2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_i8mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf2x4 (int8_t *base, ptrdiff_t bstride, vint8mf2x4_t v0, size_t vl)
{
  vssseg4e8_v_i8mf2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_i8mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf2x4_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf2x4_t v0)
{
  vssseg4e8_v_i8mf2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_i8mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf2x4_m (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x4_t v0, size_t vl)
{
  vssseg4e8_v_i8mf2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_i8mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf2x4_m_vl31 (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x4_t v0)
{
  vssseg4e8_v_i8mf2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e8_v_i8mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf2x5 (int8_t *base, ptrdiff_t bstride, vint8mf2x5_t v0, size_t vl)
{
  vssseg5e8_v_i8mf2x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e8_v_i8mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf2x5_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf2x5_t v0)
{
  vssseg5e8_v_i8mf2x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e8_v_i8mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf2x5_m (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x5_t v0, size_t vl)
{
  vssseg5e8_v_i8mf2x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e8_v_i8mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf2x5_m_vl31 (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x5_t v0)
{
  vssseg5e8_v_i8mf2x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e8_v_i8mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf2x6 (int8_t *base, ptrdiff_t bstride, vint8mf2x6_t v0, size_t vl)
{
  vssseg6e8_v_i8mf2x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e8_v_i8mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf2x6_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf2x6_t v0)
{
  vssseg6e8_v_i8mf2x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e8_v_i8mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf2x6_m (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x6_t v0, size_t vl)
{
  vssseg6e8_v_i8mf2x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e8_v_i8mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf2x6_m_vl31 (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x6_t v0)
{
  vssseg6e8_v_i8mf2x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e8_v_i8mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf2x7 (int8_t *base, ptrdiff_t bstride, vint8mf2x7_t v0, size_t vl)
{
  vssseg7e8_v_i8mf2x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e8_v_i8mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf2x7_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf2x7_t v0)
{
  vssseg7e8_v_i8mf2x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e8_v_i8mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf2x7_m (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x7_t v0, size_t vl)
{
  vssseg7e8_v_i8mf2x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e8_v_i8mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf2x7_m_vl31 (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x7_t v0)
{
  vssseg7e8_v_i8mf2x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e8_v_i8mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf2x8 (int8_t *base, ptrdiff_t bstride, vint8mf2x8_t v0, size_t vl)
{
  vssseg8e8_v_i8mf2x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e8_v_i8mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf2x8_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf2x8_t v0)
{
  vssseg8e8_v_i8mf2x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e8_v_i8mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf2x8_m (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x8_t v0, size_t vl)
{
  vssseg8e8_v_i8mf2x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e8_v_i8mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf2x8_m_vl31 (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x8_t v0)
{
  vssseg8e8_v_i8mf2x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_i8m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m1x2 (int8_t *base, ptrdiff_t bstride, vint8m1x2_t v0, size_t vl)
{
  vssseg2e8_v_i8m1x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_i8m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m1x2_vl31 (int8_t *base, ptrdiff_t bstride, vint8m1x2_t v0)
{
  vssseg2e8_v_i8m1x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_i8m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m1x2_m (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x2_t v0, size_t vl)
{
  vssseg2e8_v_i8m1x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_i8m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m1x2_m_vl31 (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x2_t v0)
{
  vssseg2e8_v_i8m1x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_i8m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8m1x3 (int8_t *base, ptrdiff_t bstride, vint8m1x3_t v0, size_t vl)
{
  vssseg3e8_v_i8m1x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_i8m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8m1x3_vl31 (int8_t *base, ptrdiff_t bstride, vint8m1x3_t v0)
{
  vssseg3e8_v_i8m1x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_i8m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8m1x3_m (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x3_t v0, size_t vl)
{
  vssseg3e8_v_i8m1x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_i8m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8m1x3_m_vl31 (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x3_t v0)
{
  vssseg3e8_v_i8m1x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_i8m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8m1x4 (int8_t *base, ptrdiff_t bstride, vint8m1x4_t v0, size_t vl)
{
  vssseg4e8_v_i8m1x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_i8m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8m1x4_vl31 (int8_t *base, ptrdiff_t bstride, vint8m1x4_t v0)
{
  vssseg4e8_v_i8m1x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_i8m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8m1x4_m (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x4_t v0, size_t vl)
{
  vssseg4e8_v_i8m1x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_i8m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8m1x4_m_vl31 (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x4_t v0)
{
  vssseg4e8_v_i8m1x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e8_v_i8m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8m1x5 (int8_t *base, ptrdiff_t bstride, vint8m1x5_t v0, size_t vl)
{
  vssseg5e8_v_i8m1x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e8_v_i8m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8m1x5_vl31 (int8_t *base, ptrdiff_t bstride, vint8m1x5_t v0)
{
  vssseg5e8_v_i8m1x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e8_v_i8m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8m1x5_m (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x5_t v0, size_t vl)
{
  vssseg5e8_v_i8m1x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e8_v_i8m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8m1x5_m_vl31 (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x5_t v0)
{
  vssseg5e8_v_i8m1x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e8_v_i8m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8m1x6 (int8_t *base, ptrdiff_t bstride, vint8m1x6_t v0, size_t vl)
{
  vssseg6e8_v_i8m1x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e8_v_i8m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8m1x6_vl31 (int8_t *base, ptrdiff_t bstride, vint8m1x6_t v0)
{
  vssseg6e8_v_i8m1x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e8_v_i8m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8m1x6_m (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x6_t v0, size_t vl)
{
  vssseg6e8_v_i8m1x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e8_v_i8m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8m1x6_m_vl31 (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x6_t v0)
{
  vssseg6e8_v_i8m1x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e8_v_i8m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8m1x7 (int8_t *base, ptrdiff_t bstride, vint8m1x7_t v0, size_t vl)
{
  vssseg7e8_v_i8m1x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e8_v_i8m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8m1x7_vl31 (int8_t *base, ptrdiff_t bstride, vint8m1x7_t v0)
{
  vssseg7e8_v_i8m1x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e8_v_i8m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8m1x7_m (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x7_t v0, size_t vl)
{
  vssseg7e8_v_i8m1x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e8_v_i8m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8m1x7_m_vl31 (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x7_t v0)
{
  vssseg7e8_v_i8m1x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e8_v_i8m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8m1x8 (int8_t *base, ptrdiff_t bstride, vint8m1x8_t v0, size_t vl)
{
  vssseg8e8_v_i8m1x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e8_v_i8m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8m1x8_vl31 (int8_t *base, ptrdiff_t bstride, vint8m1x8_t v0)
{
  vssseg8e8_v_i8m1x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e8_v_i8m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8m1x8_m (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x8_t v0, size_t vl)
{
  vssseg8e8_v_i8m1x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e8_v_i8m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8m1x8_m_vl31 (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x8_t v0)
{
  vssseg8e8_v_i8m1x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_i8m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m2x2 (int8_t *base, ptrdiff_t bstride, vint8m2x2_t v0, size_t vl)
{
  vssseg2e8_v_i8m2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_i8m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m2x2_vl31 (int8_t *base, ptrdiff_t bstride, vint8m2x2_t v0)
{
  vssseg2e8_v_i8m2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_i8m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m2x2_m (vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2x2_t v0, size_t vl)
{
  vssseg2e8_v_i8m2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_i8m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m2x2_m_vl31 (vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2x2_t v0)
{
  vssseg2e8_v_i8m2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_i8m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8m2x3 (int8_t *base, ptrdiff_t bstride, vint8m2x3_t v0, size_t vl)
{
  vssseg3e8_v_i8m2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_i8m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8m2x3_vl31 (int8_t *base, ptrdiff_t bstride, vint8m2x3_t v0)
{
  vssseg3e8_v_i8m2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_i8m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8m2x3_m (vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2x3_t v0, size_t vl)
{
  vssseg3e8_v_i8m2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_i8m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8m2x3_m_vl31 (vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2x3_t v0)
{
  vssseg3e8_v_i8m2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_i8m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8m2x4 (int8_t *base, ptrdiff_t bstride, vint8m2x4_t v0, size_t vl)
{
  vssseg4e8_v_i8m2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_i8m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8m2x4_vl31 (int8_t *base, ptrdiff_t bstride, vint8m2x4_t v0)
{
  vssseg4e8_v_i8m2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_i8m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8m2x4_m (vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2x4_t v0, size_t vl)
{
  vssseg4e8_v_i8m2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_i8m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8m2x4_m_vl31 (vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2x4_t v0)
{
  vssseg4e8_v_i8m2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_i8m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m4x2 (int8_t *base, ptrdiff_t bstride, vint8m4x2_t v0, size_t vl)
{
  vssseg2e8_v_i8m4x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_i8m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m4x2_vl31 (int8_t *base, ptrdiff_t bstride, vint8m4x2_t v0)
{
  vssseg2e8_v_i8m4x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_i8m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m4x2_m (vbool2_t mask, int8_t *base, ptrdiff_t bstride, vint8m4x2_t v0, size_t vl)
{
  vssseg2e8_v_i8m4x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_i8m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m4x2_m_vl31 (vbool2_t mask, int8_t *base, ptrdiff_t bstride, vint8m4x2_t v0)
{
  vssseg2e8_v_i8m4x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_i16mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16mf4x2 (int16_t *base, ptrdiff_t bstride, vint16mf4x2_t v0, size_t vl)
{
  vssseg2e16_v_i16mf4x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_i16mf4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16mf4x2_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf4x2_t v0)
{
  vssseg2e16_v_i16mf4x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_i16mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16mf4x2_m (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x2_t v0, size_t vl)
{
  vssseg2e16_v_i16mf4x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_i16mf4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16mf4x2_m_vl31 (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x2_t v0)
{
  vssseg2e16_v_i16mf4x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_i16mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16mf4x3 (int16_t *base, ptrdiff_t bstride, vint16mf4x3_t v0, size_t vl)
{
  vssseg3e16_v_i16mf4x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_i16mf4x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16mf4x3_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf4x3_t v0)
{
  vssseg3e16_v_i16mf4x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_i16mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16mf4x3_m (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x3_t v0, size_t vl)
{
  vssseg3e16_v_i16mf4x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_i16mf4x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16mf4x3_m_vl31 (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x3_t v0)
{
  vssseg3e16_v_i16mf4x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_i16mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16mf4x4 (int16_t *base, ptrdiff_t bstride, vint16mf4x4_t v0, size_t vl)
{
  vssseg4e16_v_i16mf4x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_i16mf4x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16mf4x4_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf4x4_t v0)
{
  vssseg4e16_v_i16mf4x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_i16mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16mf4x4_m (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x4_t v0, size_t vl)
{
  vssseg4e16_v_i16mf4x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_i16mf4x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16mf4x4_m_vl31 (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x4_t v0)
{
  vssseg4e16_v_i16mf4x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_i16mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16mf4x5 (int16_t *base, ptrdiff_t bstride, vint16mf4x5_t v0, size_t vl)
{
  vssseg5e16_v_i16mf4x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_i16mf4x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16mf4x5_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf4x5_t v0)
{
  vssseg5e16_v_i16mf4x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_i16mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16mf4x5_m (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x5_t v0, size_t vl)
{
  vssseg5e16_v_i16mf4x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_i16mf4x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16mf4x5_m_vl31 (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x5_t v0)
{
  vssseg5e16_v_i16mf4x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_i16mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16mf4x6 (int16_t *base, ptrdiff_t bstride, vint16mf4x6_t v0, size_t vl)
{
  vssseg6e16_v_i16mf4x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_i16mf4x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16mf4x6_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf4x6_t v0)
{
  vssseg6e16_v_i16mf4x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_i16mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16mf4x6_m (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x6_t v0, size_t vl)
{
  vssseg6e16_v_i16mf4x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_i16mf4x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16mf4x6_m_vl31 (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x6_t v0)
{
  vssseg6e16_v_i16mf4x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_i16mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16mf4x7 (int16_t *base, ptrdiff_t bstride, vint16mf4x7_t v0, size_t vl)
{
  vssseg7e16_v_i16mf4x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_i16mf4x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16mf4x7_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf4x7_t v0)
{
  vssseg7e16_v_i16mf4x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_i16mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16mf4x7_m (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x7_t v0, size_t vl)
{
  vssseg7e16_v_i16mf4x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_i16mf4x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16mf4x7_m_vl31 (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x7_t v0)
{
  vssseg7e16_v_i16mf4x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_i16mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16mf4x8 (int16_t *base, ptrdiff_t bstride, vint16mf4x8_t v0, size_t vl)
{
  vssseg8e16_v_i16mf4x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_i16mf4x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16mf4x8_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf4x8_t v0)
{
  vssseg8e16_v_i16mf4x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_i16mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16mf4x8_m (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x8_t v0, size_t vl)
{
  vssseg8e16_v_i16mf4x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_i16mf4x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16mf4x8_m_vl31 (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x8_t v0)
{
  vssseg8e16_v_i16mf4x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_i16mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16mf2x2 (int16_t *base, ptrdiff_t bstride, vint16mf2x2_t v0, size_t vl)
{
  vssseg2e16_v_i16mf2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_i16mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16mf2x2_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf2x2_t v0)
{
  vssseg2e16_v_i16mf2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_i16mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16mf2x2_m (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x2_t v0, size_t vl)
{
  vssseg2e16_v_i16mf2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_i16mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16mf2x2_m_vl31 (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x2_t v0)
{
  vssseg2e16_v_i16mf2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_i16mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16mf2x3 (int16_t *base, ptrdiff_t bstride, vint16mf2x3_t v0, size_t vl)
{
  vssseg3e16_v_i16mf2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_i16mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16mf2x3_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf2x3_t v0)
{
  vssseg3e16_v_i16mf2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_i16mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16mf2x3_m (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x3_t v0, size_t vl)
{
  vssseg3e16_v_i16mf2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_i16mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16mf2x3_m_vl31 (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x3_t v0)
{
  vssseg3e16_v_i16mf2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_i16mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16mf2x4 (int16_t *base, ptrdiff_t bstride, vint16mf2x4_t v0, size_t vl)
{
  vssseg4e16_v_i16mf2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_i16mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16mf2x4_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf2x4_t v0)
{
  vssseg4e16_v_i16mf2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_i16mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16mf2x4_m (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x4_t v0, size_t vl)
{
  vssseg4e16_v_i16mf2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_i16mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16mf2x4_m_vl31 (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x4_t v0)
{
  vssseg4e16_v_i16mf2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_i16mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16mf2x5 (int16_t *base, ptrdiff_t bstride, vint16mf2x5_t v0, size_t vl)
{
  vssseg5e16_v_i16mf2x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_i16mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16mf2x5_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf2x5_t v0)
{
  vssseg5e16_v_i16mf2x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_i16mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16mf2x5_m (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x5_t v0, size_t vl)
{
  vssseg5e16_v_i16mf2x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_i16mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16mf2x5_m_vl31 (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x5_t v0)
{
  vssseg5e16_v_i16mf2x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_i16mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16mf2x6 (int16_t *base, ptrdiff_t bstride, vint16mf2x6_t v0, size_t vl)
{
  vssseg6e16_v_i16mf2x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_i16mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16mf2x6_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf2x6_t v0)
{
  vssseg6e16_v_i16mf2x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_i16mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16mf2x6_m (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x6_t v0, size_t vl)
{
  vssseg6e16_v_i16mf2x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_i16mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16mf2x6_m_vl31 (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x6_t v0)
{
  vssseg6e16_v_i16mf2x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_i16mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16mf2x7 (int16_t *base, ptrdiff_t bstride, vint16mf2x7_t v0, size_t vl)
{
  vssseg7e16_v_i16mf2x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_i16mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16mf2x7_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf2x7_t v0)
{
  vssseg7e16_v_i16mf2x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_i16mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16mf2x7_m (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x7_t v0, size_t vl)
{
  vssseg7e16_v_i16mf2x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_i16mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16mf2x7_m_vl31 (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x7_t v0)
{
  vssseg7e16_v_i16mf2x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_i16mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16mf2x8 (int16_t *base, ptrdiff_t bstride, vint16mf2x8_t v0, size_t vl)
{
  vssseg8e16_v_i16mf2x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_i16mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16mf2x8_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf2x8_t v0)
{
  vssseg8e16_v_i16mf2x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_i16mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16mf2x8_m (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x8_t v0, size_t vl)
{
  vssseg8e16_v_i16mf2x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_i16mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16mf2x8_m_vl31 (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x8_t v0)
{
  vssseg8e16_v_i16mf2x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_i16m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m1x2 (int16_t *base, ptrdiff_t bstride, vint16m1x2_t v0, size_t vl)
{
  vssseg2e16_v_i16m1x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_i16m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m1x2_vl31 (int16_t *base, ptrdiff_t bstride, vint16m1x2_t v0)
{
  vssseg2e16_v_i16m1x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_i16m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m1x2_m (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x2_t v0, size_t vl)
{
  vssseg2e16_v_i16m1x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_i16m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m1x2_m_vl31 (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x2_t v0)
{
  vssseg2e16_v_i16m1x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_i16m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16m1x3 (int16_t *base, ptrdiff_t bstride, vint16m1x3_t v0, size_t vl)
{
  vssseg3e16_v_i16m1x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_i16m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16m1x3_vl31 (int16_t *base, ptrdiff_t bstride, vint16m1x3_t v0)
{
  vssseg3e16_v_i16m1x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_i16m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16m1x3_m (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x3_t v0, size_t vl)
{
  vssseg3e16_v_i16m1x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_i16m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16m1x3_m_vl31 (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x3_t v0)
{
  vssseg3e16_v_i16m1x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_i16m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16m1x4 (int16_t *base, ptrdiff_t bstride, vint16m1x4_t v0, size_t vl)
{
  vssseg4e16_v_i16m1x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_i16m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16m1x4_vl31 (int16_t *base, ptrdiff_t bstride, vint16m1x4_t v0)
{
  vssseg4e16_v_i16m1x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_i16m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16m1x4_m (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x4_t v0, size_t vl)
{
  vssseg4e16_v_i16m1x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_i16m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16m1x4_m_vl31 (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x4_t v0)
{
  vssseg4e16_v_i16m1x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_i16m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16m1x5 (int16_t *base, ptrdiff_t bstride, vint16m1x5_t v0, size_t vl)
{
  vssseg5e16_v_i16m1x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_i16m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16m1x5_vl31 (int16_t *base, ptrdiff_t bstride, vint16m1x5_t v0)
{
  vssseg5e16_v_i16m1x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_i16m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16m1x5_m (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x5_t v0, size_t vl)
{
  vssseg5e16_v_i16m1x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_i16m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16m1x5_m_vl31 (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x5_t v0)
{
  vssseg5e16_v_i16m1x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_i16m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16m1x6 (int16_t *base, ptrdiff_t bstride, vint16m1x6_t v0, size_t vl)
{
  vssseg6e16_v_i16m1x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_i16m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16m1x6_vl31 (int16_t *base, ptrdiff_t bstride, vint16m1x6_t v0)
{
  vssseg6e16_v_i16m1x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_i16m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16m1x6_m (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x6_t v0, size_t vl)
{
  vssseg6e16_v_i16m1x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_i16m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16m1x6_m_vl31 (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x6_t v0)
{
  vssseg6e16_v_i16m1x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_i16m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16m1x7 (int16_t *base, ptrdiff_t bstride, vint16m1x7_t v0, size_t vl)
{
  vssseg7e16_v_i16m1x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_i16m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16m1x7_vl31 (int16_t *base, ptrdiff_t bstride, vint16m1x7_t v0)
{
  vssseg7e16_v_i16m1x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_i16m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16m1x7_m (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x7_t v0, size_t vl)
{
  vssseg7e16_v_i16m1x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_i16m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16m1x7_m_vl31 (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x7_t v0)
{
  vssseg7e16_v_i16m1x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_i16m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16m1x8 (int16_t *base, ptrdiff_t bstride, vint16m1x8_t v0, size_t vl)
{
  vssseg8e16_v_i16m1x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_i16m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16m1x8_vl31 (int16_t *base, ptrdiff_t bstride, vint16m1x8_t v0)
{
  vssseg8e16_v_i16m1x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_i16m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16m1x8_m (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x8_t v0, size_t vl)
{
  vssseg8e16_v_i16m1x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_i16m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16m1x8_m_vl31 (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x8_t v0)
{
  vssseg8e16_v_i16m1x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_i16m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m2x2 (int16_t *base, ptrdiff_t bstride, vint16m2x2_t v0, size_t vl)
{
  vssseg2e16_v_i16m2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_i16m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m2x2_vl31 (int16_t *base, ptrdiff_t bstride, vint16m2x2_t v0)
{
  vssseg2e16_v_i16m2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_i16m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m2x2_m (vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2x2_t v0, size_t vl)
{
  vssseg2e16_v_i16m2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_i16m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m2x2_m_vl31 (vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2x2_t v0)
{
  vssseg2e16_v_i16m2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_i16m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16m2x3 (int16_t *base, ptrdiff_t bstride, vint16m2x3_t v0, size_t vl)
{
  vssseg3e16_v_i16m2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_i16m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16m2x3_vl31 (int16_t *base, ptrdiff_t bstride, vint16m2x3_t v0)
{
  vssseg3e16_v_i16m2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_i16m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16m2x3_m (vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2x3_t v0, size_t vl)
{
  vssseg3e16_v_i16m2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_i16m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16m2x3_m_vl31 (vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2x3_t v0)
{
  vssseg3e16_v_i16m2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_i16m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16m2x4 (int16_t *base, ptrdiff_t bstride, vint16m2x4_t v0, size_t vl)
{
  vssseg4e16_v_i16m2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_i16m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16m2x4_vl31 (int16_t *base, ptrdiff_t bstride, vint16m2x4_t v0)
{
  vssseg4e16_v_i16m2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_i16m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16m2x4_m (vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2x4_t v0, size_t vl)
{
  vssseg4e16_v_i16m2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_i16m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16m2x4_m_vl31 (vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2x4_t v0)
{
  vssseg4e16_v_i16m2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_i16m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m4x2 (int16_t *base, ptrdiff_t bstride, vint16m4x2_t v0, size_t vl)
{
  vssseg2e16_v_i16m4x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_i16m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m4x2_vl31 (int16_t *base, ptrdiff_t bstride, vint16m4x2_t v0)
{
  vssseg2e16_v_i16m4x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_i16m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m4x2_m (vbool4_t mask, int16_t *base, ptrdiff_t bstride, vint16m4x2_t v0, size_t vl)
{
  vssseg2e16_v_i16m4x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_i16m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m4x2_m_vl31 (vbool4_t mask, int16_t *base, ptrdiff_t bstride, vint16m4x2_t v0)
{
  vssseg2e16_v_i16m4x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_i32mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32mf2x2 (int32_t *base, ptrdiff_t bstride, vint32mf2x2_t v0, size_t vl)
{
  vssseg2e32_v_i32mf2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_i32mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32mf2x2_vl31 (int32_t *base, ptrdiff_t bstride, vint32mf2x2_t v0)
{
  vssseg2e32_v_i32mf2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_i32mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32mf2x2_m (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x2_t v0, size_t vl)
{
  vssseg2e32_v_i32mf2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_i32mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32mf2x2_m_vl31 (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x2_t v0)
{
  vssseg2e32_v_i32mf2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_i32mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32mf2x3 (int32_t *base, ptrdiff_t bstride, vint32mf2x3_t v0, size_t vl)
{
  vssseg3e32_v_i32mf2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_i32mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32mf2x3_vl31 (int32_t *base, ptrdiff_t bstride, vint32mf2x3_t v0)
{
  vssseg3e32_v_i32mf2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_i32mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32mf2x3_m (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x3_t v0, size_t vl)
{
  vssseg3e32_v_i32mf2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_i32mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32mf2x3_m_vl31 (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x3_t v0)
{
  vssseg3e32_v_i32mf2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_i32mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32mf2x4 (int32_t *base, ptrdiff_t bstride, vint32mf2x4_t v0, size_t vl)
{
  vssseg4e32_v_i32mf2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_i32mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32mf2x4_vl31 (int32_t *base, ptrdiff_t bstride, vint32mf2x4_t v0)
{
  vssseg4e32_v_i32mf2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_i32mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32mf2x4_m (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x4_t v0, size_t vl)
{
  vssseg4e32_v_i32mf2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_i32mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32mf2x4_m_vl31 (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x4_t v0)
{
  vssseg4e32_v_i32mf2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e32_v_i32mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_i32mf2x5 (int32_t *base, ptrdiff_t bstride, vint32mf2x5_t v0, size_t vl)
{
  vssseg5e32_v_i32mf2x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e32_v_i32mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_i32mf2x5_vl31 (int32_t *base, ptrdiff_t bstride, vint32mf2x5_t v0)
{
  vssseg5e32_v_i32mf2x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e32_v_i32mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_i32mf2x5_m (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x5_t v0, size_t vl)
{
  vssseg5e32_v_i32mf2x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e32_v_i32mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_i32mf2x5_m_vl31 (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x5_t v0)
{
  vssseg5e32_v_i32mf2x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e32_v_i32mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_i32mf2x6 (int32_t *base, ptrdiff_t bstride, vint32mf2x6_t v0, size_t vl)
{
  vssseg6e32_v_i32mf2x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e32_v_i32mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_i32mf2x6_vl31 (int32_t *base, ptrdiff_t bstride, vint32mf2x6_t v0)
{
  vssseg6e32_v_i32mf2x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e32_v_i32mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_i32mf2x6_m (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x6_t v0, size_t vl)
{
  vssseg6e32_v_i32mf2x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e32_v_i32mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_i32mf2x6_m_vl31 (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x6_t v0)
{
  vssseg6e32_v_i32mf2x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e32_v_i32mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_i32mf2x7 (int32_t *base, ptrdiff_t bstride, vint32mf2x7_t v0, size_t vl)
{
  vssseg7e32_v_i32mf2x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e32_v_i32mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_i32mf2x7_vl31 (int32_t *base, ptrdiff_t bstride, vint32mf2x7_t v0)
{
  vssseg7e32_v_i32mf2x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e32_v_i32mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_i32mf2x7_m (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x7_t v0, size_t vl)
{
  vssseg7e32_v_i32mf2x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e32_v_i32mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_i32mf2x7_m_vl31 (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x7_t v0)
{
  vssseg7e32_v_i32mf2x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e32_v_i32mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_i32mf2x8 (int32_t *base, ptrdiff_t bstride, vint32mf2x8_t v0, size_t vl)
{
  vssseg8e32_v_i32mf2x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e32_v_i32mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_i32mf2x8_vl31 (int32_t *base, ptrdiff_t bstride, vint32mf2x8_t v0)
{
  vssseg8e32_v_i32mf2x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e32_v_i32mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_i32mf2x8_m (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x8_t v0, size_t vl)
{
  vssseg8e32_v_i32mf2x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e32_v_i32mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_i32mf2x8_m_vl31 (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x8_t v0)
{
  vssseg8e32_v_i32mf2x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_i32m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m1x2 (int32_t *base, ptrdiff_t bstride, vint32m1x2_t v0, size_t vl)
{
  vssseg2e32_v_i32m1x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_i32m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m1x2_vl31 (int32_t *base, ptrdiff_t bstride, vint32m1x2_t v0)
{
  vssseg2e32_v_i32m1x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_i32m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m1x2_m (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x2_t v0, size_t vl)
{
  vssseg2e32_v_i32m1x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_i32m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m1x2_m_vl31 (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x2_t v0)
{
  vssseg2e32_v_i32m1x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_i32m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32m1x3 (int32_t *base, ptrdiff_t bstride, vint32m1x3_t v0, size_t vl)
{
  vssseg3e32_v_i32m1x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_i32m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32m1x3_vl31 (int32_t *base, ptrdiff_t bstride, vint32m1x3_t v0)
{
  vssseg3e32_v_i32m1x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_i32m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32m1x3_m (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x3_t v0, size_t vl)
{
  vssseg3e32_v_i32m1x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_i32m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32m1x3_m_vl31 (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x3_t v0)
{
  vssseg3e32_v_i32m1x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_i32m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32m1x4 (int32_t *base, ptrdiff_t bstride, vint32m1x4_t v0, size_t vl)
{
  vssseg4e32_v_i32m1x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_i32m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32m1x4_vl31 (int32_t *base, ptrdiff_t bstride, vint32m1x4_t v0)
{
  vssseg4e32_v_i32m1x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_i32m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32m1x4_m (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x4_t v0, size_t vl)
{
  vssseg4e32_v_i32m1x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_i32m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32m1x4_m_vl31 (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x4_t v0)
{
  vssseg4e32_v_i32m1x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e32_v_i32m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_i32m1x5 (int32_t *base, ptrdiff_t bstride, vint32m1x5_t v0, size_t vl)
{
  vssseg5e32_v_i32m1x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e32_v_i32m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_i32m1x5_vl31 (int32_t *base, ptrdiff_t bstride, vint32m1x5_t v0)
{
  vssseg5e32_v_i32m1x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e32_v_i32m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_i32m1x5_m (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x5_t v0, size_t vl)
{
  vssseg5e32_v_i32m1x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e32_v_i32m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_i32m1x5_m_vl31 (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x5_t v0)
{
  vssseg5e32_v_i32m1x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e32_v_i32m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_i32m1x6 (int32_t *base, ptrdiff_t bstride, vint32m1x6_t v0, size_t vl)
{
  vssseg6e32_v_i32m1x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e32_v_i32m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_i32m1x6_vl31 (int32_t *base, ptrdiff_t bstride, vint32m1x6_t v0)
{
  vssseg6e32_v_i32m1x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e32_v_i32m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_i32m1x6_m (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x6_t v0, size_t vl)
{
  vssseg6e32_v_i32m1x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e32_v_i32m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_i32m1x6_m_vl31 (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x6_t v0)
{
  vssseg6e32_v_i32m1x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e32_v_i32m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_i32m1x7 (int32_t *base, ptrdiff_t bstride, vint32m1x7_t v0, size_t vl)
{
  vssseg7e32_v_i32m1x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e32_v_i32m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_i32m1x7_vl31 (int32_t *base, ptrdiff_t bstride, vint32m1x7_t v0)
{
  vssseg7e32_v_i32m1x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e32_v_i32m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_i32m1x7_m (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x7_t v0, size_t vl)
{
  vssseg7e32_v_i32m1x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e32_v_i32m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_i32m1x7_m_vl31 (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x7_t v0)
{
  vssseg7e32_v_i32m1x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e32_v_i32m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_i32m1x8 (int32_t *base, ptrdiff_t bstride, vint32m1x8_t v0, size_t vl)
{
  vssseg8e32_v_i32m1x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e32_v_i32m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_i32m1x8_vl31 (int32_t *base, ptrdiff_t bstride, vint32m1x8_t v0)
{
  vssseg8e32_v_i32m1x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e32_v_i32m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_i32m1x8_m (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x8_t v0, size_t vl)
{
  vssseg8e32_v_i32m1x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e32_v_i32m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_i32m1x8_m_vl31 (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x8_t v0)
{
  vssseg8e32_v_i32m1x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_i32m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m2x2 (int32_t *base, ptrdiff_t bstride, vint32m2x2_t v0, size_t vl)
{
  vssseg2e32_v_i32m2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_i32m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m2x2_vl31 (int32_t *base, ptrdiff_t bstride, vint32m2x2_t v0)
{
  vssseg2e32_v_i32m2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_i32m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m2x2_m (vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2x2_t v0, size_t vl)
{
  vssseg2e32_v_i32m2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_i32m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m2x2_m_vl31 (vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2x2_t v0)
{
  vssseg2e32_v_i32m2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_i32m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32m2x3 (int32_t *base, ptrdiff_t bstride, vint32m2x3_t v0, size_t vl)
{
  vssseg3e32_v_i32m2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_i32m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32m2x3_vl31 (int32_t *base, ptrdiff_t bstride, vint32m2x3_t v0)
{
  vssseg3e32_v_i32m2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_i32m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32m2x3_m (vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2x3_t v0, size_t vl)
{
  vssseg3e32_v_i32m2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_i32m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32m2x3_m_vl31 (vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2x3_t v0)
{
  vssseg3e32_v_i32m2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_i32m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32m2x4 (int32_t *base, ptrdiff_t bstride, vint32m2x4_t v0, size_t vl)
{
  vssseg4e32_v_i32m2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_i32m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32m2x4_vl31 (int32_t *base, ptrdiff_t bstride, vint32m2x4_t v0)
{
  vssseg4e32_v_i32m2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_i32m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32m2x4_m (vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2x4_t v0, size_t vl)
{
  vssseg4e32_v_i32m2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_i32m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32m2x4_m_vl31 (vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2x4_t v0)
{
  vssseg4e32_v_i32m2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_i32m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m4x2 (int32_t *base, ptrdiff_t bstride, vint32m4x2_t v0, size_t vl)
{
  vssseg2e32_v_i32m4x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_i32m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m4x2_vl31 (int32_t *base, ptrdiff_t bstride, vint32m4x2_t v0)
{
  vssseg2e32_v_i32m4x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_i32m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m4x2_m (vbool8_t mask, int32_t *base, ptrdiff_t bstride, vint32m4x2_t v0, size_t vl)
{
  vssseg2e32_v_i32m4x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_i32m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m4x2_m_vl31 (vbool8_t mask, int32_t *base, ptrdiff_t bstride, vint32m4x2_t v0)
{
  vssseg2e32_v_i32m4x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_i64m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m1x2 (int64_t *base, ptrdiff_t bstride, vint64m1x2_t v0, size_t vl)
{
  vssseg2e64_v_i64m1x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_i64m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m1x2_vl31 (int64_t *base, ptrdiff_t bstride, vint64m1x2_t v0)
{
  vssseg2e64_v_i64m1x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_i64m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m1x2_m (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x2_t v0, size_t vl)
{
  vssseg2e64_v_i64m1x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_i64m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m1x2_m_vl31 (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x2_t v0)
{
  vssseg2e64_v_i64m1x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e64_v_i64m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_i64m1x3 (int64_t *base, ptrdiff_t bstride, vint64m1x3_t v0, size_t vl)
{
  vssseg3e64_v_i64m1x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e64_v_i64m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_i64m1x3_vl31 (int64_t *base, ptrdiff_t bstride, vint64m1x3_t v0)
{
  vssseg3e64_v_i64m1x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e64_v_i64m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_i64m1x3_m (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x3_t v0, size_t vl)
{
  vssseg3e64_v_i64m1x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e64_v_i64m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_i64m1x3_m_vl31 (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x3_t v0)
{
  vssseg3e64_v_i64m1x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e64_v_i64m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_i64m1x4 (int64_t *base, ptrdiff_t bstride, vint64m1x4_t v0, size_t vl)
{
  vssseg4e64_v_i64m1x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e64_v_i64m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_i64m1x4_vl31 (int64_t *base, ptrdiff_t bstride, vint64m1x4_t v0)
{
  vssseg4e64_v_i64m1x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e64_v_i64m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_i64m1x4_m (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x4_t v0, size_t vl)
{
  vssseg4e64_v_i64m1x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e64_v_i64m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_i64m1x4_m_vl31 (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x4_t v0)
{
  vssseg4e64_v_i64m1x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e64_v_i64m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e64_v_i64m1x5 (int64_t *base, ptrdiff_t bstride, vint64m1x5_t v0, size_t vl)
{
  vssseg5e64_v_i64m1x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e64_v_i64m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e64_v_i64m1x5_vl31 (int64_t *base, ptrdiff_t bstride, vint64m1x5_t v0)
{
  vssseg5e64_v_i64m1x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e64_v_i64m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e64_v_i64m1x5_m (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x5_t v0, size_t vl)
{
  vssseg5e64_v_i64m1x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e64_v_i64m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e64_v_i64m1x5_m_vl31 (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x5_t v0)
{
  vssseg5e64_v_i64m1x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e64_v_i64m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e64_v_i64m1x6 (int64_t *base, ptrdiff_t bstride, vint64m1x6_t v0, size_t vl)
{
  vssseg6e64_v_i64m1x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e64_v_i64m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e64_v_i64m1x6_vl31 (int64_t *base, ptrdiff_t bstride, vint64m1x6_t v0)
{
  vssseg6e64_v_i64m1x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e64_v_i64m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e64_v_i64m1x6_m (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x6_t v0, size_t vl)
{
  vssseg6e64_v_i64m1x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e64_v_i64m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e64_v_i64m1x6_m_vl31 (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x6_t v0)
{
  vssseg6e64_v_i64m1x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e64_v_i64m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e64_v_i64m1x7 (int64_t *base, ptrdiff_t bstride, vint64m1x7_t v0, size_t vl)
{
  vssseg7e64_v_i64m1x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e64_v_i64m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e64_v_i64m1x7_vl31 (int64_t *base, ptrdiff_t bstride, vint64m1x7_t v0)
{
  vssseg7e64_v_i64m1x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e64_v_i64m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e64_v_i64m1x7_m (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x7_t v0, size_t vl)
{
  vssseg7e64_v_i64m1x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e64_v_i64m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e64_v_i64m1x7_m_vl31 (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x7_t v0)
{
  vssseg7e64_v_i64m1x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e64_v_i64m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e64_v_i64m1x8 (int64_t *base, ptrdiff_t bstride, vint64m1x8_t v0, size_t vl)
{
  vssseg8e64_v_i64m1x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e64_v_i64m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e64_v_i64m1x8_vl31 (int64_t *base, ptrdiff_t bstride, vint64m1x8_t v0)
{
  vssseg8e64_v_i64m1x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e64_v_i64m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e64_v_i64m1x8_m (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x8_t v0, size_t vl)
{
  vssseg8e64_v_i64m1x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e64_v_i64m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e64_v_i64m1x8_m_vl31 (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x8_t v0)
{
  vssseg8e64_v_i64m1x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_i64m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m2x2 (int64_t *base, ptrdiff_t bstride, vint64m2x2_t v0, size_t vl)
{
  vssseg2e64_v_i64m2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_i64m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m2x2_vl31 (int64_t *base, ptrdiff_t bstride, vint64m2x2_t v0)
{
  vssseg2e64_v_i64m2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_i64m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m2x2_m (vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2x2_t v0, size_t vl)
{
  vssseg2e64_v_i64m2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_i64m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m2x2_m_vl31 (vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2x2_t v0)
{
  vssseg2e64_v_i64m2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e64_v_i64m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_i64m2x3 (int64_t *base, ptrdiff_t bstride, vint64m2x3_t v0, size_t vl)
{
  vssseg3e64_v_i64m2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e64_v_i64m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_i64m2x3_vl31 (int64_t *base, ptrdiff_t bstride, vint64m2x3_t v0)
{
  vssseg3e64_v_i64m2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e64_v_i64m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_i64m2x3_m (vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2x3_t v0, size_t vl)
{
  vssseg3e64_v_i64m2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e64_v_i64m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_i64m2x3_m_vl31 (vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2x3_t v0)
{
  vssseg3e64_v_i64m2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e64_v_i64m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_i64m2x4 (int64_t *base, ptrdiff_t bstride, vint64m2x4_t v0, size_t vl)
{
  vssseg4e64_v_i64m2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e64_v_i64m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_i64m2x4_vl31 (int64_t *base, ptrdiff_t bstride, vint64m2x4_t v0)
{
  vssseg4e64_v_i64m2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e64_v_i64m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_i64m2x4_m (vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2x4_t v0, size_t vl)
{
  vssseg4e64_v_i64m2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e64_v_i64m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_i64m2x4_m_vl31 (vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2x4_t v0)
{
  vssseg4e64_v_i64m2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_i64m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m4x2 (int64_t *base, ptrdiff_t bstride, vint64m4x2_t v0, size_t vl)
{
  vssseg2e64_v_i64m4x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_i64m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m4x2_vl31 (int64_t *base, ptrdiff_t bstride, vint64m4x2_t v0)
{
  vssseg2e64_v_i64m4x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_i64m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m4x2_m (vbool16_t mask, int64_t *base, ptrdiff_t bstride, vint64m4x2_t v0, size_t vl)
{
  vssseg2e64_v_i64m4x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_i64m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m4x2_m_vl31 (vbool16_t mask, int64_t *base, ptrdiff_t bstride, vint64m4x2_t v0)
{
  vssseg2e64_v_i64m4x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_u8mf8x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf8x2 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x2_t v0, size_t vl)
{
  vssseg2e8_v_u8mf8x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_u8mf8x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf8x2_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x2_t v0)
{
  vssseg2e8_v_u8mf8x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_u8mf8x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf8x2_m (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x2_t v0, size_t vl)
{
  vssseg2e8_v_u8mf8x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_u8mf8x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf8x2_m_vl31 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x2_t v0)
{
  vssseg2e8_v_u8mf8x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_u8mf8x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf8x3 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x3_t v0, size_t vl)
{
  vssseg3e8_v_u8mf8x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_u8mf8x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf8x3_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x3_t v0)
{
  vssseg3e8_v_u8mf8x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_u8mf8x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf8x3_m (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x3_t v0, size_t vl)
{
  vssseg3e8_v_u8mf8x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_u8mf8x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf8x3_m_vl31 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x3_t v0)
{
  vssseg3e8_v_u8mf8x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_u8mf8x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf8x4 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x4_t v0, size_t vl)
{
  vssseg4e8_v_u8mf8x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_u8mf8x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf8x4_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x4_t v0)
{
  vssseg4e8_v_u8mf8x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_u8mf8x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf8x4_m (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x4_t v0, size_t vl)
{
  vssseg4e8_v_u8mf8x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_u8mf8x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf8x4_m_vl31 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x4_t v0)
{
  vssseg4e8_v_u8mf8x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e8_v_u8mf8x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf8x5 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x5_t v0, size_t vl)
{
  vssseg5e8_v_u8mf8x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e8_v_u8mf8x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf8x5_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x5_t v0)
{
  vssseg5e8_v_u8mf8x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e8_v_u8mf8x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf8x5_m (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x5_t v0, size_t vl)
{
  vssseg5e8_v_u8mf8x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e8_v_u8mf8x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf8x5_m_vl31 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x5_t v0)
{
  vssseg5e8_v_u8mf8x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e8_v_u8mf8x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf8x6 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x6_t v0, size_t vl)
{
  vssseg6e8_v_u8mf8x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e8_v_u8mf8x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf8x6_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x6_t v0)
{
  vssseg6e8_v_u8mf8x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e8_v_u8mf8x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf8x6_m (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x6_t v0, size_t vl)
{
  vssseg6e8_v_u8mf8x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e8_v_u8mf8x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf8x6_m_vl31 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x6_t v0)
{
  vssseg6e8_v_u8mf8x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e8_v_u8mf8x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf8x7 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x7_t v0, size_t vl)
{
  vssseg7e8_v_u8mf8x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e8_v_u8mf8x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf8x7_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x7_t v0)
{
  vssseg7e8_v_u8mf8x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e8_v_u8mf8x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf8x7_m (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x7_t v0, size_t vl)
{
  vssseg7e8_v_u8mf8x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e8_v_u8mf8x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf8x7_m_vl31 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x7_t v0)
{
  vssseg7e8_v_u8mf8x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e8_v_u8mf8x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf8x8 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x8_t v0, size_t vl)
{
  vssseg8e8_v_u8mf8x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e8_v_u8mf8x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf8x8_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x8_t v0)
{
  vssseg8e8_v_u8mf8x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e8_v_u8mf8x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf8x8_m (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x8_t v0, size_t vl)
{
  vssseg8e8_v_u8mf8x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e8_v_u8mf8x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf8x8_m_vl31 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x8_t v0)
{
  vssseg8e8_v_u8mf8x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_u8mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf4x2 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x2_t v0, size_t vl)
{
  vssseg2e8_v_u8mf4x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_u8mf4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf4x2_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x2_t v0)
{
  vssseg2e8_v_u8mf4x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_u8mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf4x2_m (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x2_t v0, size_t vl)
{
  vssseg2e8_v_u8mf4x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_u8mf4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf4x2_m_vl31 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x2_t v0)
{
  vssseg2e8_v_u8mf4x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_u8mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf4x3 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x3_t v0, size_t vl)
{
  vssseg3e8_v_u8mf4x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_u8mf4x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf4x3_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x3_t v0)
{
  vssseg3e8_v_u8mf4x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_u8mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf4x3_m (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x3_t v0, size_t vl)
{
  vssseg3e8_v_u8mf4x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_u8mf4x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf4x3_m_vl31 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x3_t v0)
{
  vssseg3e8_v_u8mf4x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_u8mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf4x4 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x4_t v0, size_t vl)
{
  vssseg4e8_v_u8mf4x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_u8mf4x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf4x4_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x4_t v0)
{
  vssseg4e8_v_u8mf4x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_u8mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf4x4_m (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x4_t v0, size_t vl)
{
  vssseg4e8_v_u8mf4x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_u8mf4x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf4x4_m_vl31 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x4_t v0)
{
  vssseg4e8_v_u8mf4x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e8_v_u8mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf4x5 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x5_t v0, size_t vl)
{
  vssseg5e8_v_u8mf4x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e8_v_u8mf4x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf4x5_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x5_t v0)
{
  vssseg5e8_v_u8mf4x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e8_v_u8mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf4x5_m (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x5_t v0, size_t vl)
{
  vssseg5e8_v_u8mf4x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e8_v_u8mf4x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf4x5_m_vl31 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x5_t v0)
{
  vssseg5e8_v_u8mf4x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e8_v_u8mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf4x6 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x6_t v0, size_t vl)
{
  vssseg6e8_v_u8mf4x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e8_v_u8mf4x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf4x6_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x6_t v0)
{
  vssseg6e8_v_u8mf4x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e8_v_u8mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf4x6_m (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x6_t v0, size_t vl)
{
  vssseg6e8_v_u8mf4x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e8_v_u8mf4x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf4x6_m_vl31 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x6_t v0)
{
  vssseg6e8_v_u8mf4x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e8_v_u8mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf4x7 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x7_t v0, size_t vl)
{
  vssseg7e8_v_u8mf4x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e8_v_u8mf4x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf4x7_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x7_t v0)
{
  vssseg7e8_v_u8mf4x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e8_v_u8mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf4x7_m (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x7_t v0, size_t vl)
{
  vssseg7e8_v_u8mf4x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e8_v_u8mf4x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf4x7_m_vl31 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x7_t v0)
{
  vssseg7e8_v_u8mf4x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e8_v_u8mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf4x8 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x8_t v0, size_t vl)
{
  vssseg8e8_v_u8mf4x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e8_v_u8mf4x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf4x8_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x8_t v0)
{
  vssseg8e8_v_u8mf4x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e8_v_u8mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf4x8_m (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x8_t v0, size_t vl)
{
  vssseg8e8_v_u8mf4x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e8_v_u8mf4x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf4x8_m_vl31 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x8_t v0)
{
  vssseg8e8_v_u8mf4x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_u8mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf2x2 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x2_t v0, size_t vl)
{
  vssseg2e8_v_u8mf2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_u8mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf2x2_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x2_t v0)
{
  vssseg2e8_v_u8mf2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_u8mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf2x2_m (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x2_t v0, size_t vl)
{
  vssseg2e8_v_u8mf2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_u8mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf2x2_m_vl31 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x2_t v0)
{
  vssseg2e8_v_u8mf2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_u8mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf2x3 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x3_t v0, size_t vl)
{
  vssseg3e8_v_u8mf2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_u8mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf2x3_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x3_t v0)
{
  vssseg3e8_v_u8mf2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_u8mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf2x3_m (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x3_t v0, size_t vl)
{
  vssseg3e8_v_u8mf2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_u8mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf2x3_m_vl31 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x3_t v0)
{
  vssseg3e8_v_u8mf2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_u8mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf2x4 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x4_t v0, size_t vl)
{
  vssseg4e8_v_u8mf2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_u8mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf2x4_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x4_t v0)
{
  vssseg4e8_v_u8mf2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_u8mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf2x4_m (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x4_t v0, size_t vl)
{
  vssseg4e8_v_u8mf2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_u8mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf2x4_m_vl31 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x4_t v0)
{
  vssseg4e8_v_u8mf2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e8_v_u8mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf2x5 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x5_t v0, size_t vl)
{
  vssseg5e8_v_u8mf2x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e8_v_u8mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf2x5_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x5_t v0)
{
  vssseg5e8_v_u8mf2x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e8_v_u8mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf2x5_m (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x5_t v0, size_t vl)
{
  vssseg5e8_v_u8mf2x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e8_v_u8mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf2x5_m_vl31 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x5_t v0)
{
  vssseg5e8_v_u8mf2x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e8_v_u8mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf2x6 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x6_t v0, size_t vl)
{
  vssseg6e8_v_u8mf2x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e8_v_u8mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf2x6_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x6_t v0)
{
  vssseg6e8_v_u8mf2x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e8_v_u8mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf2x6_m (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x6_t v0, size_t vl)
{
  vssseg6e8_v_u8mf2x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e8_v_u8mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf2x6_m_vl31 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x6_t v0)
{
  vssseg6e8_v_u8mf2x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e8_v_u8mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf2x7 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x7_t v0, size_t vl)
{
  vssseg7e8_v_u8mf2x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e8_v_u8mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf2x7_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x7_t v0)
{
  vssseg7e8_v_u8mf2x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e8_v_u8mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf2x7_m (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x7_t v0, size_t vl)
{
  vssseg7e8_v_u8mf2x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e8_v_u8mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf2x7_m_vl31 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x7_t v0)
{
  vssseg7e8_v_u8mf2x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e8_v_u8mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf2x8 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x8_t v0, size_t vl)
{
  vssseg8e8_v_u8mf2x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e8_v_u8mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf2x8_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x8_t v0)
{
  vssseg8e8_v_u8mf2x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e8_v_u8mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf2x8_m (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x8_t v0, size_t vl)
{
  vssseg8e8_v_u8mf2x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e8_v_u8mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf2x8_m_vl31 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x8_t v0)
{
  vssseg8e8_v_u8mf2x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_u8m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m1x2 (uint8_t *base, ptrdiff_t bstride, vuint8m1x2_t v0, size_t vl)
{
  vssseg2e8_v_u8m1x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_u8m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m1x2_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m1x2_t v0)
{
  vssseg2e8_v_u8m1x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_u8m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m1x2_m (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x2_t v0, size_t vl)
{
  vssseg2e8_v_u8m1x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_u8m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m1x2_m_vl31 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x2_t v0)
{
  vssseg2e8_v_u8m1x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_u8m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8m1x3 (uint8_t *base, ptrdiff_t bstride, vuint8m1x3_t v0, size_t vl)
{
  vssseg3e8_v_u8m1x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_u8m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8m1x3_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m1x3_t v0)
{
  vssseg3e8_v_u8m1x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_u8m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8m1x3_m (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x3_t v0, size_t vl)
{
  vssseg3e8_v_u8m1x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_u8m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8m1x3_m_vl31 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x3_t v0)
{
  vssseg3e8_v_u8m1x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_u8m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8m1x4 (uint8_t *base, ptrdiff_t bstride, vuint8m1x4_t v0, size_t vl)
{
  vssseg4e8_v_u8m1x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_u8m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8m1x4_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m1x4_t v0)
{
  vssseg4e8_v_u8m1x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_u8m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8m1x4_m (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x4_t v0, size_t vl)
{
  vssseg4e8_v_u8m1x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_u8m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8m1x4_m_vl31 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x4_t v0)
{
  vssseg4e8_v_u8m1x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e8_v_u8m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8m1x5 (uint8_t *base, ptrdiff_t bstride, vuint8m1x5_t v0, size_t vl)
{
  vssseg5e8_v_u8m1x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e8_v_u8m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8m1x5_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m1x5_t v0)
{
  vssseg5e8_v_u8m1x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e8_v_u8m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8m1x5_m (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x5_t v0, size_t vl)
{
  vssseg5e8_v_u8m1x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e8_v_u8m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8m1x5_m_vl31 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x5_t v0)
{
  vssseg5e8_v_u8m1x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e8_v_u8m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8m1x6 (uint8_t *base, ptrdiff_t bstride, vuint8m1x6_t v0, size_t vl)
{
  vssseg6e8_v_u8m1x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e8_v_u8m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8m1x6_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m1x6_t v0)
{
  vssseg6e8_v_u8m1x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e8_v_u8m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8m1x6_m (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x6_t v0, size_t vl)
{
  vssseg6e8_v_u8m1x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e8_v_u8m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8m1x6_m_vl31 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x6_t v0)
{
  vssseg6e8_v_u8m1x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e8_v_u8m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8m1x7 (uint8_t *base, ptrdiff_t bstride, vuint8m1x7_t v0, size_t vl)
{
  vssseg7e8_v_u8m1x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e8_v_u8m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8m1x7_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m1x7_t v0)
{
  vssseg7e8_v_u8m1x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e8_v_u8m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8m1x7_m (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x7_t v0, size_t vl)
{
  vssseg7e8_v_u8m1x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e8_v_u8m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8m1x7_m_vl31 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x7_t v0)
{
  vssseg7e8_v_u8m1x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e8_v_u8m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8m1x8 (uint8_t *base, ptrdiff_t bstride, vuint8m1x8_t v0, size_t vl)
{
  vssseg8e8_v_u8m1x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e8_v_u8m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8m1x8_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m1x8_t v0)
{
  vssseg8e8_v_u8m1x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e8_v_u8m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8m1x8_m (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x8_t v0, size_t vl)
{
  vssseg8e8_v_u8m1x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e8_v_u8m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8m1x8_m_vl31 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x8_t v0)
{
  vssseg8e8_v_u8m1x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_u8m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m2x2 (uint8_t *base, ptrdiff_t bstride, vuint8m2x2_t v0, size_t vl)
{
  vssseg2e8_v_u8m2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_u8m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m2x2_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m2x2_t v0)
{
  vssseg2e8_v_u8m2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_u8m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m2x2_m (vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2x2_t v0, size_t vl)
{
  vssseg2e8_v_u8m2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_u8m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m2x2_m_vl31 (vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2x2_t v0)
{
  vssseg2e8_v_u8m2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_u8m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8m2x3 (uint8_t *base, ptrdiff_t bstride, vuint8m2x3_t v0, size_t vl)
{
  vssseg3e8_v_u8m2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_u8m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8m2x3_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m2x3_t v0)
{
  vssseg3e8_v_u8m2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e8_v_u8m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8m2x3_m (vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2x3_t v0, size_t vl)
{
  vssseg3e8_v_u8m2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e8_v_u8m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8m2x3_m_vl31 (vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2x3_t v0)
{
  vssseg3e8_v_u8m2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_u8m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8m2x4 (uint8_t *base, ptrdiff_t bstride, vuint8m2x4_t v0, size_t vl)
{
  vssseg4e8_v_u8m2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_u8m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8m2x4_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m2x4_t v0)
{
  vssseg4e8_v_u8m2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e8_v_u8m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8m2x4_m (vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2x4_t v0, size_t vl)
{
  vssseg4e8_v_u8m2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e8_v_u8m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8m2x4_m_vl31 (vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2x4_t v0)
{
  vssseg4e8_v_u8m2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_u8m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m4x2 (uint8_t *base, ptrdiff_t bstride, vuint8m4x2_t v0, size_t vl)
{
  vssseg2e8_v_u8m4x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_u8m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m4x2_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m4x2_t v0)
{
  vssseg2e8_v_u8m4x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e8_v_u8m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m4x2_m (vbool2_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m4x2_t v0, size_t vl)
{
  vssseg2e8_v_u8m4x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e8_v_u8m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m4x2_m_vl31 (vbool2_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m4x2_t v0)
{
  vssseg2e8_v_u8m4x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_u16mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16mf4x2 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x2_t v0, size_t vl)
{
  vssseg2e16_v_u16mf4x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_u16mf4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16mf4x2_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x2_t v0)
{
  vssseg2e16_v_u16mf4x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_u16mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16mf4x2_m (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x2_t v0, size_t vl)
{
  vssseg2e16_v_u16mf4x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_u16mf4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16mf4x2_m_vl31 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x2_t v0)
{
  vssseg2e16_v_u16mf4x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_u16mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16mf4x3 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x3_t v0, size_t vl)
{
  vssseg3e16_v_u16mf4x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_u16mf4x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16mf4x3_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x3_t v0)
{
  vssseg3e16_v_u16mf4x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_u16mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16mf4x3_m (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x3_t v0, size_t vl)
{
  vssseg3e16_v_u16mf4x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_u16mf4x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16mf4x3_m_vl31 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x3_t v0)
{
  vssseg3e16_v_u16mf4x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_u16mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16mf4x4 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x4_t v0, size_t vl)
{
  vssseg4e16_v_u16mf4x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_u16mf4x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16mf4x4_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x4_t v0)
{
  vssseg4e16_v_u16mf4x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_u16mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16mf4x4_m (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x4_t v0, size_t vl)
{
  vssseg4e16_v_u16mf4x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_u16mf4x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16mf4x4_m_vl31 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x4_t v0)
{
  vssseg4e16_v_u16mf4x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_u16mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16mf4x5 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x5_t v0, size_t vl)
{
  vssseg5e16_v_u16mf4x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_u16mf4x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16mf4x5_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x5_t v0)
{
  vssseg5e16_v_u16mf4x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_u16mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16mf4x5_m (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x5_t v0, size_t vl)
{
  vssseg5e16_v_u16mf4x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_u16mf4x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16mf4x5_m_vl31 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x5_t v0)
{
  vssseg5e16_v_u16mf4x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_u16mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16mf4x6 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x6_t v0, size_t vl)
{
  vssseg6e16_v_u16mf4x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_u16mf4x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16mf4x6_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x6_t v0)
{
  vssseg6e16_v_u16mf4x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_u16mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16mf4x6_m (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x6_t v0, size_t vl)
{
  vssseg6e16_v_u16mf4x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_u16mf4x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16mf4x6_m_vl31 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x6_t v0)
{
  vssseg6e16_v_u16mf4x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_u16mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16mf4x7 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x7_t v0, size_t vl)
{
  vssseg7e16_v_u16mf4x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_u16mf4x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16mf4x7_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x7_t v0)
{
  vssseg7e16_v_u16mf4x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_u16mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16mf4x7_m (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x7_t v0, size_t vl)
{
  vssseg7e16_v_u16mf4x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_u16mf4x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16mf4x7_m_vl31 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x7_t v0)
{
  vssseg7e16_v_u16mf4x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_u16mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16mf4x8 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x8_t v0, size_t vl)
{
  vssseg8e16_v_u16mf4x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_u16mf4x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16mf4x8_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x8_t v0)
{
  vssseg8e16_v_u16mf4x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_u16mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16mf4x8_m (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x8_t v0, size_t vl)
{
  vssseg8e16_v_u16mf4x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_u16mf4x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16mf4x8_m_vl31 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x8_t v0)
{
  vssseg8e16_v_u16mf4x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_u16mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16mf2x2 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x2_t v0, size_t vl)
{
  vssseg2e16_v_u16mf2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_u16mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16mf2x2_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x2_t v0)
{
  vssseg2e16_v_u16mf2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_u16mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16mf2x2_m (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x2_t v0, size_t vl)
{
  vssseg2e16_v_u16mf2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_u16mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16mf2x2_m_vl31 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x2_t v0)
{
  vssseg2e16_v_u16mf2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_u16mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16mf2x3 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x3_t v0, size_t vl)
{
  vssseg3e16_v_u16mf2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_u16mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16mf2x3_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x3_t v0)
{
  vssseg3e16_v_u16mf2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_u16mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16mf2x3_m (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x3_t v0, size_t vl)
{
  vssseg3e16_v_u16mf2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_u16mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16mf2x3_m_vl31 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x3_t v0)
{
  vssseg3e16_v_u16mf2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_u16mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16mf2x4 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x4_t v0, size_t vl)
{
  vssseg4e16_v_u16mf2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_u16mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16mf2x4_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x4_t v0)
{
  vssseg4e16_v_u16mf2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_u16mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16mf2x4_m (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x4_t v0, size_t vl)
{
  vssseg4e16_v_u16mf2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_u16mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16mf2x4_m_vl31 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x4_t v0)
{
  vssseg4e16_v_u16mf2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_u16mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16mf2x5 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x5_t v0, size_t vl)
{
  vssseg5e16_v_u16mf2x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_u16mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16mf2x5_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x5_t v0)
{
  vssseg5e16_v_u16mf2x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_u16mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16mf2x5_m (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x5_t v0, size_t vl)
{
  vssseg5e16_v_u16mf2x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_u16mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16mf2x5_m_vl31 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x5_t v0)
{
  vssseg5e16_v_u16mf2x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_u16mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16mf2x6 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x6_t v0, size_t vl)
{
  vssseg6e16_v_u16mf2x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_u16mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16mf2x6_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x6_t v0)
{
  vssseg6e16_v_u16mf2x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_u16mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16mf2x6_m (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x6_t v0, size_t vl)
{
  vssseg6e16_v_u16mf2x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_u16mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16mf2x6_m_vl31 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x6_t v0)
{
  vssseg6e16_v_u16mf2x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_u16mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16mf2x7 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x7_t v0, size_t vl)
{
  vssseg7e16_v_u16mf2x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_u16mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16mf2x7_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x7_t v0)
{
  vssseg7e16_v_u16mf2x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_u16mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16mf2x7_m (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x7_t v0, size_t vl)
{
  vssseg7e16_v_u16mf2x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_u16mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16mf2x7_m_vl31 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x7_t v0)
{
  vssseg7e16_v_u16mf2x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_u16mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16mf2x8 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x8_t v0, size_t vl)
{
  vssseg8e16_v_u16mf2x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_u16mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16mf2x8_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x8_t v0)
{
  vssseg8e16_v_u16mf2x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_u16mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16mf2x8_m (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x8_t v0, size_t vl)
{
  vssseg8e16_v_u16mf2x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_u16mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16mf2x8_m_vl31 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x8_t v0)
{
  vssseg8e16_v_u16mf2x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_u16m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m1x2 (uint16_t *base, ptrdiff_t bstride, vuint16m1x2_t v0, size_t vl)
{
  vssseg2e16_v_u16m1x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_u16m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m1x2_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m1x2_t v0)
{
  vssseg2e16_v_u16m1x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_u16m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m1x2_m (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x2_t v0, size_t vl)
{
  vssseg2e16_v_u16m1x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_u16m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m1x2_m_vl31 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x2_t v0)
{
  vssseg2e16_v_u16m1x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_u16m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16m1x3 (uint16_t *base, ptrdiff_t bstride, vuint16m1x3_t v0, size_t vl)
{
  vssseg3e16_v_u16m1x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_u16m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16m1x3_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m1x3_t v0)
{
  vssseg3e16_v_u16m1x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_u16m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16m1x3_m (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x3_t v0, size_t vl)
{
  vssseg3e16_v_u16m1x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_u16m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16m1x3_m_vl31 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x3_t v0)
{
  vssseg3e16_v_u16m1x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_u16m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16m1x4 (uint16_t *base, ptrdiff_t bstride, vuint16m1x4_t v0, size_t vl)
{
  vssseg4e16_v_u16m1x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_u16m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16m1x4_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m1x4_t v0)
{
  vssseg4e16_v_u16m1x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_u16m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16m1x4_m (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x4_t v0, size_t vl)
{
  vssseg4e16_v_u16m1x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_u16m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16m1x4_m_vl31 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x4_t v0)
{
  vssseg4e16_v_u16m1x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_u16m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16m1x5 (uint16_t *base, ptrdiff_t bstride, vuint16m1x5_t v0, size_t vl)
{
  vssseg5e16_v_u16m1x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_u16m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16m1x5_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m1x5_t v0)
{
  vssseg5e16_v_u16m1x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e16_v_u16m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16m1x5_m (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x5_t v0, size_t vl)
{
  vssseg5e16_v_u16m1x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e16_v_u16m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16m1x5_m_vl31 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x5_t v0)
{
  vssseg5e16_v_u16m1x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_u16m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16m1x6 (uint16_t *base, ptrdiff_t bstride, vuint16m1x6_t v0, size_t vl)
{
  vssseg6e16_v_u16m1x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_u16m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16m1x6_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m1x6_t v0)
{
  vssseg6e16_v_u16m1x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e16_v_u16m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16m1x6_m (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x6_t v0, size_t vl)
{
  vssseg6e16_v_u16m1x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e16_v_u16m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16m1x6_m_vl31 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x6_t v0)
{
  vssseg6e16_v_u16m1x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_u16m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16m1x7 (uint16_t *base, ptrdiff_t bstride, vuint16m1x7_t v0, size_t vl)
{
  vssseg7e16_v_u16m1x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_u16m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16m1x7_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m1x7_t v0)
{
  vssseg7e16_v_u16m1x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e16_v_u16m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16m1x7_m (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x7_t v0, size_t vl)
{
  vssseg7e16_v_u16m1x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e16_v_u16m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16m1x7_m_vl31 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x7_t v0)
{
  vssseg7e16_v_u16m1x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_u16m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16m1x8 (uint16_t *base, ptrdiff_t bstride, vuint16m1x8_t v0, size_t vl)
{
  vssseg8e16_v_u16m1x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_u16m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16m1x8_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m1x8_t v0)
{
  vssseg8e16_v_u16m1x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e16_v_u16m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16m1x8_m (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x8_t v0, size_t vl)
{
  vssseg8e16_v_u16m1x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e16_v_u16m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16m1x8_m_vl31 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x8_t v0)
{
  vssseg8e16_v_u16m1x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_u16m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m2x2 (uint16_t *base, ptrdiff_t bstride, vuint16m2x2_t v0, size_t vl)
{
  vssseg2e16_v_u16m2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_u16m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m2x2_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m2x2_t v0)
{
  vssseg2e16_v_u16m2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_u16m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m2x2_m (vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2x2_t v0, size_t vl)
{
  vssseg2e16_v_u16m2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_u16m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m2x2_m_vl31 (vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2x2_t v0)
{
  vssseg2e16_v_u16m2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_u16m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16m2x3 (uint16_t *base, ptrdiff_t bstride, vuint16m2x3_t v0, size_t vl)
{
  vssseg3e16_v_u16m2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_u16m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16m2x3_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m2x3_t v0)
{
  vssseg3e16_v_u16m2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e16_v_u16m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16m2x3_m (vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2x3_t v0, size_t vl)
{
  vssseg3e16_v_u16m2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e16_v_u16m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16m2x3_m_vl31 (vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2x3_t v0)
{
  vssseg3e16_v_u16m2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_u16m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16m2x4 (uint16_t *base, ptrdiff_t bstride, vuint16m2x4_t v0, size_t vl)
{
  vssseg4e16_v_u16m2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_u16m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16m2x4_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m2x4_t v0)
{
  vssseg4e16_v_u16m2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e16_v_u16m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16m2x4_m (vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2x4_t v0, size_t vl)
{
  vssseg4e16_v_u16m2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e16_v_u16m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16m2x4_m_vl31 (vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2x4_t v0)
{
  vssseg4e16_v_u16m2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_u16m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m4x2 (uint16_t *base, ptrdiff_t bstride, vuint16m4x2_t v0, size_t vl)
{
  vssseg2e16_v_u16m4x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_u16m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m4x2_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m4x2_t v0)
{
  vssseg2e16_v_u16m4x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_u16m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m4x2_m (vbool4_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m4x2_t v0, size_t vl)
{
  vssseg2e16_v_u16m4x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e16_v_u16m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m4x2_m_vl31 (vbool4_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m4x2_t v0)
{
  vssseg2e16_v_u16m4x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_u32mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32mf2x2 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x2_t v0, size_t vl)
{
  vssseg2e32_v_u32mf2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_u32mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32mf2x2_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x2_t v0)
{
  vssseg2e32_v_u32mf2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_u32mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32mf2x2_m (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x2_t v0, size_t vl)
{
  vssseg2e32_v_u32mf2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_u32mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32mf2x2_m_vl31 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x2_t v0)
{
  vssseg2e32_v_u32mf2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_u32mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32mf2x3 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x3_t v0, size_t vl)
{
  vssseg3e32_v_u32mf2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_u32mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32mf2x3_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x3_t v0)
{
  vssseg3e32_v_u32mf2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_u32mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32mf2x3_m (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x3_t v0, size_t vl)
{
  vssseg3e32_v_u32mf2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_u32mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32mf2x3_m_vl31 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x3_t v0)
{
  vssseg3e32_v_u32mf2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_u32mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32mf2x4 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x4_t v0, size_t vl)
{
  vssseg4e32_v_u32mf2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_u32mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32mf2x4_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x4_t v0)
{
  vssseg4e32_v_u32mf2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_u32mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32mf2x4_m (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x4_t v0, size_t vl)
{
  vssseg4e32_v_u32mf2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_u32mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32mf2x4_m_vl31 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x4_t v0)
{
  vssseg4e32_v_u32mf2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e32_v_u32mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_u32mf2x5 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x5_t v0, size_t vl)
{
  vssseg5e32_v_u32mf2x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e32_v_u32mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_u32mf2x5_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x5_t v0)
{
  vssseg5e32_v_u32mf2x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e32_v_u32mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_u32mf2x5_m (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x5_t v0, size_t vl)
{
  vssseg5e32_v_u32mf2x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e32_v_u32mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_u32mf2x5_m_vl31 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x5_t v0)
{
  vssseg5e32_v_u32mf2x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e32_v_u32mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_u32mf2x6 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x6_t v0, size_t vl)
{
  vssseg6e32_v_u32mf2x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e32_v_u32mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_u32mf2x6_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x6_t v0)
{
  vssseg6e32_v_u32mf2x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e32_v_u32mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_u32mf2x6_m (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x6_t v0, size_t vl)
{
  vssseg6e32_v_u32mf2x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e32_v_u32mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_u32mf2x6_m_vl31 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x6_t v0)
{
  vssseg6e32_v_u32mf2x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e32_v_u32mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_u32mf2x7 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x7_t v0, size_t vl)
{
  vssseg7e32_v_u32mf2x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e32_v_u32mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_u32mf2x7_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x7_t v0)
{
  vssseg7e32_v_u32mf2x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e32_v_u32mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_u32mf2x7_m (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x7_t v0, size_t vl)
{
  vssseg7e32_v_u32mf2x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e32_v_u32mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_u32mf2x7_m_vl31 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x7_t v0)
{
  vssseg7e32_v_u32mf2x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e32_v_u32mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_u32mf2x8 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x8_t v0, size_t vl)
{
  vssseg8e32_v_u32mf2x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e32_v_u32mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_u32mf2x8_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x8_t v0)
{
  vssseg8e32_v_u32mf2x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e32_v_u32mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_u32mf2x8_m (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x8_t v0, size_t vl)
{
  vssseg8e32_v_u32mf2x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e32_v_u32mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_u32mf2x8_m_vl31 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x8_t v0)
{
  vssseg8e32_v_u32mf2x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_u32m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m1x2 (uint32_t *base, ptrdiff_t bstride, vuint32m1x2_t v0, size_t vl)
{
  vssseg2e32_v_u32m1x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_u32m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m1x2_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m1x2_t v0)
{
  vssseg2e32_v_u32m1x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_u32m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m1x2_m (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x2_t v0, size_t vl)
{
  vssseg2e32_v_u32m1x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_u32m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m1x2_m_vl31 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x2_t v0)
{
  vssseg2e32_v_u32m1x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_u32m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32m1x3 (uint32_t *base, ptrdiff_t bstride, vuint32m1x3_t v0, size_t vl)
{
  vssseg3e32_v_u32m1x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_u32m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32m1x3_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m1x3_t v0)
{
  vssseg3e32_v_u32m1x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_u32m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32m1x3_m (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x3_t v0, size_t vl)
{
  vssseg3e32_v_u32m1x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_u32m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32m1x3_m_vl31 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x3_t v0)
{
  vssseg3e32_v_u32m1x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_u32m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32m1x4 (uint32_t *base, ptrdiff_t bstride, vuint32m1x4_t v0, size_t vl)
{
  vssseg4e32_v_u32m1x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_u32m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32m1x4_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m1x4_t v0)
{
  vssseg4e32_v_u32m1x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_u32m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32m1x4_m (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x4_t v0, size_t vl)
{
  vssseg4e32_v_u32m1x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_u32m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32m1x4_m_vl31 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x4_t v0)
{
  vssseg4e32_v_u32m1x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e32_v_u32m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_u32m1x5 (uint32_t *base, ptrdiff_t bstride, vuint32m1x5_t v0, size_t vl)
{
  vssseg5e32_v_u32m1x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e32_v_u32m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_u32m1x5_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m1x5_t v0)
{
  vssseg5e32_v_u32m1x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e32_v_u32m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_u32m1x5_m (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x5_t v0, size_t vl)
{
  vssseg5e32_v_u32m1x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e32_v_u32m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_u32m1x5_m_vl31 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x5_t v0)
{
  vssseg5e32_v_u32m1x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e32_v_u32m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_u32m1x6 (uint32_t *base, ptrdiff_t bstride, vuint32m1x6_t v0, size_t vl)
{
  vssseg6e32_v_u32m1x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e32_v_u32m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_u32m1x6_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m1x6_t v0)
{
  vssseg6e32_v_u32m1x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e32_v_u32m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_u32m1x6_m (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x6_t v0, size_t vl)
{
  vssseg6e32_v_u32m1x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e32_v_u32m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_u32m1x6_m_vl31 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x6_t v0)
{
  vssseg6e32_v_u32m1x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e32_v_u32m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_u32m1x7 (uint32_t *base, ptrdiff_t bstride, vuint32m1x7_t v0, size_t vl)
{
  vssseg7e32_v_u32m1x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e32_v_u32m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_u32m1x7_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m1x7_t v0)
{
  vssseg7e32_v_u32m1x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e32_v_u32m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_u32m1x7_m (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x7_t v0, size_t vl)
{
  vssseg7e32_v_u32m1x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e32_v_u32m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_u32m1x7_m_vl31 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x7_t v0)
{
  vssseg7e32_v_u32m1x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e32_v_u32m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_u32m1x8 (uint32_t *base, ptrdiff_t bstride, vuint32m1x8_t v0, size_t vl)
{
  vssseg8e32_v_u32m1x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e32_v_u32m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_u32m1x8_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m1x8_t v0)
{
  vssseg8e32_v_u32m1x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e32_v_u32m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_u32m1x8_m (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x8_t v0, size_t vl)
{
  vssseg8e32_v_u32m1x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e32_v_u32m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_u32m1x8_m_vl31 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x8_t v0)
{
  vssseg8e32_v_u32m1x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_u32m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m2x2 (uint32_t *base, ptrdiff_t bstride, vuint32m2x2_t v0, size_t vl)
{
  vssseg2e32_v_u32m2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_u32m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m2x2_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m2x2_t v0)
{
  vssseg2e32_v_u32m2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_u32m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m2x2_m (vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2x2_t v0, size_t vl)
{
  vssseg2e32_v_u32m2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_u32m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m2x2_m_vl31 (vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2x2_t v0)
{
  vssseg2e32_v_u32m2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_u32m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32m2x3 (uint32_t *base, ptrdiff_t bstride, vuint32m2x3_t v0, size_t vl)
{
  vssseg3e32_v_u32m2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_u32m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32m2x3_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m2x3_t v0)
{
  vssseg3e32_v_u32m2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e32_v_u32m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32m2x3_m (vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2x3_t v0, size_t vl)
{
  vssseg3e32_v_u32m2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e32_v_u32m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32m2x3_m_vl31 (vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2x3_t v0)
{
  vssseg3e32_v_u32m2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_u32m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32m2x4 (uint32_t *base, ptrdiff_t bstride, vuint32m2x4_t v0, size_t vl)
{
  vssseg4e32_v_u32m2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_u32m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32m2x4_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m2x4_t v0)
{
  vssseg4e32_v_u32m2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e32_v_u32m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32m2x4_m (vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2x4_t v0, size_t vl)
{
  vssseg4e32_v_u32m2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e32_v_u32m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32m2x4_m_vl31 (vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2x4_t v0)
{
  vssseg4e32_v_u32m2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_u32m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m4x2 (uint32_t *base, ptrdiff_t bstride, vuint32m4x2_t v0, size_t vl)
{
  vssseg2e32_v_u32m4x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_u32m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m4x2_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m4x2_t v0)
{
  vssseg2e32_v_u32m4x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e32_v_u32m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m4x2_m (vbool8_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m4x2_t v0, size_t vl)
{
  vssseg2e32_v_u32m4x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e32_v_u32m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m4x2_m_vl31 (vbool8_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m4x2_t v0)
{
  vssseg2e32_v_u32m4x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_u64m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m1x2 (uint64_t *base, ptrdiff_t bstride, vuint64m1x2_t v0, size_t vl)
{
  vssseg2e64_v_u64m1x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_u64m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m1x2_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m1x2_t v0)
{
  vssseg2e64_v_u64m1x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_u64m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m1x2_m (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x2_t v0, size_t vl)
{
  vssseg2e64_v_u64m1x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_u64m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m1x2_m_vl31 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x2_t v0)
{
  vssseg2e64_v_u64m1x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e64_v_u64m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_u64m1x3 (uint64_t *base, ptrdiff_t bstride, vuint64m1x3_t v0, size_t vl)
{
  vssseg3e64_v_u64m1x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e64_v_u64m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_u64m1x3_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m1x3_t v0)
{
  vssseg3e64_v_u64m1x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e64_v_u64m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_u64m1x3_m (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x3_t v0, size_t vl)
{
  vssseg3e64_v_u64m1x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e64_v_u64m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_u64m1x3_m_vl31 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x3_t v0)
{
  vssseg3e64_v_u64m1x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e64_v_u64m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_u64m1x4 (uint64_t *base, ptrdiff_t bstride, vuint64m1x4_t v0, size_t vl)
{
  vssseg4e64_v_u64m1x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e64_v_u64m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_u64m1x4_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m1x4_t v0)
{
  vssseg4e64_v_u64m1x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e64_v_u64m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_u64m1x4_m (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x4_t v0, size_t vl)
{
  vssseg4e64_v_u64m1x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e64_v_u64m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_u64m1x4_m_vl31 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x4_t v0)
{
  vssseg4e64_v_u64m1x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg5e64_v_u64m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e64_v_u64m1x5 (uint64_t *base, ptrdiff_t bstride, vuint64m1x5_t v0, size_t vl)
{
  vssseg5e64_v_u64m1x5 (base, bstride, v0, vl);
}

/*
** test_vssseg5e64_v_u64m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e64_v_u64m1x5_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m1x5_t v0)
{
  vssseg5e64_v_u64m1x5 (base, bstride, v0, 31);
}

/*
** test_vssseg5e64_v_u64m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e64_v_u64m1x5_m (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x5_t v0, size_t vl)
{
  vssseg5e64_v_u64m1x5_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg5e64_v_u64m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e64_v_u64m1x5_m_vl31 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x5_t v0)
{
  vssseg5e64_v_u64m1x5_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg6e64_v_u64m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e64_v_u64m1x6 (uint64_t *base, ptrdiff_t bstride, vuint64m1x6_t v0, size_t vl)
{
  vssseg6e64_v_u64m1x6 (base, bstride, v0, vl);
}

/*
** test_vssseg6e64_v_u64m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e64_v_u64m1x6_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m1x6_t v0)
{
  vssseg6e64_v_u64m1x6 (base, bstride, v0, 31);
}

/*
** test_vssseg6e64_v_u64m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e64_v_u64m1x6_m (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x6_t v0, size_t vl)
{
  vssseg6e64_v_u64m1x6_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg6e64_v_u64m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e64_v_u64m1x6_m_vl31 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x6_t v0)
{
  vssseg6e64_v_u64m1x6_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg7e64_v_u64m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e64_v_u64m1x7 (uint64_t *base, ptrdiff_t bstride, vuint64m1x7_t v0, size_t vl)
{
  vssseg7e64_v_u64m1x7 (base, bstride, v0, vl);
}

/*
** test_vssseg7e64_v_u64m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e64_v_u64m1x7_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m1x7_t v0)
{
  vssseg7e64_v_u64m1x7 (base, bstride, v0, 31);
}

/*
** test_vssseg7e64_v_u64m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e64_v_u64m1x7_m (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x7_t v0, size_t vl)
{
  vssseg7e64_v_u64m1x7_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg7e64_v_u64m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e64_v_u64m1x7_m_vl31 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x7_t v0)
{
  vssseg7e64_v_u64m1x7_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg8e64_v_u64m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e64_v_u64m1x8 (uint64_t *base, ptrdiff_t bstride, vuint64m1x8_t v0, size_t vl)
{
  vssseg8e64_v_u64m1x8 (base, bstride, v0, vl);
}

/*
** test_vssseg8e64_v_u64m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e64_v_u64m1x8_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m1x8_t v0)
{
  vssseg8e64_v_u64m1x8 (base, bstride, v0, 31);
}

/*
** test_vssseg8e64_v_u64m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e64_v_u64m1x8_m (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x8_t v0, size_t vl)
{
  vssseg8e64_v_u64m1x8_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg8e64_v_u64m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e64_v_u64m1x8_m_vl31 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x8_t v0)
{
  vssseg8e64_v_u64m1x8_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_u64m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m2x2 (uint64_t *base, ptrdiff_t bstride, vuint64m2x2_t v0, size_t vl)
{
  vssseg2e64_v_u64m2x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_u64m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m2x2_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m2x2_t v0)
{
  vssseg2e64_v_u64m2x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_u64m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m2x2_m (vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2x2_t v0, size_t vl)
{
  vssseg2e64_v_u64m2x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_u64m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m2x2_m_vl31 (vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2x2_t v0)
{
  vssseg2e64_v_u64m2x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg3e64_v_u64m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_u64m2x3 (uint64_t *base, ptrdiff_t bstride, vuint64m2x3_t v0, size_t vl)
{
  vssseg3e64_v_u64m2x3 (base, bstride, v0, vl);
}

/*
** test_vssseg3e64_v_u64m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_u64m2x3_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m2x3_t v0)
{
  vssseg3e64_v_u64m2x3 (base, bstride, v0, 31);
}

/*
** test_vssseg3e64_v_u64m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_u64m2x3_m (vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2x3_t v0, size_t vl)
{
  vssseg3e64_v_u64m2x3_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg3e64_v_u64m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_u64m2x3_m_vl31 (vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2x3_t v0)
{
  vssseg3e64_v_u64m2x3_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg4e64_v_u64m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_u64m2x4 (uint64_t *base, ptrdiff_t bstride, vuint64m2x4_t v0, size_t vl)
{
  vssseg4e64_v_u64m2x4 (base, bstride, v0, vl);
}

/*
** test_vssseg4e64_v_u64m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_u64m2x4_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m2x4_t v0)
{
  vssseg4e64_v_u64m2x4 (base, bstride, v0, 31);
}

/*
** test_vssseg4e64_v_u64m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_u64m2x4_m (vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2x4_t v0, size_t vl)
{
  vssseg4e64_v_u64m2x4_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg4e64_v_u64m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_u64m2x4_m_vl31 (vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2x4_t v0)
{
  vssseg4e64_v_u64m2x4_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_u64m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m4x2 (uint64_t *base, ptrdiff_t bstride, vuint64m4x2_t v0, size_t vl)
{
  vssseg2e64_v_u64m4x2 (base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_u64m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m4x2_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m4x2_t v0)
{
  vssseg2e64_v_u64m4x2 (base, bstride, v0, 31);
}

/*
** test_vssseg2e64_v_u64m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m4x2_m (vbool16_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m4x2_t v0, size_t vl)
{
  vssseg2e64_v_u64m4x2_m (mask, base, bstride, v0, vl);
}

/*
** test_vssseg2e64_v_u64m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m4x2_m_vl31 (vbool16_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m4x2_t v0)
{
  vssseg2e64_v_u64m4x2_m (mask, base, bstride, v0, 31);
}

/*
** test_vssseg2e16_v_f16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16mf4x2_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x2_t v0)
{
  vssseg2e16_v_f16mf4x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_f16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16mf4x2_m_vl32 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x2_t v0)
{
  vssseg2e16_v_f16mf4x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_f16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16mf4x3_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x3_t v0)
{
  vssseg3e16_v_f16mf4x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_f16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16mf4x3_m_vl32 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x3_t v0)
{
  vssseg3e16_v_f16mf4x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_f16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16mf4x4_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x4_t v0)
{
  vssseg4e16_v_f16mf4x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_f16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16mf4x4_m_vl32 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x4_t v0)
{
  vssseg4e16_v_f16mf4x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_f16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16mf4x5_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x5_t v0)
{
  vssseg5e16_v_f16mf4x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_f16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16mf4x5_m_vl32 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x5_t v0)
{
  vssseg5e16_v_f16mf4x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_f16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16mf4x6_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x6_t v0)
{
  vssseg6e16_v_f16mf4x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_f16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16mf4x6_m_vl32 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x6_t v0)
{
  vssseg6e16_v_f16mf4x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_f16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16mf4x7_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x7_t v0)
{
  vssseg7e16_v_f16mf4x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_f16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16mf4x7_m_vl32 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x7_t v0)
{
  vssseg7e16_v_f16mf4x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_f16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16mf4x8_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16mf4x8_t v0)
{
  vssseg8e16_v_f16mf4x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_f16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16mf4x8_m_vl32 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x8_t v0)
{
  vssseg8e16_v_f16mf4x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_f16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16mf2x2_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x2_t v0)
{
  vssseg2e16_v_f16mf2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_f16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16mf2x2_m_vl32 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x2_t v0)
{
  vssseg2e16_v_f16mf2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_f16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16mf2x3_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x3_t v0)
{
  vssseg3e16_v_f16mf2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_f16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16mf2x3_m_vl32 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x3_t v0)
{
  vssseg3e16_v_f16mf2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_f16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16mf2x4_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x4_t v0)
{
  vssseg4e16_v_f16mf2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_f16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16mf2x4_m_vl32 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x4_t v0)
{
  vssseg4e16_v_f16mf2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_f16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16mf2x5_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x5_t v0)
{
  vssseg5e16_v_f16mf2x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_f16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16mf2x5_m_vl32 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x5_t v0)
{
  vssseg5e16_v_f16mf2x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_f16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16mf2x6_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x6_t v0)
{
  vssseg6e16_v_f16mf2x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_f16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16mf2x6_m_vl32 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x6_t v0)
{
  vssseg6e16_v_f16mf2x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_f16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16mf2x7_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x7_t v0)
{
  vssseg7e16_v_f16mf2x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_f16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16mf2x7_m_vl32 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x7_t v0)
{
  vssseg7e16_v_f16mf2x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_f16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16mf2x8_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16mf2x8_t v0)
{
  vssseg8e16_v_f16mf2x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_f16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16mf2x8_m_vl32 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x8_t v0)
{
  vssseg8e16_v_f16mf2x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_f16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m1x2_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16m1x2_t v0)
{
  vssseg2e16_v_f16m1x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_f16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m1x2_m_vl32 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x2_t v0)
{
  vssseg2e16_v_f16m1x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_f16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16m1x3_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16m1x3_t v0)
{
  vssseg3e16_v_f16m1x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_f16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16m1x3_m_vl32 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x3_t v0)
{
  vssseg3e16_v_f16m1x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_f16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16m1x4_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16m1x4_t v0)
{
  vssseg4e16_v_f16m1x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_f16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16m1x4_m_vl32 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x4_t v0)
{
  vssseg4e16_v_f16m1x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_f16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16m1x5_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16m1x5_t v0)
{
  vssseg5e16_v_f16m1x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_f16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_f16m1x5_m_vl32 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x5_t v0)
{
  vssseg5e16_v_f16m1x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_f16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16m1x6_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16m1x6_t v0)
{
  vssseg6e16_v_f16m1x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_f16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_f16m1x6_m_vl32 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x6_t v0)
{
  vssseg6e16_v_f16m1x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_f16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16m1x7_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16m1x7_t v0)
{
  vssseg7e16_v_f16m1x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_f16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_f16m1x7_m_vl32 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x7_t v0)
{
  vssseg7e16_v_f16m1x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_f16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16m1x8_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16m1x8_t v0)
{
  vssseg8e16_v_f16m1x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_f16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_f16m1x8_m_vl32 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x8_t v0)
{
  vssseg8e16_v_f16m1x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_f16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m2x2_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16m2x2_t v0)
{
  vssseg2e16_v_f16m2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_f16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m2x2_m_vl32 (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x2_t v0)
{
  vssseg2e16_v_f16m2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_f16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16m2x3_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16m2x3_t v0)
{
  vssseg3e16_v_f16m2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_f16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_f16m2x3_m_vl32 (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x3_t v0)
{
  vssseg3e16_v_f16m2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_f16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16m2x4_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16m2x4_t v0)
{
  vssseg4e16_v_f16m2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_f16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_f16m2x4_m_vl32 (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2x4_t v0)
{
  vssseg4e16_v_f16m2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_f16m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m4x2_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16m4x2_t v0)
{
  vssseg2e16_v_f16m4x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_f16m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_f16m4x2_m_vl32 (vbool4_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m4x2_t v0)
{
  vssseg2e16_v_f16m4x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_f32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32mf2x2_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x2_t v0)
{
  vssseg2e32_v_f32mf2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_f32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32mf2x2_m_vl32 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x2_t v0)
{
  vssseg2e32_v_f32mf2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_f32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32mf2x3_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x3_t v0)
{
  vssseg3e32_v_f32mf2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_f32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32mf2x3_m_vl32 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x3_t v0)
{
  vssseg3e32_v_f32mf2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_f32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32mf2x4_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x4_t v0)
{
  vssseg4e32_v_f32mf2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_f32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32mf2x4_m_vl32 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x4_t v0)
{
  vssseg4e32_v_f32mf2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e32_v_f32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_f32mf2x5_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x5_t v0)
{
  vssseg5e32_v_f32mf2x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e32_v_f32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_f32mf2x5_m_vl32 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x5_t v0)
{
  vssseg5e32_v_f32mf2x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e32_v_f32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_f32mf2x6_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x6_t v0)
{
  vssseg6e32_v_f32mf2x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e32_v_f32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_f32mf2x6_m_vl32 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x6_t v0)
{
  vssseg6e32_v_f32mf2x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e32_v_f32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_f32mf2x7_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x7_t v0)
{
  vssseg7e32_v_f32mf2x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e32_v_f32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_f32mf2x7_m_vl32 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x7_t v0)
{
  vssseg7e32_v_f32mf2x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e32_v_f32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_f32mf2x8_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32mf2x8_t v0)
{
  vssseg8e32_v_f32mf2x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e32_v_f32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_f32mf2x8_m_vl32 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x8_t v0)
{
  vssseg8e32_v_f32mf2x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_f32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m1x2_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32m1x2_t v0)
{
  vssseg2e32_v_f32m1x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_f32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m1x2_m_vl32 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x2_t v0)
{
  vssseg2e32_v_f32m1x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_f32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32m1x3_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32m1x3_t v0)
{
  vssseg3e32_v_f32m1x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_f32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32m1x3_m_vl32 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x3_t v0)
{
  vssseg3e32_v_f32m1x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_f32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32m1x4_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32m1x4_t v0)
{
  vssseg4e32_v_f32m1x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_f32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32m1x4_m_vl32 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x4_t v0)
{
  vssseg4e32_v_f32m1x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e32_v_f32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_f32m1x5_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32m1x5_t v0)
{
  vssseg5e32_v_f32m1x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e32_v_f32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_f32m1x5_m_vl32 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x5_t v0)
{
  vssseg5e32_v_f32m1x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e32_v_f32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_f32m1x6_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32m1x6_t v0)
{
  vssseg6e32_v_f32m1x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e32_v_f32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_f32m1x6_m_vl32 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x6_t v0)
{
  vssseg6e32_v_f32m1x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e32_v_f32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_f32m1x7_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32m1x7_t v0)
{
  vssseg7e32_v_f32m1x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e32_v_f32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_f32m1x7_m_vl32 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x7_t v0)
{
  vssseg7e32_v_f32m1x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e32_v_f32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_f32m1x8_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32m1x8_t v0)
{
  vssseg8e32_v_f32m1x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e32_v_f32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_f32m1x8_m_vl32 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x8_t v0)
{
  vssseg8e32_v_f32m1x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_f32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m2x2_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32m2x2_t v0)
{
  vssseg2e32_v_f32m2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_f32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m2x2_m_vl32 (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x2_t v0)
{
  vssseg2e32_v_f32m2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_f32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32m2x3_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32m2x3_t v0)
{
  vssseg3e32_v_f32m2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_f32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_f32m2x3_m_vl32 (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x3_t v0)
{
  vssseg3e32_v_f32m2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_f32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32m2x4_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32m2x4_t v0)
{
  vssseg4e32_v_f32m2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_f32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_f32m2x4_m_vl32 (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2x4_t v0)
{
  vssseg4e32_v_f32m2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_f32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m4x2_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32m4x2_t v0)
{
  vssseg2e32_v_f32m4x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_f32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_f32m4x2_m_vl32 (vbool8_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m4x2_t v0)
{
  vssseg2e32_v_f32m4x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_f64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m1x2_vl32 (float64_t *base, ptrdiff_t bstride, vfloat64m1x2_t v0)
{
  vssseg2e64_v_f64m1x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_f64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m1x2_m_vl32 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x2_t v0)
{
  vssseg2e64_v_f64m1x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e64_v_f64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_f64m1x3_vl32 (float64_t *base, ptrdiff_t bstride, vfloat64m1x3_t v0)
{
  vssseg3e64_v_f64m1x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e64_v_f64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_f64m1x3_m_vl32 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x3_t v0)
{
  vssseg3e64_v_f64m1x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e64_v_f64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_f64m1x4_vl32 (float64_t *base, ptrdiff_t bstride, vfloat64m1x4_t v0)
{
  vssseg4e64_v_f64m1x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e64_v_f64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_f64m1x4_m_vl32 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x4_t v0)
{
  vssseg4e64_v_f64m1x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e64_v_f64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e64_v_f64m1x5_vl32 (float64_t *base, ptrdiff_t bstride, vfloat64m1x5_t v0)
{
  vssseg5e64_v_f64m1x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e64_v_f64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e64_v_f64m1x5_m_vl32 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x5_t v0)
{
  vssseg5e64_v_f64m1x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e64_v_f64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e64_v_f64m1x6_vl32 (float64_t *base, ptrdiff_t bstride, vfloat64m1x6_t v0)
{
  vssseg6e64_v_f64m1x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e64_v_f64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e64_v_f64m1x6_m_vl32 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x6_t v0)
{
  vssseg6e64_v_f64m1x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e64_v_f64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e64_v_f64m1x7_vl32 (float64_t *base, ptrdiff_t bstride, vfloat64m1x7_t v0)
{
  vssseg7e64_v_f64m1x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e64_v_f64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e64_v_f64m1x7_m_vl32 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x7_t v0)
{
  vssseg7e64_v_f64m1x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e64_v_f64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e64_v_f64m1x8_vl32 (float64_t *base, ptrdiff_t bstride, vfloat64m1x8_t v0)
{
  vssseg8e64_v_f64m1x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e64_v_f64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e64_v_f64m1x8_m_vl32 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1x8_t v0)
{
  vssseg8e64_v_f64m1x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_f64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m2x2_vl32 (float64_t *base, ptrdiff_t bstride, vfloat64m2x2_t v0)
{
  vssseg2e64_v_f64m2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_f64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m2x2_m_vl32 (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x2_t v0)
{
  vssseg2e64_v_f64m2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e64_v_f64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_f64m2x3_vl32 (float64_t *base, ptrdiff_t bstride, vfloat64m2x3_t v0)
{
  vssseg3e64_v_f64m2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e64_v_f64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_f64m2x3_m_vl32 (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x3_t v0)
{
  vssseg3e64_v_f64m2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e64_v_f64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_f64m2x4_vl32 (float64_t *base, ptrdiff_t bstride, vfloat64m2x4_t v0)
{
  vssseg4e64_v_f64m2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e64_v_f64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_f64m2x4_m_vl32 (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2x4_t v0)
{
  vssseg4e64_v_f64m2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_f64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m4x2_vl32 (float64_t *base, ptrdiff_t bstride, vfloat64m4x2_t v0)
{
  vssseg2e64_v_f64m4x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_f64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_f64m4x2_m_vl32 (vbool16_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m4x2_t v0)
{
  vssseg2e64_v_f64m4x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_i8mf8x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf8x2_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf8x2_t v0)
{
  vssseg2e8_v_i8mf8x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_i8mf8x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf8x2_m_vl32 (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x2_t v0)
{
  vssseg2e8_v_i8mf8x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_i8mf8x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf8x3_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf8x3_t v0)
{
  vssseg3e8_v_i8mf8x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_i8mf8x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf8x3_m_vl32 (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x3_t v0)
{
  vssseg3e8_v_i8mf8x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_i8mf8x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf8x4_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf8x4_t v0)
{
  vssseg4e8_v_i8mf8x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_i8mf8x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf8x4_m_vl32 (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x4_t v0)
{
  vssseg4e8_v_i8mf8x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e8_v_i8mf8x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf8x5_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf8x5_t v0)
{
  vssseg5e8_v_i8mf8x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e8_v_i8mf8x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf8x5_m_vl32 (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x5_t v0)
{
  vssseg5e8_v_i8mf8x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e8_v_i8mf8x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf8x6_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf8x6_t v0)
{
  vssseg6e8_v_i8mf8x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e8_v_i8mf8x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf8x6_m_vl32 (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x6_t v0)
{
  vssseg6e8_v_i8mf8x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e8_v_i8mf8x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf8x7_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf8x7_t v0)
{
  vssseg7e8_v_i8mf8x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e8_v_i8mf8x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf8x7_m_vl32 (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x7_t v0)
{
  vssseg7e8_v_i8mf8x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e8_v_i8mf8x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf8x8_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf8x8_t v0)
{
  vssseg8e8_v_i8mf8x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e8_v_i8mf8x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf8x8_m_vl32 (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8x8_t v0)
{
  vssseg8e8_v_i8mf8x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_i8mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf4x2_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf4x2_t v0)
{
  vssseg2e8_v_i8mf4x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_i8mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf4x2_m_vl32 (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x2_t v0)
{
  vssseg2e8_v_i8mf4x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_i8mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf4x3_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf4x3_t v0)
{
  vssseg3e8_v_i8mf4x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_i8mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf4x3_m_vl32 (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x3_t v0)
{
  vssseg3e8_v_i8mf4x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_i8mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf4x4_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf4x4_t v0)
{
  vssseg4e8_v_i8mf4x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_i8mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf4x4_m_vl32 (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x4_t v0)
{
  vssseg4e8_v_i8mf4x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e8_v_i8mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf4x5_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf4x5_t v0)
{
  vssseg5e8_v_i8mf4x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e8_v_i8mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf4x5_m_vl32 (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x5_t v0)
{
  vssseg5e8_v_i8mf4x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e8_v_i8mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf4x6_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf4x6_t v0)
{
  vssseg6e8_v_i8mf4x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e8_v_i8mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf4x6_m_vl32 (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x6_t v0)
{
  vssseg6e8_v_i8mf4x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e8_v_i8mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf4x7_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf4x7_t v0)
{
  vssseg7e8_v_i8mf4x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e8_v_i8mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf4x7_m_vl32 (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x7_t v0)
{
  vssseg7e8_v_i8mf4x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e8_v_i8mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf4x8_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf4x8_t v0)
{
  vssseg8e8_v_i8mf4x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e8_v_i8mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf4x8_m_vl32 (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4x8_t v0)
{
  vssseg8e8_v_i8mf4x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_i8mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf2x2_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf2x2_t v0)
{
  vssseg2e8_v_i8mf2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_i8mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8mf2x2_m_vl32 (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x2_t v0)
{
  vssseg2e8_v_i8mf2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_i8mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf2x3_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf2x3_t v0)
{
  vssseg3e8_v_i8mf2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_i8mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8mf2x3_m_vl32 (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x3_t v0)
{
  vssseg3e8_v_i8mf2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_i8mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf2x4_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf2x4_t v0)
{
  vssseg4e8_v_i8mf2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_i8mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8mf2x4_m_vl32 (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x4_t v0)
{
  vssseg4e8_v_i8mf2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e8_v_i8mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf2x5_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf2x5_t v0)
{
  vssseg5e8_v_i8mf2x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e8_v_i8mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8mf2x5_m_vl32 (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x5_t v0)
{
  vssseg5e8_v_i8mf2x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e8_v_i8mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf2x6_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf2x6_t v0)
{
  vssseg6e8_v_i8mf2x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e8_v_i8mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8mf2x6_m_vl32 (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x6_t v0)
{
  vssseg6e8_v_i8mf2x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e8_v_i8mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf2x7_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf2x7_t v0)
{
  vssseg7e8_v_i8mf2x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e8_v_i8mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8mf2x7_m_vl32 (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x7_t v0)
{
  vssseg7e8_v_i8mf2x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e8_v_i8mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf2x8_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf2x8_t v0)
{
  vssseg8e8_v_i8mf2x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e8_v_i8mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8mf2x8_m_vl32 (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2x8_t v0)
{
  vssseg8e8_v_i8mf2x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_i8m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m1x2_vl32 (int8_t *base, ptrdiff_t bstride, vint8m1x2_t v0)
{
  vssseg2e8_v_i8m1x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_i8m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m1x2_m_vl32 (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x2_t v0)
{
  vssseg2e8_v_i8m1x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_i8m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8m1x3_vl32 (int8_t *base, ptrdiff_t bstride, vint8m1x3_t v0)
{
  vssseg3e8_v_i8m1x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_i8m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8m1x3_m_vl32 (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x3_t v0)
{
  vssseg3e8_v_i8m1x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_i8m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8m1x4_vl32 (int8_t *base, ptrdiff_t bstride, vint8m1x4_t v0)
{
  vssseg4e8_v_i8m1x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_i8m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8m1x4_m_vl32 (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x4_t v0)
{
  vssseg4e8_v_i8m1x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e8_v_i8m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8m1x5_vl32 (int8_t *base, ptrdiff_t bstride, vint8m1x5_t v0)
{
  vssseg5e8_v_i8m1x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e8_v_i8m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_i8m1x5_m_vl32 (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x5_t v0)
{
  vssseg5e8_v_i8m1x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e8_v_i8m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8m1x6_vl32 (int8_t *base, ptrdiff_t bstride, vint8m1x6_t v0)
{
  vssseg6e8_v_i8m1x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e8_v_i8m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_i8m1x6_m_vl32 (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x6_t v0)
{
  vssseg6e8_v_i8m1x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e8_v_i8m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8m1x7_vl32 (int8_t *base, ptrdiff_t bstride, vint8m1x7_t v0)
{
  vssseg7e8_v_i8m1x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e8_v_i8m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_i8m1x7_m_vl32 (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x7_t v0)
{
  vssseg7e8_v_i8m1x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e8_v_i8m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8m1x8_vl32 (int8_t *base, ptrdiff_t bstride, vint8m1x8_t v0)
{
  vssseg8e8_v_i8m1x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e8_v_i8m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_i8m1x8_m_vl32 (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1x8_t v0)
{
  vssseg8e8_v_i8m1x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_i8m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m2x2_vl32 (int8_t *base, ptrdiff_t bstride, vint8m2x2_t v0)
{
  vssseg2e8_v_i8m2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_i8m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m2x2_m_vl32 (vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2x2_t v0)
{
  vssseg2e8_v_i8m2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_i8m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8m2x3_vl32 (int8_t *base, ptrdiff_t bstride, vint8m2x3_t v0)
{
  vssseg3e8_v_i8m2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_i8m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_i8m2x3_m_vl32 (vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2x3_t v0)
{
  vssseg3e8_v_i8m2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_i8m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8m2x4_vl32 (int8_t *base, ptrdiff_t bstride, vint8m2x4_t v0)
{
  vssseg4e8_v_i8m2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_i8m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_i8m2x4_m_vl32 (vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2x4_t v0)
{
  vssseg4e8_v_i8m2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_i8m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m4x2_vl32 (int8_t *base, ptrdiff_t bstride, vint8m4x2_t v0)
{
  vssseg2e8_v_i8m4x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_i8m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_i8m4x2_m_vl32 (vbool2_t mask, int8_t *base, ptrdiff_t bstride, vint8m4x2_t v0)
{
  vssseg2e8_v_i8m4x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_i16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16mf4x2_vl32 (int16_t *base, ptrdiff_t bstride, vint16mf4x2_t v0)
{
  vssseg2e16_v_i16mf4x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_i16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16mf4x2_m_vl32 (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x2_t v0)
{
  vssseg2e16_v_i16mf4x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_i16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16mf4x3_vl32 (int16_t *base, ptrdiff_t bstride, vint16mf4x3_t v0)
{
  vssseg3e16_v_i16mf4x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_i16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16mf4x3_m_vl32 (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x3_t v0)
{
  vssseg3e16_v_i16mf4x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_i16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16mf4x4_vl32 (int16_t *base, ptrdiff_t bstride, vint16mf4x4_t v0)
{
  vssseg4e16_v_i16mf4x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_i16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16mf4x4_m_vl32 (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x4_t v0)
{
  vssseg4e16_v_i16mf4x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_i16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16mf4x5_vl32 (int16_t *base, ptrdiff_t bstride, vint16mf4x5_t v0)
{
  vssseg5e16_v_i16mf4x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_i16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16mf4x5_m_vl32 (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x5_t v0)
{
  vssseg5e16_v_i16mf4x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_i16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16mf4x6_vl32 (int16_t *base, ptrdiff_t bstride, vint16mf4x6_t v0)
{
  vssseg6e16_v_i16mf4x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_i16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16mf4x6_m_vl32 (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x6_t v0)
{
  vssseg6e16_v_i16mf4x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_i16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16mf4x7_vl32 (int16_t *base, ptrdiff_t bstride, vint16mf4x7_t v0)
{
  vssseg7e16_v_i16mf4x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_i16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16mf4x7_m_vl32 (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x7_t v0)
{
  vssseg7e16_v_i16mf4x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_i16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16mf4x8_vl32 (int16_t *base, ptrdiff_t bstride, vint16mf4x8_t v0)
{
  vssseg8e16_v_i16mf4x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_i16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16mf4x8_m_vl32 (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x8_t v0)
{
  vssseg8e16_v_i16mf4x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_i16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16mf2x2_vl32 (int16_t *base, ptrdiff_t bstride, vint16mf2x2_t v0)
{
  vssseg2e16_v_i16mf2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_i16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16mf2x2_m_vl32 (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x2_t v0)
{
  vssseg2e16_v_i16mf2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_i16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16mf2x3_vl32 (int16_t *base, ptrdiff_t bstride, vint16mf2x3_t v0)
{
  vssseg3e16_v_i16mf2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_i16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16mf2x3_m_vl32 (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x3_t v0)
{
  vssseg3e16_v_i16mf2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_i16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16mf2x4_vl32 (int16_t *base, ptrdiff_t bstride, vint16mf2x4_t v0)
{
  vssseg4e16_v_i16mf2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_i16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16mf2x4_m_vl32 (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x4_t v0)
{
  vssseg4e16_v_i16mf2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_i16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16mf2x5_vl32 (int16_t *base, ptrdiff_t bstride, vint16mf2x5_t v0)
{
  vssseg5e16_v_i16mf2x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_i16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16mf2x5_m_vl32 (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x5_t v0)
{
  vssseg5e16_v_i16mf2x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_i16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16mf2x6_vl32 (int16_t *base, ptrdiff_t bstride, vint16mf2x6_t v0)
{
  vssseg6e16_v_i16mf2x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_i16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16mf2x6_m_vl32 (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x6_t v0)
{
  vssseg6e16_v_i16mf2x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_i16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16mf2x7_vl32 (int16_t *base, ptrdiff_t bstride, vint16mf2x7_t v0)
{
  vssseg7e16_v_i16mf2x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_i16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16mf2x7_m_vl32 (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x7_t v0)
{
  vssseg7e16_v_i16mf2x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_i16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16mf2x8_vl32 (int16_t *base, ptrdiff_t bstride, vint16mf2x8_t v0)
{
  vssseg8e16_v_i16mf2x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_i16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16mf2x8_m_vl32 (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x8_t v0)
{
  vssseg8e16_v_i16mf2x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_i16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m1x2_vl32 (int16_t *base, ptrdiff_t bstride, vint16m1x2_t v0)
{
  vssseg2e16_v_i16m1x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_i16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m1x2_m_vl32 (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x2_t v0)
{
  vssseg2e16_v_i16m1x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_i16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16m1x3_vl32 (int16_t *base, ptrdiff_t bstride, vint16m1x3_t v0)
{
  vssseg3e16_v_i16m1x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_i16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16m1x3_m_vl32 (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x3_t v0)
{
  vssseg3e16_v_i16m1x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_i16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16m1x4_vl32 (int16_t *base, ptrdiff_t bstride, vint16m1x4_t v0)
{
  vssseg4e16_v_i16m1x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_i16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16m1x4_m_vl32 (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x4_t v0)
{
  vssseg4e16_v_i16m1x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_i16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16m1x5_vl32 (int16_t *base, ptrdiff_t bstride, vint16m1x5_t v0)
{
  vssseg5e16_v_i16m1x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_i16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_i16m1x5_m_vl32 (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x5_t v0)
{
  vssseg5e16_v_i16m1x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_i16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16m1x6_vl32 (int16_t *base, ptrdiff_t bstride, vint16m1x6_t v0)
{
  vssseg6e16_v_i16m1x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_i16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_i16m1x6_m_vl32 (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x6_t v0)
{
  vssseg6e16_v_i16m1x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_i16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16m1x7_vl32 (int16_t *base, ptrdiff_t bstride, vint16m1x7_t v0)
{
  vssseg7e16_v_i16m1x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_i16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_i16m1x7_m_vl32 (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x7_t v0)
{
  vssseg7e16_v_i16m1x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_i16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16m1x8_vl32 (int16_t *base, ptrdiff_t bstride, vint16m1x8_t v0)
{
  vssseg8e16_v_i16m1x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_i16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_i16m1x8_m_vl32 (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x8_t v0)
{
  vssseg8e16_v_i16m1x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_i16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m2x2_vl32 (int16_t *base, ptrdiff_t bstride, vint16m2x2_t v0)
{
  vssseg2e16_v_i16m2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_i16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m2x2_m_vl32 (vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2x2_t v0)
{
  vssseg2e16_v_i16m2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_i16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16m2x3_vl32 (int16_t *base, ptrdiff_t bstride, vint16m2x3_t v0)
{
  vssseg3e16_v_i16m2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_i16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_i16m2x3_m_vl32 (vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2x3_t v0)
{
  vssseg3e16_v_i16m2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_i16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16m2x4_vl32 (int16_t *base, ptrdiff_t bstride, vint16m2x4_t v0)
{
  vssseg4e16_v_i16m2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_i16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_i16m2x4_m_vl32 (vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2x4_t v0)
{
  vssseg4e16_v_i16m2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_i16m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m4x2_vl32 (int16_t *base, ptrdiff_t bstride, vint16m4x2_t v0)
{
  vssseg2e16_v_i16m4x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_i16m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_i16m4x2_m_vl32 (vbool4_t mask, int16_t *base, ptrdiff_t bstride, vint16m4x2_t v0)
{
  vssseg2e16_v_i16m4x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_i32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32mf2x2_vl32 (int32_t *base, ptrdiff_t bstride, vint32mf2x2_t v0)
{
  vssseg2e32_v_i32mf2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_i32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32mf2x2_m_vl32 (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x2_t v0)
{
  vssseg2e32_v_i32mf2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_i32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32mf2x3_vl32 (int32_t *base, ptrdiff_t bstride, vint32mf2x3_t v0)
{
  vssseg3e32_v_i32mf2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_i32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32mf2x3_m_vl32 (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x3_t v0)
{
  vssseg3e32_v_i32mf2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_i32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32mf2x4_vl32 (int32_t *base, ptrdiff_t bstride, vint32mf2x4_t v0)
{
  vssseg4e32_v_i32mf2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_i32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32mf2x4_m_vl32 (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x4_t v0)
{
  vssseg4e32_v_i32mf2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e32_v_i32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_i32mf2x5_vl32 (int32_t *base, ptrdiff_t bstride, vint32mf2x5_t v0)
{
  vssseg5e32_v_i32mf2x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e32_v_i32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_i32mf2x5_m_vl32 (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x5_t v0)
{
  vssseg5e32_v_i32mf2x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e32_v_i32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_i32mf2x6_vl32 (int32_t *base, ptrdiff_t bstride, vint32mf2x6_t v0)
{
  vssseg6e32_v_i32mf2x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e32_v_i32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_i32mf2x6_m_vl32 (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x6_t v0)
{
  vssseg6e32_v_i32mf2x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e32_v_i32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_i32mf2x7_vl32 (int32_t *base, ptrdiff_t bstride, vint32mf2x7_t v0)
{
  vssseg7e32_v_i32mf2x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e32_v_i32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_i32mf2x7_m_vl32 (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x7_t v0)
{
  vssseg7e32_v_i32mf2x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e32_v_i32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_i32mf2x8_vl32 (int32_t *base, ptrdiff_t bstride, vint32mf2x8_t v0)
{
  vssseg8e32_v_i32mf2x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e32_v_i32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_i32mf2x8_m_vl32 (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x8_t v0)
{
  vssseg8e32_v_i32mf2x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_i32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m1x2_vl32 (int32_t *base, ptrdiff_t bstride, vint32m1x2_t v0)
{
  vssseg2e32_v_i32m1x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_i32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m1x2_m_vl32 (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x2_t v0)
{
  vssseg2e32_v_i32m1x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_i32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32m1x3_vl32 (int32_t *base, ptrdiff_t bstride, vint32m1x3_t v0)
{
  vssseg3e32_v_i32m1x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_i32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32m1x3_m_vl32 (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x3_t v0)
{
  vssseg3e32_v_i32m1x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_i32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32m1x4_vl32 (int32_t *base, ptrdiff_t bstride, vint32m1x4_t v0)
{
  vssseg4e32_v_i32m1x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_i32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32m1x4_m_vl32 (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x4_t v0)
{
  vssseg4e32_v_i32m1x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e32_v_i32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_i32m1x5_vl32 (int32_t *base, ptrdiff_t bstride, vint32m1x5_t v0)
{
  vssseg5e32_v_i32m1x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e32_v_i32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_i32m1x5_m_vl32 (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x5_t v0)
{
  vssseg5e32_v_i32m1x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e32_v_i32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_i32m1x6_vl32 (int32_t *base, ptrdiff_t bstride, vint32m1x6_t v0)
{
  vssseg6e32_v_i32m1x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e32_v_i32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_i32m1x6_m_vl32 (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x6_t v0)
{
  vssseg6e32_v_i32m1x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e32_v_i32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_i32m1x7_vl32 (int32_t *base, ptrdiff_t bstride, vint32m1x7_t v0)
{
  vssseg7e32_v_i32m1x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e32_v_i32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_i32m1x7_m_vl32 (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x7_t v0)
{
  vssseg7e32_v_i32m1x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e32_v_i32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_i32m1x8_vl32 (int32_t *base, ptrdiff_t bstride, vint32m1x8_t v0)
{
  vssseg8e32_v_i32m1x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e32_v_i32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_i32m1x8_m_vl32 (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x8_t v0)
{
  vssseg8e32_v_i32m1x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_i32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m2x2_vl32 (int32_t *base, ptrdiff_t bstride, vint32m2x2_t v0)
{
  vssseg2e32_v_i32m2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_i32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m2x2_m_vl32 (vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2x2_t v0)
{
  vssseg2e32_v_i32m2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_i32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32m2x3_vl32 (int32_t *base, ptrdiff_t bstride, vint32m2x3_t v0)
{
  vssseg3e32_v_i32m2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_i32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_i32m2x3_m_vl32 (vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2x3_t v0)
{
  vssseg3e32_v_i32m2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_i32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32m2x4_vl32 (int32_t *base, ptrdiff_t bstride, vint32m2x4_t v0)
{
  vssseg4e32_v_i32m2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_i32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_i32m2x4_m_vl32 (vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2x4_t v0)
{
  vssseg4e32_v_i32m2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_i32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m4x2_vl32 (int32_t *base, ptrdiff_t bstride, vint32m4x2_t v0)
{
  vssseg2e32_v_i32m4x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_i32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_i32m4x2_m_vl32 (vbool8_t mask, int32_t *base, ptrdiff_t bstride, vint32m4x2_t v0)
{
  vssseg2e32_v_i32m4x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_i64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m1x2_vl32 (int64_t *base, ptrdiff_t bstride, vint64m1x2_t v0)
{
  vssseg2e64_v_i64m1x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_i64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m1x2_m_vl32 (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x2_t v0)
{
  vssseg2e64_v_i64m1x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e64_v_i64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_i64m1x3_vl32 (int64_t *base, ptrdiff_t bstride, vint64m1x3_t v0)
{
  vssseg3e64_v_i64m1x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e64_v_i64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_i64m1x3_m_vl32 (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x3_t v0)
{
  vssseg3e64_v_i64m1x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e64_v_i64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_i64m1x4_vl32 (int64_t *base, ptrdiff_t bstride, vint64m1x4_t v0)
{
  vssseg4e64_v_i64m1x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e64_v_i64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_i64m1x4_m_vl32 (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x4_t v0)
{
  vssseg4e64_v_i64m1x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e64_v_i64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e64_v_i64m1x5_vl32 (int64_t *base, ptrdiff_t bstride, vint64m1x5_t v0)
{
  vssseg5e64_v_i64m1x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e64_v_i64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e64_v_i64m1x5_m_vl32 (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x5_t v0)
{
  vssseg5e64_v_i64m1x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e64_v_i64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e64_v_i64m1x6_vl32 (int64_t *base, ptrdiff_t bstride, vint64m1x6_t v0)
{
  vssseg6e64_v_i64m1x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e64_v_i64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e64_v_i64m1x6_m_vl32 (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x6_t v0)
{
  vssseg6e64_v_i64m1x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e64_v_i64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e64_v_i64m1x7_vl32 (int64_t *base, ptrdiff_t bstride, vint64m1x7_t v0)
{
  vssseg7e64_v_i64m1x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e64_v_i64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e64_v_i64m1x7_m_vl32 (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x7_t v0)
{
  vssseg7e64_v_i64m1x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e64_v_i64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e64_v_i64m1x8_vl32 (int64_t *base, ptrdiff_t bstride, vint64m1x8_t v0)
{
  vssseg8e64_v_i64m1x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e64_v_i64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e64_v_i64m1x8_m_vl32 (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x8_t v0)
{
  vssseg8e64_v_i64m1x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_i64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m2x2_vl32 (int64_t *base, ptrdiff_t bstride, vint64m2x2_t v0)
{
  vssseg2e64_v_i64m2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_i64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m2x2_m_vl32 (vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2x2_t v0)
{
  vssseg2e64_v_i64m2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e64_v_i64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_i64m2x3_vl32 (int64_t *base, ptrdiff_t bstride, vint64m2x3_t v0)
{
  vssseg3e64_v_i64m2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e64_v_i64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_i64m2x3_m_vl32 (vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2x3_t v0)
{
  vssseg3e64_v_i64m2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e64_v_i64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_i64m2x4_vl32 (int64_t *base, ptrdiff_t bstride, vint64m2x4_t v0)
{
  vssseg4e64_v_i64m2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e64_v_i64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_i64m2x4_m_vl32 (vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2x4_t v0)
{
  vssseg4e64_v_i64m2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_i64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m4x2_vl32 (int64_t *base, ptrdiff_t bstride, vint64m4x2_t v0)
{
  vssseg2e64_v_i64m4x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_i64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_i64m4x2_m_vl32 (vbool16_t mask, int64_t *base, ptrdiff_t bstride, vint64m4x2_t v0)
{
  vssseg2e64_v_i64m4x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_u8mf8x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf8x2_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x2_t v0)
{
  vssseg2e8_v_u8mf8x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_u8mf8x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf8x2_m_vl32 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x2_t v0)
{
  vssseg2e8_v_u8mf8x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_u8mf8x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf8x3_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x3_t v0)
{
  vssseg3e8_v_u8mf8x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_u8mf8x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf8x3_m_vl32 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x3_t v0)
{
  vssseg3e8_v_u8mf8x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_u8mf8x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf8x4_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x4_t v0)
{
  vssseg4e8_v_u8mf8x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_u8mf8x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf8x4_m_vl32 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x4_t v0)
{
  vssseg4e8_v_u8mf8x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e8_v_u8mf8x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf8x5_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x5_t v0)
{
  vssseg5e8_v_u8mf8x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e8_v_u8mf8x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf8x5_m_vl32 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x5_t v0)
{
  vssseg5e8_v_u8mf8x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e8_v_u8mf8x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf8x6_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x6_t v0)
{
  vssseg6e8_v_u8mf8x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e8_v_u8mf8x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf8x6_m_vl32 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x6_t v0)
{
  vssseg6e8_v_u8mf8x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e8_v_u8mf8x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf8x7_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x7_t v0)
{
  vssseg7e8_v_u8mf8x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e8_v_u8mf8x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf8x7_m_vl32 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x7_t v0)
{
  vssseg7e8_v_u8mf8x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e8_v_u8mf8x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf8x8_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf8x8_t v0)
{
  vssseg8e8_v_u8mf8x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e8_v_u8mf8x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf8x8_m_vl32 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8x8_t v0)
{
  vssseg8e8_v_u8mf8x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_u8mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf4x2_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x2_t v0)
{
  vssseg2e8_v_u8mf4x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_u8mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf4x2_m_vl32 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x2_t v0)
{
  vssseg2e8_v_u8mf4x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_u8mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf4x3_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x3_t v0)
{
  vssseg3e8_v_u8mf4x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_u8mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf4x3_m_vl32 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x3_t v0)
{
  vssseg3e8_v_u8mf4x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_u8mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf4x4_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x4_t v0)
{
  vssseg4e8_v_u8mf4x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_u8mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf4x4_m_vl32 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x4_t v0)
{
  vssseg4e8_v_u8mf4x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e8_v_u8mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf4x5_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x5_t v0)
{
  vssseg5e8_v_u8mf4x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e8_v_u8mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf4x5_m_vl32 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x5_t v0)
{
  vssseg5e8_v_u8mf4x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e8_v_u8mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf4x6_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x6_t v0)
{
  vssseg6e8_v_u8mf4x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e8_v_u8mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf4x6_m_vl32 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x6_t v0)
{
  vssseg6e8_v_u8mf4x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e8_v_u8mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf4x7_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x7_t v0)
{
  vssseg7e8_v_u8mf4x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e8_v_u8mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf4x7_m_vl32 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x7_t v0)
{
  vssseg7e8_v_u8mf4x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e8_v_u8mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf4x8_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf4x8_t v0)
{
  vssseg8e8_v_u8mf4x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e8_v_u8mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf4x8_m_vl32 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4x8_t v0)
{
  vssseg8e8_v_u8mf4x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_u8mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf2x2_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x2_t v0)
{
  vssseg2e8_v_u8mf2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_u8mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8mf2x2_m_vl32 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x2_t v0)
{
  vssseg2e8_v_u8mf2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_u8mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf2x3_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x3_t v0)
{
  vssseg3e8_v_u8mf2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_u8mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8mf2x3_m_vl32 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x3_t v0)
{
  vssseg3e8_v_u8mf2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_u8mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf2x4_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x4_t v0)
{
  vssseg4e8_v_u8mf2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_u8mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8mf2x4_m_vl32 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x4_t v0)
{
  vssseg4e8_v_u8mf2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e8_v_u8mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf2x5_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x5_t v0)
{
  vssseg5e8_v_u8mf2x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e8_v_u8mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8mf2x5_m_vl32 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x5_t v0)
{
  vssseg5e8_v_u8mf2x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e8_v_u8mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf2x6_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x6_t v0)
{
  vssseg6e8_v_u8mf2x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e8_v_u8mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8mf2x6_m_vl32 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x6_t v0)
{
  vssseg6e8_v_u8mf2x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e8_v_u8mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf2x7_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x7_t v0)
{
  vssseg7e8_v_u8mf2x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e8_v_u8mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8mf2x7_m_vl32 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x7_t v0)
{
  vssseg7e8_v_u8mf2x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e8_v_u8mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf2x8_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf2x8_t v0)
{
  vssseg8e8_v_u8mf2x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e8_v_u8mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8mf2x8_m_vl32 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2x8_t v0)
{
  vssseg8e8_v_u8mf2x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_u8m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m1x2_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8m1x2_t v0)
{
  vssseg2e8_v_u8m1x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_u8m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m1x2_m_vl32 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x2_t v0)
{
  vssseg2e8_v_u8m1x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_u8m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8m1x3_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8m1x3_t v0)
{
  vssseg3e8_v_u8m1x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_u8m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8m1x3_m_vl32 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x3_t v0)
{
  vssseg3e8_v_u8m1x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_u8m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8m1x4_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8m1x4_t v0)
{
  vssseg4e8_v_u8m1x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_u8m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8m1x4_m_vl32 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x4_t v0)
{
  vssseg4e8_v_u8m1x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e8_v_u8m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8m1x5_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8m1x5_t v0)
{
  vssseg5e8_v_u8m1x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e8_v_u8m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e8_v_u8m1x5_m_vl32 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x5_t v0)
{
  vssseg5e8_v_u8m1x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e8_v_u8m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8m1x6_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8m1x6_t v0)
{
  vssseg6e8_v_u8m1x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e8_v_u8m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e8_v_u8m1x6_m_vl32 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x6_t v0)
{
  vssseg6e8_v_u8m1x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e8_v_u8m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8m1x7_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8m1x7_t v0)
{
  vssseg7e8_v_u8m1x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e8_v_u8m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e8_v_u8m1x7_m_vl32 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x7_t v0)
{
  vssseg7e8_v_u8m1x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e8_v_u8m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8m1x8_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8m1x8_t v0)
{
  vssseg8e8_v_u8m1x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e8_v_u8m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e8_v_u8m1x8_m_vl32 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1x8_t v0)
{
  vssseg8e8_v_u8m1x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_u8m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m2x2_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8m2x2_t v0)
{
  vssseg2e8_v_u8m2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_u8m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m2x2_m_vl32 (vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2x2_t v0)
{
  vssseg2e8_v_u8m2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_u8m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8m2x3_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8m2x3_t v0)
{
  vssseg3e8_v_u8m2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e8_v_u8m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e8_v_u8m2x3_m_vl32 (vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2x3_t v0)
{
  vssseg3e8_v_u8m2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_u8m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8m2x4_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8m2x4_t v0)
{
  vssseg4e8_v_u8m2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e8_v_u8m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e8_v_u8m2x4_m_vl32 (vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2x4_t v0)
{
  vssseg4e8_v_u8m2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_u8m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m4x2_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8m4x2_t v0)
{
  vssseg2e8_v_u8m4x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e8_v_u8m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e8_v_u8m4x2_m_vl32 (vbool2_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m4x2_t v0)
{
  vssseg2e8_v_u8m4x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_u16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16mf4x2_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x2_t v0)
{
  vssseg2e16_v_u16mf4x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_u16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16mf4x2_m_vl32 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x2_t v0)
{
  vssseg2e16_v_u16mf4x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_u16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16mf4x3_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x3_t v0)
{
  vssseg3e16_v_u16mf4x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_u16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16mf4x3_m_vl32 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x3_t v0)
{
  vssseg3e16_v_u16mf4x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_u16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16mf4x4_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x4_t v0)
{
  vssseg4e16_v_u16mf4x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_u16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16mf4x4_m_vl32 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x4_t v0)
{
  vssseg4e16_v_u16mf4x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_u16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16mf4x5_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x5_t v0)
{
  vssseg5e16_v_u16mf4x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_u16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16mf4x5_m_vl32 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x5_t v0)
{
  vssseg5e16_v_u16mf4x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_u16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16mf4x6_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x6_t v0)
{
  vssseg6e16_v_u16mf4x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_u16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16mf4x6_m_vl32 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x6_t v0)
{
  vssseg6e16_v_u16mf4x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_u16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16mf4x7_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x7_t v0)
{
  vssseg7e16_v_u16mf4x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_u16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16mf4x7_m_vl32 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x7_t v0)
{
  vssseg7e16_v_u16mf4x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_u16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16mf4x8_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16mf4x8_t v0)
{
  vssseg8e16_v_u16mf4x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_u16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16mf4x8_m_vl32 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x8_t v0)
{
  vssseg8e16_v_u16mf4x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_u16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16mf2x2_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x2_t v0)
{
  vssseg2e16_v_u16mf2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_u16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16mf2x2_m_vl32 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x2_t v0)
{
  vssseg2e16_v_u16mf2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_u16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16mf2x3_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x3_t v0)
{
  vssseg3e16_v_u16mf2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_u16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16mf2x3_m_vl32 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x3_t v0)
{
  vssseg3e16_v_u16mf2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_u16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16mf2x4_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x4_t v0)
{
  vssseg4e16_v_u16mf2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_u16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16mf2x4_m_vl32 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x4_t v0)
{
  vssseg4e16_v_u16mf2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_u16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16mf2x5_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x5_t v0)
{
  vssseg5e16_v_u16mf2x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_u16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16mf2x5_m_vl32 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x5_t v0)
{
  vssseg5e16_v_u16mf2x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_u16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16mf2x6_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x6_t v0)
{
  vssseg6e16_v_u16mf2x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_u16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16mf2x6_m_vl32 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x6_t v0)
{
  vssseg6e16_v_u16mf2x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_u16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16mf2x7_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x7_t v0)
{
  vssseg7e16_v_u16mf2x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_u16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16mf2x7_m_vl32 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x7_t v0)
{
  vssseg7e16_v_u16mf2x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_u16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16mf2x8_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16mf2x8_t v0)
{
  vssseg8e16_v_u16mf2x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_u16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16mf2x8_m_vl32 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x8_t v0)
{
  vssseg8e16_v_u16mf2x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_u16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m1x2_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16m1x2_t v0)
{
  vssseg2e16_v_u16m1x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_u16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m1x2_m_vl32 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x2_t v0)
{
  vssseg2e16_v_u16m1x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_u16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16m1x3_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16m1x3_t v0)
{
  vssseg3e16_v_u16m1x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_u16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16m1x3_m_vl32 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x3_t v0)
{
  vssseg3e16_v_u16m1x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_u16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16m1x4_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16m1x4_t v0)
{
  vssseg4e16_v_u16m1x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_u16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16m1x4_m_vl32 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x4_t v0)
{
  vssseg4e16_v_u16m1x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_u16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16m1x5_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16m1x5_t v0)
{
  vssseg5e16_v_u16m1x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e16_v_u16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e16_v_u16m1x5_m_vl32 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x5_t v0)
{
  vssseg5e16_v_u16m1x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_u16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16m1x6_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16m1x6_t v0)
{
  vssseg6e16_v_u16m1x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e16_v_u16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e16_v_u16m1x6_m_vl32 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x6_t v0)
{
  vssseg6e16_v_u16m1x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_u16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16m1x7_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16m1x7_t v0)
{
  vssseg7e16_v_u16m1x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e16_v_u16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e16_v_u16m1x7_m_vl32 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x7_t v0)
{
  vssseg7e16_v_u16m1x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_u16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16m1x8_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16m1x8_t v0)
{
  vssseg8e16_v_u16m1x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e16_v_u16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e16_v_u16m1x8_m_vl32 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x8_t v0)
{
  vssseg8e16_v_u16m1x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_u16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m2x2_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16m2x2_t v0)
{
  vssseg2e16_v_u16m2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_u16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m2x2_m_vl32 (vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2x2_t v0)
{
  vssseg2e16_v_u16m2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_u16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16m2x3_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16m2x3_t v0)
{
  vssseg3e16_v_u16m2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e16_v_u16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e16_v_u16m2x3_m_vl32 (vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2x3_t v0)
{
  vssseg3e16_v_u16m2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_u16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16m2x4_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16m2x4_t v0)
{
  vssseg4e16_v_u16m2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e16_v_u16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e16_v_u16m2x4_m_vl32 (vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2x4_t v0)
{
  vssseg4e16_v_u16m2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_u16m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m4x2_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16m4x2_t v0)
{
  vssseg2e16_v_u16m4x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e16_v_u16m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e16_v_u16m4x2_m_vl32 (vbool4_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m4x2_t v0)
{
  vssseg2e16_v_u16m4x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_u32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32mf2x2_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x2_t v0)
{
  vssseg2e32_v_u32mf2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_u32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32mf2x2_m_vl32 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x2_t v0)
{
  vssseg2e32_v_u32mf2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_u32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32mf2x3_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x3_t v0)
{
  vssseg3e32_v_u32mf2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_u32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32mf2x3_m_vl32 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x3_t v0)
{
  vssseg3e32_v_u32mf2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_u32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32mf2x4_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x4_t v0)
{
  vssseg4e32_v_u32mf2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_u32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32mf2x4_m_vl32 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x4_t v0)
{
  vssseg4e32_v_u32mf2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e32_v_u32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_u32mf2x5_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x5_t v0)
{
  vssseg5e32_v_u32mf2x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e32_v_u32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_u32mf2x5_m_vl32 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x5_t v0)
{
  vssseg5e32_v_u32mf2x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e32_v_u32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_u32mf2x6_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x6_t v0)
{
  vssseg6e32_v_u32mf2x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e32_v_u32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_u32mf2x6_m_vl32 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x6_t v0)
{
  vssseg6e32_v_u32mf2x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e32_v_u32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_u32mf2x7_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x7_t v0)
{
  vssseg7e32_v_u32mf2x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e32_v_u32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_u32mf2x7_m_vl32 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x7_t v0)
{
  vssseg7e32_v_u32mf2x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e32_v_u32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_u32mf2x8_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32mf2x8_t v0)
{
  vssseg8e32_v_u32mf2x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e32_v_u32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_u32mf2x8_m_vl32 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x8_t v0)
{
  vssseg8e32_v_u32mf2x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_u32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m1x2_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32m1x2_t v0)
{
  vssseg2e32_v_u32m1x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_u32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m1x2_m_vl32 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x2_t v0)
{
  vssseg2e32_v_u32m1x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_u32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32m1x3_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32m1x3_t v0)
{
  vssseg3e32_v_u32m1x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_u32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32m1x3_m_vl32 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x3_t v0)
{
  vssseg3e32_v_u32m1x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_u32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32m1x4_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32m1x4_t v0)
{
  vssseg4e32_v_u32m1x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_u32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32m1x4_m_vl32 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x4_t v0)
{
  vssseg4e32_v_u32m1x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e32_v_u32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e32_v_u32m1x5_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32m1x5_t v0)
{
  vssseg5e32_v_u32m1x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e32_v_u32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e32_v_u32m1x5_m_vl32 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x5_t v0)
{
  vssseg5e32_v_u32m1x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e32_v_u32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e32_v_u32m1x6_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32m1x6_t v0)
{
  vssseg6e32_v_u32m1x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e32_v_u32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e32_v_u32m1x6_m_vl32 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x6_t v0)
{
  vssseg6e32_v_u32m1x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e32_v_u32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e32_v_u32m1x7_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32m1x7_t v0)
{
  vssseg7e32_v_u32m1x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e32_v_u32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e32_v_u32m1x7_m_vl32 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x7_t v0)
{
  vssseg7e32_v_u32m1x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e32_v_u32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e32_v_u32m1x8_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32m1x8_t v0)
{
  vssseg8e32_v_u32m1x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e32_v_u32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e32_v_u32m1x8_m_vl32 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x8_t v0)
{
  vssseg8e32_v_u32m1x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_u32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m2x2_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32m2x2_t v0)
{
  vssseg2e32_v_u32m2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_u32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m2x2_m_vl32 (vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2x2_t v0)
{
  vssseg2e32_v_u32m2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_u32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32m2x3_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32m2x3_t v0)
{
  vssseg3e32_v_u32m2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e32_v_u32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e32_v_u32m2x3_m_vl32 (vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2x3_t v0)
{
  vssseg3e32_v_u32m2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_u32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32m2x4_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32m2x4_t v0)
{
  vssseg4e32_v_u32m2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e32_v_u32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e32_v_u32m2x4_m_vl32 (vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2x4_t v0)
{
  vssseg4e32_v_u32m2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e32_v_u32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m4x2_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32m4x2_t v0)
{
  vssseg2e32_v_u32m4x2 (base, bstride, v0, 32);
}
