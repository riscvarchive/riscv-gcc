/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vssseg2e32_v_u32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e32_v_u32m4x2_m_vl32 (vbool8_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m4x2_t v0)
{
  vssseg2e32_v_u32m4x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_u64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m1x2_vl32 (uint64_t *base, ptrdiff_t bstride, vuint64m1x2_t v0)
{
  vssseg2e64_v_u64m1x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_u64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m1x2_m_vl32 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x2_t v0)
{
  vssseg2e64_v_u64m1x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e64_v_u64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_u64m1x3_vl32 (uint64_t *base, ptrdiff_t bstride, vuint64m1x3_t v0)
{
  vssseg3e64_v_u64m1x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e64_v_u64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_u64m1x3_m_vl32 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x3_t v0)
{
  vssseg3e64_v_u64m1x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e64_v_u64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_u64m1x4_vl32 (uint64_t *base, ptrdiff_t bstride, vuint64m1x4_t v0)
{
  vssseg4e64_v_u64m1x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e64_v_u64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_u64m1x4_m_vl32 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x4_t v0)
{
  vssseg4e64_v_u64m1x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg5e64_v_u64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg5e64_v_u64m1x5_vl32 (uint64_t *base, ptrdiff_t bstride, vuint64m1x5_t v0)
{
  vssseg5e64_v_u64m1x5 (base, bstride, v0, 32);
}

/*
** test_vssseg5e64_v_u64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg5e64_v_u64m1x5_m_vl32 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x5_t v0)
{
  vssseg5e64_v_u64m1x5_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg6e64_v_u64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg6e64_v_u64m1x6_vl32 (uint64_t *base, ptrdiff_t bstride, vuint64m1x6_t v0)
{
  vssseg6e64_v_u64m1x6 (base, bstride, v0, 32);
}

/*
** test_vssseg6e64_v_u64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg6e64_v_u64m1x6_m_vl32 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x6_t v0)
{
  vssseg6e64_v_u64m1x6_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg7e64_v_u64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg7e64_v_u64m1x7_vl32 (uint64_t *base, ptrdiff_t bstride, vuint64m1x7_t v0)
{
  vssseg7e64_v_u64m1x7 (base, bstride, v0, 32);
}

/*
** test_vssseg7e64_v_u64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg7e64_v_u64m1x7_m_vl32 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x7_t v0)
{
  vssseg7e64_v_u64m1x7_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg8e64_v_u64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg8e64_v_u64m1x8_vl32 (uint64_t *base, ptrdiff_t bstride, vuint64m1x8_t v0)
{
  vssseg8e64_v_u64m1x8 (base, bstride, v0, 32);
}

/*
** test_vssseg8e64_v_u64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg8e64_v_u64m1x8_m_vl32 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x8_t v0)
{
  vssseg8e64_v_u64m1x8_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_u64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m2x2_vl32 (uint64_t *base, ptrdiff_t bstride, vuint64m2x2_t v0)
{
  vssseg2e64_v_u64m2x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_u64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m2x2_m_vl32 (vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2x2_t v0)
{
  vssseg2e64_v_u64m2x2_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg3e64_v_u64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg3e64_v_u64m2x3_vl32 (uint64_t *base, ptrdiff_t bstride, vuint64m2x3_t v0)
{
  vssseg3e64_v_u64m2x3 (base, bstride, v0, 32);
}

/*
** test_vssseg3e64_v_u64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg3e64_v_u64m2x3_m_vl32 (vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2x3_t v0)
{
  vssseg3e64_v_u64m2x3_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg4e64_v_u64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg4e64_v_u64m2x4_vl32 (uint64_t *base, ptrdiff_t bstride, vuint64m2x4_t v0)
{
  vssseg4e64_v_u64m2x4 (base, bstride, v0, 32);
}

/*
** test_vssseg4e64_v_u64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vssseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg4e64_v_u64m2x4_m_vl32 (vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2x4_t v0)
{
  vssseg4e64_v_u64m2x4_m (mask, base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_u64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m4x2_vl32 (uint64_t *base, ptrdiff_t bstride, vuint64m4x2_t v0)
{
  vssseg2e64_v_u64m4x2 (base, bstride, v0, 32);
}

/*
** test_vssseg2e64_v_u64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vssseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vssseg2e64_v_u64m4x2_m_vl32 (vbool16_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m4x2_t v0)
{
  vssseg2e64_v_u64m4x2_m (mask, base, bstride, v0, 32);
}

