/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test0_vlsseg2e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m1(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m1(v0, v1, base, bstride, 29);
}

/*
** test0_vlsseg2e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vbool16_t mask,vfloat16m1_t maskedoff0,vfloat16m1_t maskedoff1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vbool16_t mask,vfloat16m1_t maskedoff0,vfloat16m1_t maskedoff1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 18);
}

/*
** test0_vlsseg2e16_v_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m1_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_f16m1_tu:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m1_tu(v0, v1, base, bstride, 7);
}

/*
** test0_vlsseg2e16_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m2(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_f16m2:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m2(v0, v1, base, bstride, 6);
}

/*
** test0_vlsseg2e16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vbool8_t mask,vfloat16m2_t maskedoff0,vfloat16m2_t maskedoff1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_f16m2_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vbool8_t mask,vfloat16m2_t maskedoff0,vfloat16m2_t maskedoff1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 4);
}

/*
** test0_vlsseg2e16_v_f16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_f16m2_tu(vfloat16m2_t *v0,vfloat16m2_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_f16m2_tu:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_f16m2_tu(vfloat16m2_t *v0,vfloat16m2_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m2_tu(v0, v1, base, bstride, 25);
}

/*
** test0_vlsseg2e16_v_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_f16m4(vfloat16m4_t *v0,vfloat16m4_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m4(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_f16m4:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_f16m4(vfloat16m4_t *v0,vfloat16m4_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m4(v0, v1, base, bstride, 11);
}

/*
** test0_vlsseg2e16_v_f16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_f16m4_m(vfloat16m4_t *v0,vfloat16m4_t *v1,vbool4_t mask,vfloat16m4_t maskedoff0,vfloat16m4_t maskedoff1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_f16m4_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_f16m4_m(vfloat16m4_t *v0,vfloat16m4_t *v1,vbool4_t mask,vfloat16m4_t maskedoff0,vfloat16m4_t maskedoff1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 26);
}

/*
** test0_vlsseg2e16_v_f16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_f16m4_tu(vfloat16m4_t *v0,vfloat16m4_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m4_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_f16m4_tu:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_f16m4_tu(vfloat16m4_t *v0,vfloat16m4_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m4_tu(v0, v1, base, bstride, 15);
}

/*
** test0_vlsseg2e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16mf2(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16mf2(v0, v1, base, bstride, 20);
}

/*
** test0_vlsseg2e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 21);
}

/*
** test0_vlsseg2e16_v_f16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16mf2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_f16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16mf2_tu(v0, v1, base, bstride, 19);
}

/*
** test0_vlsseg2e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16mf4(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16mf4(v0, v1, base, bstride, 26);
}

/*
** test0_vlsseg2e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 12);
}

/*
** test0_vlsseg2e16_v_f16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16mf4_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_f16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16mf4_tu(v0, v1, base, bstride, 2);
}

/*
** test0_vlsseg2e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m1(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m1(v0, v1, base, bstride, 10);
}

/*
** test0_vlsseg2e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vbool16_t mask,vint16m1_t maskedoff0,vint16m1_t maskedoff1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vbool16_t mask,vint16m1_t maskedoff0,vint16m1_t maskedoff1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 19);
}

/*
** test0_vlsseg2e16_v_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m1_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_i16m1_tu:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m1_tu(v0, v1, base, bstride, 13);
}

/*
** test0_vlsseg2e16_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m2(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_i16m2:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m2(v0, v1, base, bstride, 23);
}

/*
** test0_vlsseg2e16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vbool8_t mask,vint16m2_t maskedoff0,vint16m2_t maskedoff1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_i16m2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vbool8_t mask,vint16m2_t maskedoff0,vint16m2_t maskedoff1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 13);
}

/*
** test0_vlsseg2e16_v_i16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_i16m2_tu(vint16m2_t *v0,vint16m2_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_i16m2_tu:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_i16m2_tu(vint16m2_t *v0,vint16m2_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m2_tu(v0, v1, base, bstride, 31);
}

/*
** test0_vlsseg2e16_v_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_i16m4(vint16m4_t *v0,vint16m4_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m4(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_i16m4:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_i16m4(vint16m4_t *v0,vint16m4_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m4(v0, v1, base, bstride, 4);
}

/*
** test0_vlsseg2e16_v_i16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_i16m4_m(vint16m4_t *v0,vint16m4_t *v1,vbool4_t mask,vint16m4_t maskedoff0,vint16m4_t maskedoff1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_i16m4_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_i16m4_m(vint16m4_t *v0,vint16m4_t *v1,vbool4_t mask,vint16m4_t maskedoff0,vint16m4_t maskedoff1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 17);
}

/*
** test0_vlsseg2e16_v_i16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_i16m4_tu(vint16m4_t *v0,vint16m4_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m4_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_i16m4_tu:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_i16m4_tu(vint16m4_t *v0,vint16m4_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m4_tu(v0, v1, base, bstride, 23);
}

/*
** test0_vlsseg2e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16mf2(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16mf2(v0, v1, base, bstride, 23);
}

/*
** test0_vlsseg2e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vbool32_t mask,vint16mf2_t maskedoff0,vint16mf2_t maskedoff1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vbool32_t mask,vint16mf2_t maskedoff0,vint16mf2_t maskedoff1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 29);
}

/*
** test0_vlsseg2e16_v_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16mf2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_i16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16mf2_tu(v0, v1, base, bstride, 21);
}

/*
** test0_vlsseg2e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16mf4(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16mf4(v0, v1, base, bstride, 25);
}

/*
** test0_vlsseg2e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vbool64_t mask,vint16mf4_t maskedoff0,vint16mf4_t maskedoff1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vbool64_t mask,vint16mf4_t maskedoff0,vint16mf4_t maskedoff1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 30);
}

/*
** test0_vlsseg2e16_v_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16mf4_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_i16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16mf4_tu(v0, v1, base, bstride, 23);
}

/*
** test0_vlsseg2e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m1(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m1(v0, v1, base, bstride, 28);
}

/*
** test0_vlsseg2e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 15);
}

/*
** test0_vlsseg2e16_v_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m1_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_u16m1_tu:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m1_tu(v0, v1, base, bstride, 28);
}

/*
** test0_vlsseg2e16_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m2(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_u16m2:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m2(v0, v1, base, bstride, 24);
}

/*
** test0_vlsseg2e16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vbool8_t mask,vuint16m2_t maskedoff0,vuint16m2_t maskedoff1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_u16m2_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vbool8_t mask,vuint16m2_t maskedoff0,vuint16m2_t maskedoff1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 19);
}

/*
** test0_vlsseg2e16_v_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_u16m2_tu(vuint16m2_t *v0,vuint16m2_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_u16m2_tu:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_u16m2_tu(vuint16m2_t *v0,vuint16m2_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m2_tu(v0, v1, base, bstride, 26);
}

/*
** test0_vlsseg2e16_v_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_u16m4(vuint16m4_t *v0,vuint16m4_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m4(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_u16m4:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_u16m4(vuint16m4_t *v0,vuint16m4_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m4(v0, v1, base, bstride, 8);
}

/*
** test0_vlsseg2e16_v_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_u16m4_m(vuint16m4_t *v0,vuint16m4_t *v1,vbool4_t mask,vuint16m4_t maskedoff0,vuint16m4_t maskedoff1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_u16m4_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_u16m4_m(vuint16m4_t *v0,vuint16m4_t *v1,vbool4_t mask,vuint16m4_t maskedoff0,vuint16m4_t maskedoff1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 27);
}

/*
** test0_vlsseg2e16_v_u16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_u16m4_tu(vuint16m4_t *v0,vuint16m4_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m4_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_u16m4_tu:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_u16m4_tu(vuint16m4_t *v0,vuint16m4_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16m4_tu(v0, v1, base, bstride, 8);
}

/*
** test0_vlsseg2e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16mf2(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16mf2(v0, v1, base, bstride, 29);
}

/*
** test0_vlsseg2e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 7);
}

/*
** test0_vlsseg2e16_v_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16mf2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_u16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16mf2_tu(v0, v1, base, bstride, 25);
}

/*
** test0_vlsseg2e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16mf4(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16mf4(v0, v1, base, bstride, 1);
}

/*
** test0_vlsseg2e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 7);
}

/*
** test0_vlsseg2e16_v_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16mf4_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e16_v_u16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_u16mf4_tu(v0, v1, base, bstride, 9);
}

/*
** test0_vlsseg2e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m1(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m1(v0, v1, base, bstride, 21);
}

/*
** test0_vlsseg2e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vbool32_t mask,vfloat32m1_t maskedoff0,vfloat32m1_t maskedoff1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vbool32_t mask,vfloat32m1_t maskedoff0,vfloat32m1_t maskedoff1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 17);
}

/*
** test0_vlsseg2e32_v_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m1_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_f32m1_tu:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m1_tu(v0, v1, base, bstride, 20);
}

/*
** test0_vlsseg2e32_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m2(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_f32m2:
**  ...
**	vsetivli\s+zero,\s*28,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m2(v0, v1, base, bstride, 28);
}

/*
** test0_vlsseg2e32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vbool16_t mask,vfloat32m2_t maskedoff0,vfloat32m2_t maskedoff1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_f32m2_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vbool16_t mask,vfloat32m2_t maskedoff0,vfloat32m2_t maskedoff1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 30);
}

/*
** test0_vlsseg2e32_v_f32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_f32m2_tu(vfloat32m2_t *v0,vfloat32m2_t *v1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_f32m2_tu:
**  ...
**	vsetivli\s+zero,\s*17,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_f32m2_tu(vfloat32m2_t *v0,vfloat32m2_t *v1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m2_tu(v0, v1, base, bstride, 17);
}

/*
** test0_vlsseg2e32_v_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_f32m4(vfloat32m4_t *v0,vfloat32m4_t *v1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m4(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_f32m4:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_f32m4(vfloat32m4_t *v0,vfloat32m4_t *v1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m4(v0, v1, base, bstride, 29);
}

/*
** test0_vlsseg2e32_v_f32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_f32m4_m(vfloat32m4_t *v0,vfloat32m4_t *v1,vbool8_t mask,vfloat32m4_t maskedoff0,vfloat32m4_t maskedoff1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_f32m4_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_f32m4_m(vfloat32m4_t *v0,vfloat32m4_t *v1,vbool8_t mask,vfloat32m4_t maskedoff0,vfloat32m4_t maskedoff1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 20);
}

/*
** test0_vlsseg2e32_v_f32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_f32m4_tu(vfloat32m4_t *v0,vfloat32m4_t *v1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m4_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_f32m4_tu:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_f32m4_tu(vfloat32m4_t *v0,vfloat32m4_t *v1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32m4_tu(v0, v1, base, bstride, 30);
}

/*
** test0_vlsseg2e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32mf2(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*10,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32mf2(v0, v1, base, bstride, 10);
}

/*
** test0_vlsseg2e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 2);
}

/*
** test0_vlsseg2e32_v_f32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32mf2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_f32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*3,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_f32mf2_tu(v0, v1, base, bstride, 3);
}

/*
** test0_vlsseg2e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m1(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m1(v0, v1, base, bstride, 30);
}

/*
** test0_vlsseg2e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vbool32_t mask,vint32m1_t maskedoff0,vint32m1_t maskedoff1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vbool32_t mask,vint32m1_t maskedoff0,vint32m1_t maskedoff1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 0);
}

/*
** test0_vlsseg2e32_v_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m1_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_i32m1_tu:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m1_tu(v0, v1, base, bstride, 4);
}

/*
** test0_vlsseg2e32_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m2(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_i32m2:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m2(v0, v1, base, bstride, 21);
}

/*
** test0_vlsseg2e32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vbool16_t mask,vint32m2_t maskedoff0,vint32m2_t maskedoff1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_i32m2_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vbool16_t mask,vint32m2_t maskedoff0,vint32m2_t maskedoff1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 16);
}

/*
** test0_vlsseg2e32_v_i32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_i32m2_tu(vint32m2_t *v0,vint32m2_t *v1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_i32m2_tu:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_i32m2_tu(vint32m2_t *v0,vint32m2_t *v1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m2_tu(v0, v1, base, bstride, 14);
}

/*
** test0_vlsseg2e32_v_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_i32m4(vint32m4_t *v0,vint32m4_t *v1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m4(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_i32m4:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_i32m4(vint32m4_t *v0,vint32m4_t *v1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m4(v0, v1, base, bstride, 2);
}

/*
** test0_vlsseg2e32_v_i32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_i32m4_m(vint32m4_t *v0,vint32m4_t *v1,vbool8_t mask,vint32m4_t maskedoff0,vint32m4_t maskedoff1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_i32m4_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_i32m4_m(vint32m4_t *v0,vint32m4_t *v1,vbool8_t mask,vint32m4_t maskedoff0,vint32m4_t maskedoff1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 23);
}

/*
** test0_vlsseg2e32_v_i32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_i32m4_tu(vint32m4_t *v0,vint32m4_t *v1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m4_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_i32m4_tu:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_i32m4_tu(vint32m4_t *v0,vint32m4_t *v1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32m4_tu(v0, v1, base, bstride, 21);
}

/*
** test0_vlsseg2e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32mf2(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32mf2(v0, v1, base, bstride, 16);
}

/*
** test0_vlsseg2e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 14);
}

/*
** test0_vlsseg2e32_v_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32mf2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_i32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_i32mf2_tu(v0, v1, base, bstride, 0);
}

/*
** test0_vlsseg2e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m1(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m1(v0, v1, base, bstride, 30);
}

/*
** test0_vlsseg2e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 6);
}

/*
** test0_vlsseg2e32_v_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m1_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_u32m1_tu:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m1_tu(v0, v1, base, bstride, 20);
}

/*
** test0_vlsseg2e32_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m2(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_u32m2:
**  ...
**	vsetivli\s+zero,\s*22,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m2(v0, v1, base, bstride, 22);
}

/*
** test0_vlsseg2e32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vbool16_t mask,vuint32m2_t maskedoff0,vuint32m2_t maskedoff1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_u32m2_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vbool16_t mask,vuint32m2_t maskedoff0,vuint32m2_t maskedoff1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 3);
}

/*
** test0_vlsseg2e32_v_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_u32m2_tu(vuint32m2_t *v0,vuint32m2_t *v1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_u32m2_tu:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_u32m2_tu(vuint32m2_t *v0,vuint32m2_t *v1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m2_tu(v0, v1, base, bstride, 7);
}

/*
** test0_vlsseg2e32_v_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_u32m4(vuint32m4_t *v0,vuint32m4_t *v1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m4(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_u32m4:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_u32m4(vuint32m4_t *v0,vuint32m4_t *v1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m4(v0, v1, base, bstride, 5);
}

/*
** test0_vlsseg2e32_v_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_u32m4_m(vuint32m4_t *v0,vuint32m4_t *v1,vbool8_t mask,vuint32m4_t maskedoff0,vuint32m4_t maskedoff1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_u32m4_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_u32m4_m(vuint32m4_t *v0,vuint32m4_t *v1,vbool8_t mask,vuint32m4_t maskedoff0,vuint32m4_t maskedoff1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 29);
}

/*
** test0_vlsseg2e32_v_u32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_u32m4_tu(vuint32m4_t *v0,vuint32m4_t *v1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m4_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_u32m4_tu:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_u32m4_tu(vuint32m4_t *v0,vuint32m4_t *v1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32m4_tu(v0, v1, base, bstride, 1);
}

/*
** test0_vlsseg2e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32mf2(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32mf2(v0, v1, base, bstride, 30);
}

/*
** test0_vlsseg2e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 25);
}

/*
** test0_vlsseg2e32_v_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32mf2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e32_v_u32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_v_u32mf2_tu(v0, v1, base, bstride, 27);
}

/*
** test0_vlsseg2e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m1(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*7,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m1(v0, v1, base, bstride, 7);
}

/*
** test0_vlsseg2e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vbool64_t mask,vfloat64m1_t maskedoff0,vfloat64m1_t maskedoff1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vbool64_t mask,vfloat64m1_t maskedoff0,vfloat64m1_t maskedoff1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 3);
}

/*
** test0_vlsseg2e64_v_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m1_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_f64m1_tu:
**  ...
**	vsetivli\s+zero,\s*27,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m1_tu(v0, v1, base, bstride, 27);
}

/*
** test0_vlsseg2e64_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m2(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_f64m2:
**  ...
**	vsetivli\s+zero,\s*17,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m2(v0, v1, base, bstride, 17);
}

/*
** test0_vlsseg2e64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vbool32_t mask,vfloat64m2_t maskedoff0,vfloat64m2_t maskedoff1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_f64m2_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vbool32_t mask,vfloat64m2_t maskedoff0,vfloat64m2_t maskedoff1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 21);
}

/*
** test0_vlsseg2e64_v_f64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_f64m2_tu(vfloat64m2_t *v0,vfloat64m2_t *v1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_f64m2_tu:
**  ...
**	vsetivli\s+zero,\s*21,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_f64m2_tu(vfloat64m2_t *v0,vfloat64m2_t *v1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m2_tu(v0, v1, base, bstride, 21);
}

/*
** test0_vlsseg2e64_v_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_f64m4(vfloat64m4_t *v0,vfloat64m4_t *v1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m4(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_f64m4:
**  ...
**	vsetivli\s+zero,\s*6,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_f64m4(vfloat64m4_t *v0,vfloat64m4_t *v1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m4(v0, v1, base, bstride, 6);
}

/*
** test0_vlsseg2e64_v_f64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_f64m4_m(vfloat64m4_t *v0,vfloat64m4_t *v1,vbool16_t mask,vfloat64m4_t maskedoff0,vfloat64m4_t maskedoff1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_f64m4_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_f64m4_m(vfloat64m4_t *v0,vfloat64m4_t *v1,vbool16_t mask,vfloat64m4_t maskedoff0,vfloat64m4_t maskedoff1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 17);
}

/*
** test0_vlsseg2e64_v_f64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_f64m4_tu(vfloat64m4_t *v0,vfloat64m4_t *v1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m4_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_f64m4_tu:
**  ...
**	vsetivli\s+zero,\s*4,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_f64m4_tu(vfloat64m4_t *v0,vfloat64m4_t *v1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m4_tu(v0, v1, base, bstride, 4);
}

/*
** test0_vlsseg2e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m1(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*2,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m1(v0, v1, base, bstride, 2);
}

/*
** test0_vlsseg2e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 15);
}

/*
** test0_vlsseg2e64_v_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m1_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_i64m1_tu:
**  ...
**	vsetivli\s+zero,\s*17,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m1_tu(v0, v1, base, bstride, 17);
}

/*
** test0_vlsseg2e64_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m2(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_i64m2:
**  ...
**	vsetivli\s+zero,\s*10,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m2(v0, v1, base, bstride, 10);
}

/*
** test0_vlsseg2e64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vbool32_t mask,vint64m2_t maskedoff0,vint64m2_t maskedoff1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_i64m2_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vbool32_t mask,vint64m2_t maskedoff0,vint64m2_t maskedoff1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 17);
}

/*
** test0_vlsseg2e64_v_i64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_i64m2_tu(vint64m2_t *v0,vint64m2_t *v1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_i64m2_tu:
**  ...
**	vsetivli\s+zero,\s*1,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_i64m2_tu(vint64m2_t *v0,vint64m2_t *v1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m2_tu(v0, v1, base, bstride, 1);
}

/*
** test0_vlsseg2e64_v_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_i64m4(vint64m4_t *v0,vint64m4_t *v1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m4(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_i64m4:
**  ...
**	vsetivli\s+zero,\s*15,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_i64m4(vint64m4_t *v0,vint64m4_t *v1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m4(v0, v1, base, bstride, 15);
}

/*
** test0_vlsseg2e64_v_i64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_i64m4_m(vint64m4_t *v0,vint64m4_t *v1,vbool16_t mask,vint64m4_t maskedoff0,vint64m4_t maskedoff1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_i64m4_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_i64m4_m(vint64m4_t *v0,vint64m4_t *v1,vbool16_t mask,vint64m4_t maskedoff0,vint64m4_t maskedoff1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 13);
}

/*
** test0_vlsseg2e64_v_i64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_i64m4_tu(vint64m4_t *v0,vint64m4_t *v1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m4_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_i64m4_tu:
**  ...
**	vsetivli\s+zero,\s*3,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_i64m4_tu(vint64m4_t *v0,vint64m4_t *v1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m4_tu(v0, v1, base, bstride, 3);
}

/*
** test0_vlsseg2e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m1(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*21,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m1(v0, v1, base, bstride, 21);
}

/*
** test0_vlsseg2e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 22);
}

/*
** test0_vlsseg2e64_v_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m1_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_u64m1_tu:
**  ...
**	vsetivli\s+zero,\s*28,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m1_tu(v0, v1, base, bstride, 28);
}

/*
** test0_vlsseg2e64_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m2(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_u64m2:
**  ...
**	vsetivli\s+zero,\s*9,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m2(v0, v1, base, bstride, 9);
}

/*
** test0_vlsseg2e64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vbool32_t mask,vuint64m2_t maskedoff0,vuint64m2_t maskedoff1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_u64m2_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vbool32_t mask,vuint64m2_t maskedoff0,vuint64m2_t maskedoff1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 0);
}

/*
** test0_vlsseg2e64_v_u64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_u64m2_tu(vuint64m2_t *v0,vuint64m2_t *v1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_u64m2_tu:
**  ...
**	vsetivli\s+zero,\s*25,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_u64m2_tu(vuint64m2_t *v0,vuint64m2_t *v1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m2_tu(v0, v1, base, bstride, 25);
}

/*
** test0_vlsseg2e64_v_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_u64m4(vuint64m4_t *v0,vuint64m4_t *v1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m4(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_u64m4:
**  ...
**	vsetivli\s+zero,\s*10,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_u64m4(vuint64m4_t *v0,vuint64m4_t *v1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m4(v0, v1, base, bstride, 10);
}

/*
** test0_vlsseg2e64_v_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_u64m4_m(vuint64m4_t *v0,vuint64m4_t *v1,vbool16_t mask,vuint64m4_t maskedoff0,vuint64m4_t maskedoff1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_u64m4_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_u64m4_m(vuint64m4_t *v0,vuint64m4_t *v1,vbool16_t mask,vuint64m4_t maskedoff0,vuint64m4_t maskedoff1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 17);
}

/*
** test0_vlsseg2e64_v_u64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e64_v_u64m4_tu(vuint64m4_t *v0,vuint64m4_t *v1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m4_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e64_v_u64m4_tu:
**  ...
**	vsetivli\s+zero,\s*9,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e64_v_u64m4_tu(vuint64m4_t *v0,vuint64m4_t *v1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m4_tu(v0, v1, base, bstride, 9);
}

/*
** test0_vlsseg2e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vbool8_t mask,vint8m1_t maskedoff0,vint8m1_t maskedoff1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vbool8_t mask,vint8m1_t maskedoff0,vint8m1_t maskedoff1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 11);
}

/*
** test0_vlsseg2e8_v_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8m1_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_i8m1_tu:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8m1_tu(v0, v1, base, bstride, 22);
}

/*
** test0_vlsseg2e8_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vbool4_t mask,vint8m2_t maskedoff0,vint8m2_t maskedoff1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_i8m2_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vbool4_t mask,vint8m2_t maskedoff0,vint8m2_t maskedoff1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 30);
}

/*
** test0_vlsseg2e8_v_i8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_i8m2_tu(vint8m2_t *v0,vint8m2_t *v1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8m2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_i8m2_tu:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_i8m2_tu(vint8m2_t *v0,vint8m2_t *v1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8m2_tu(v0, v1, base, bstride, 11);
}

/*
** test0_vlsseg2e8_v_i8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_i8m4_m(vint8m4_t *v0,vint8m4_t *v1,vbool2_t mask,vint8m4_t maskedoff0,vint8m4_t maskedoff1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_i8m4_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_i8m4_m(vint8m4_t *v0,vint8m4_t *v1,vbool2_t mask,vint8m4_t maskedoff0,vint8m4_t maskedoff1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 28);
}

/*
** test0_vlsseg2e8_v_i8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_i8m4_tu(vint8m4_t *v0,vint8m4_t *v1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8m4_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_i8m4_tu:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_i8m4_tu(vint8m4_t *v0,vint8m4_t *v1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8m4_tu(v0, v1, base, bstride, 7);
}

/*
** test0_vlsseg2e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 24);
}

/*
** test0_vlsseg2e8_v_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8mf2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_i8mf2_tu:
**  ...
**	vsetivli\s+zero,\s*23,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8mf2_tu(v0, v1, base, bstride, 23);
}

/*
** test0_vlsseg2e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vbool32_t mask,vint8mf4_t maskedoff0,vint8mf4_t maskedoff1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vbool32_t mask,vint8mf4_t maskedoff0,vint8mf4_t maskedoff1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 2);
}

/*
** test0_vlsseg2e8_v_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8mf4_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_i8mf4_tu:
**  ...
**	vsetivli\s+zero,\s*8,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8mf4_tu(v0, v1, base, bstride, 8);
}

/*
** test0_vlsseg2e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vbool64_t mask,vint8mf8_t maskedoff0,vint8mf8_t maskedoff1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8mf8_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vbool64_t mask,vint8mf8_t maskedoff0,vint8mf8_t maskedoff1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8mf8_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 9);
}

/*
** test0_vlsseg2e8_v_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8mf8_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_i8mf8_tu:
**  ...
**	vsetivli\s+zero,\s*23,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_i8mf8_tu(v0, v1, base, bstride, 23);
}

/*
** test0_vlsseg2e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 8);
}

/*
** test0_vlsseg2e8_v_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8m1_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_u8m1_tu:
**  ...
**	vsetivli\s+zero,\s*17,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8m1_tu(v0, v1, base, bstride, 17);
}

/*
** test0_vlsseg2e8_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vbool4_t mask,vuint8m2_t maskedoff0,vuint8m2_t maskedoff1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_u8m2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vbool4_t mask,vuint8m2_t maskedoff0,vuint8m2_t maskedoff1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 31);
}

/*
** test0_vlsseg2e8_v_u8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_u8m2_tu(vuint8m2_t *v0,vuint8m2_t *v1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8m2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_u8m2_tu:
**  ...
**	vsetivli\s+zero,\s*9,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_u8m2_tu(vuint8m2_t *v0,vuint8m2_t *v1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8m2_tu(v0, v1, base, bstride, 9);
}

/*
** test0_vlsseg2e8_v_u8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_u8m4_m(vuint8m4_t *v0,vuint8m4_t *v1,vbool2_t mask,vuint8m4_t maskedoff0,vuint8m4_t maskedoff1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_u8m4_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_u8m4_m(vuint8m4_t *v0,vuint8m4_t *v1,vbool2_t mask,vuint8m4_t maskedoff0,vuint8m4_t maskedoff1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 18);
}

/*
** test0_vlsseg2e8_v_u8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_u8m4_tu(vuint8m4_t *v0,vuint8m4_t *v1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8m4_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_u8m4_tu:
**  ...
**	vsetivli\s+zero,\s*21,\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_u8m4_tu(vuint8m4_t *v0,vuint8m4_t *v1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8m4_tu(v0, v1, base, bstride, 21);
}

/*
** test0_vlsseg2e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vbool16_t mask,vuint8mf2_t maskedoff0,vuint8mf2_t maskedoff1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vbool16_t mask,vuint8mf2_t maskedoff0,vuint8mf2_t maskedoff1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 26);
}

/*
** test0_vlsseg2e8_v_u8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8mf2_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_u8mf2_tu:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8mf2_tu(v0, v1, base, bstride, 2);
}

/*
** test0_vlsseg2e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 18);
}

/*
** test0_vlsseg2e8_v_u8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8mf4_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_u8mf4_tu:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8mf4_tu(v0, v1, base, bstride, 11);
}

/*
** test0_vlsseg2e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vbool64_t mask,vuint8mf8_t maskedoff0,vuint8mf8_t maskedoff1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8mf8_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vbool64_t mask,vuint8mf8_t maskedoff0,vuint8mf8_t maskedoff1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8mf8_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 16);
}

/*
** test0_vlsseg2e8_v_u8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg2e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8mf8_tu(v0, v1, base, bstride, vl);
}

/*
** test1_vlsseg2e8_v_u8mf8_tu:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg2e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_v_u8mf8_tu(v0, v1, base, bstride, 18);
}

/*
** test0_vlsseg3e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16m1(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16m1(v0, v1, v2, base, bstride, 0);
}

/*
** test0_vlsseg3e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vbool16_t mask,vfloat16m1_t maskedoff0,vfloat16m1_t maskedoff1,vfloat16m1_t maskedoff2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vbool16_t mask,vfloat16m1_t maskedoff0,vfloat16m1_t maskedoff1,vfloat16m1_t maskedoff2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 14);
}

/*
** test0_vlsseg3e16_v_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16m1_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_f16m1_tu:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16m1_tu(v0, v1, v2, base, bstride, 25);
}

/*
** test0_vlsseg3e16_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16m2(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_f16m2:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16m2(v0, v1, v2, base, bstride, 2);
}

/*
** test0_vlsseg3e16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vbool8_t mask,vfloat16m2_t maskedoff0,vfloat16m2_t maskedoff1,vfloat16m2_t maskedoff2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_f16m2_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vbool8_t mask,vfloat16m2_t maskedoff0,vfloat16m2_t maskedoff1,vfloat16m2_t maskedoff2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 16);
}

/*
** test0_vlsseg3e16_v_f16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_f16m2_tu(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16m2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_f16m2_tu:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_f16m2_tu(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16m2_tu(v0, v1, v2, base, bstride, 12);
}

/*
** test0_vlsseg3e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16mf2(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16mf2(v0, v1, v2, base, bstride, 8);
}

/*
** test0_vlsseg3e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 1);
}

/*
** test0_vlsseg3e16_v_f16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16mf2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_f16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*14,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16mf2_tu(v0, v1, v2, base, bstride, 14);
}

/*
** test0_vlsseg3e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16mf4(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16mf4(v0, v1, v2, base, bstride, 13);
}

/*
** test0_vlsseg3e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,vfloat16mf4_t maskedoff2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16mf4_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,vfloat16mf4_t maskedoff2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16mf4_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 12);
}

/*
** test0_vlsseg3e16_v_f16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16mf4_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_f16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_f16mf4_tu(v0, v1, v2, base, bstride, 18);
}

/*
** test0_vlsseg3e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16m1(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16m1(v0, v1, v2, base, bstride, 12);
}

/*
** test0_vlsseg3e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vbool16_t mask,vint16m1_t maskedoff0,vint16m1_t maskedoff1,vint16m1_t maskedoff2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vbool16_t mask,vint16m1_t maskedoff0,vint16m1_t maskedoff1,vint16m1_t maskedoff2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 28);
}

/*
** test0_vlsseg3e16_v_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16m1_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_i16m1_tu:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16m1_tu(v0, v1, v2, base, bstride, 26);
}

/*
** test0_vlsseg3e16_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16m2(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_i16m2:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16m2(v0, v1, v2, base, bstride, 0);
}

/*
** test0_vlsseg3e16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vbool8_t mask,vint16m2_t maskedoff0,vint16m2_t maskedoff1,vint16m2_t maskedoff2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_i16m2_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vbool8_t mask,vint16m2_t maskedoff0,vint16m2_t maskedoff1,vint16m2_t maskedoff2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 24);
}

/*
** test0_vlsseg3e16_v_i16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_i16m2_tu(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16m2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_i16m2_tu:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_i16m2_tu(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16m2_tu(v0, v1, v2, base, bstride, 21);
}

/*
** test0_vlsseg3e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16mf2(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16mf2(v0, v1, v2, base, bstride, 2);
}

/*
** test0_vlsseg3e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vbool32_t mask,vint16mf2_t maskedoff0,vint16mf2_t maskedoff1,vint16mf2_t maskedoff2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vbool32_t mask,vint16mf2_t maskedoff0,vint16mf2_t maskedoff1,vint16mf2_t maskedoff2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 13);
}

/*
** test0_vlsseg3e16_v_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16mf2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_i16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16mf2_tu(v0, v1, v2, base, bstride, 17);
}

/*
** test0_vlsseg3e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16mf4(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16mf4(v0, v1, v2, base, bstride, 12);
}

/*
** test0_vlsseg3e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vbool64_t mask,vint16mf4_t maskedoff0,vint16mf4_t maskedoff1,vint16mf4_t maskedoff2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16mf4_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vbool64_t mask,vint16mf4_t maskedoff0,vint16mf4_t maskedoff1,vint16mf4_t maskedoff2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16mf4_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 26);
}

/*
** test0_vlsseg3e16_v_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16mf4_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_i16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_i16mf4_tu(v0, v1, v2, base, bstride, 20);
}

/*
** test0_vlsseg3e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16m1(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16m1(v0, v1, v2, base, bstride, 21);
}

/*
** test0_vlsseg3e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,vuint16m1_t maskedoff2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,vuint16m1_t maskedoff2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 30);
}

/*
** test0_vlsseg3e16_v_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16m1_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_u16m1_tu:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16m1_tu(v0, v1, v2, base, bstride, 21);
}

/*
** test0_vlsseg3e16_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16m2(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_u16m2:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16m2(v0, v1, v2, base, bstride, 20);
}

/*
** test0_vlsseg3e16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vbool8_t mask,vuint16m2_t maskedoff0,vuint16m2_t maskedoff1,vuint16m2_t maskedoff2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_u16m2_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vbool8_t mask,vuint16m2_t maskedoff0,vuint16m2_t maskedoff1,vuint16m2_t maskedoff2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 8);
}

/*
** test0_vlsseg3e16_v_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_u16m2_tu(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16m2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_u16m2_tu:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_u16m2_tu(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16m2_tu(v0, v1, v2, base, bstride, 19);
}

/*
** test0_vlsseg3e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16mf2(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16mf2(v0, v1, v2, base, bstride, 2);
}

/*
** test0_vlsseg3e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,vuint16mf2_t maskedoff2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,vuint16mf2_t maskedoff2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 1);
}

/*
** test0_vlsseg3e16_v_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16mf2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_u16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16mf2_tu(v0, v1, v2, base, bstride, 11);
}

/*
** test0_vlsseg3e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16mf4(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16mf4(v0, v1, v2, base, bstride, 6);
}

/*
** test0_vlsseg3e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,vuint16mf4_t maskedoff2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16mf4_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,vuint16mf4_t maskedoff2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16mf4_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 21);
}

/*
** test0_vlsseg3e16_v_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16mf4_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e16_v_u16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_v_u16mf4_tu(v0, v1, v2, base, bstride, 3);
}

/*
** test0_vlsseg3e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32m1(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*3,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32m1(v0, v1, v2, base, bstride, 3);
}

/*
** test0_vlsseg3e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vbool32_t mask,vfloat32m1_t maskedoff0,vfloat32m1_t maskedoff1,vfloat32m1_t maskedoff2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vbool32_t mask,vfloat32m1_t maskedoff0,vfloat32m1_t maskedoff1,vfloat32m1_t maskedoff2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 16);
}

/*
** test0_vlsseg3e32_v_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32m1_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_f32m1_tu:
**  ...
**	vsetivli\s+zero,\s*15,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32m1_tu(v0, v1, v2, base, bstride, 15);
}

/*
** test0_vlsseg3e32_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32m2(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_f32m2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32m2(v0, v1, v2, base, bstride, 12);
}

/*
** test0_vlsseg3e32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vbool16_t mask,vfloat32m2_t maskedoff0,vfloat32m2_t maskedoff1,vfloat32m2_t maskedoff2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_f32m2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vbool16_t mask,vfloat32m2_t maskedoff0,vfloat32m2_t maskedoff1,vfloat32m2_t maskedoff2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 5);
}

/*
** test0_vlsseg3e32_v_f32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_f32m2_tu(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32m2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_f32m2_tu:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_f32m2_tu(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32m2_tu(v0, v1, v2, base, bstride, 2);
}

/*
** test0_vlsseg3e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32mf2(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*10,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32mf2(v0, v1, v2, base, bstride, 10);
}

/*
** test0_vlsseg3e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,vfloat32mf2_t maskedoff2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,vfloat32mf2_t maskedoff2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 9);
}

/*
** test0_vlsseg3e32_v_f32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32mf2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_f32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*17,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_f32mf2_tu(v0, v1, v2, base, bstride, 17);
}

/*
** test0_vlsseg3e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32m1(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32m1(v0, v1, v2, base, bstride, 2);
}

/*
** test0_vlsseg3e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vbool32_t mask,vint32m1_t maskedoff0,vint32m1_t maskedoff1,vint32m1_t maskedoff2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vbool32_t mask,vint32m1_t maskedoff0,vint32m1_t maskedoff1,vint32m1_t maskedoff2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 6);
}

/*
** test0_vlsseg3e32_v_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32m1_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_i32m1_tu:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32m1_tu(v0, v1, v2, base, bstride, 1);
}

/*
** test0_vlsseg3e32_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32m2(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_i32m2:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32m2(v0, v1, v2, base, bstride, 29);
}

/*
** test0_vlsseg3e32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vbool16_t mask,vint32m2_t maskedoff0,vint32m2_t maskedoff1,vint32m2_t maskedoff2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_i32m2_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vbool16_t mask,vint32m2_t maskedoff0,vint32m2_t maskedoff1,vint32m2_t maskedoff2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 10);
}

/*
** test0_vlsseg3e32_v_i32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_i32m2_tu(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32m2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_i32m2_tu:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_i32m2_tu(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32m2_tu(v0, v1, v2, base, bstride, 21);
}

/*
** test0_vlsseg3e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32mf2(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32mf2(v0, v1, v2, base, bstride, 30);
}

/*
** test0_vlsseg3e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,vint32mf2_t maskedoff2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,vint32mf2_t maskedoff2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 17);
}

/*
** test0_vlsseg3e32_v_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32mf2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_i32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*10,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_i32mf2_tu(v0, v1, v2, base, bstride, 10);
}

/*
** test0_vlsseg3e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32m1(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32m1(v0, v1, v2, base, bstride, 2);
}

/*
** test0_vlsseg3e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,vuint32m1_t maskedoff2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,vuint32m1_t maskedoff2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 2);
}

/*
** test0_vlsseg3e32_v_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32m1_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_u32m1_tu:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32m1_tu(v0, v1, v2, base, bstride, 2);
}

/*
** test0_vlsseg3e32_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32m2(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_u32m2:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32m2(v0, v1, v2, base, bstride, 1);
}

/*
** test0_vlsseg3e32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vbool16_t mask,vuint32m2_t maskedoff0,vuint32m2_t maskedoff1,vuint32m2_t maskedoff2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_u32m2_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vbool16_t mask,vuint32m2_t maskedoff0,vuint32m2_t maskedoff1,vuint32m2_t maskedoff2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 10);
}

/*
** test0_vlsseg3e32_v_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_u32m2_tu(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32m2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_u32m2_tu:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_u32m2_tu(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32m2_tu(v0, v1, v2, base, bstride, 2);
}

/*
** test0_vlsseg3e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32mf2(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32mf2(v0, v1, v2, base, bstride, 12);
}

/*
** test0_vlsseg3e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,vuint32mf2_t maskedoff2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,vuint32mf2_t maskedoff2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 14);
}

/*
** test0_vlsseg3e32_v_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32mf2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e32_v_u32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32mf2_tu(v0, v1, v2, base, bstride, 31);
}

/*
** test0_vlsseg3e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_f64m1(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*27,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_f64m1(v0, v1, v2, base, bstride, 27);
}

/*
** test0_vlsseg3e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vbool64_t mask,vfloat64m1_t maskedoff0,vfloat64m1_t maskedoff1,vfloat64m1_t maskedoff2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_f64m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vbool64_t mask,vfloat64m1_t maskedoff0,vfloat64m1_t maskedoff1,vfloat64m1_t maskedoff2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_f64m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 14);
}

/*
** test0_vlsseg3e64_v_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_f64m1_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_f64m1_tu:
**  ...
**	vsetivli\s+zero,\s*12,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_f64m1_tu(v0, v1, v2, base, bstride, 12);
}

/*
** test0_vlsseg3e64_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_f64m2(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_f64m2:
**  ...
**	vsetivli\s+zero,\s*18,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_f64m2(v0, v1, v2, base, bstride, 18);
}

/*
** test0_vlsseg3e64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vbool32_t mask,vfloat64m2_t maskedoff0,vfloat64m2_t maskedoff1,vfloat64m2_t maskedoff2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_f64m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_f64m2_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vbool32_t mask,vfloat64m2_t maskedoff0,vfloat64m2_t maskedoff1,vfloat64m2_t maskedoff2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_f64m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 11);
}

/*
** test0_vlsseg3e64_v_f64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_f64m2_tu(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_f64m2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_f64m2_tu:
**  ...
**	vsetivli\s+zero,\s*24,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_f64m2_tu(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_f64m2_tu(v0, v1, v2, base, bstride, 24);
}

/*
** test0_vlsseg3e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_i64m1(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*10,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_i64m1(v0, v1, v2, base, bstride, 10);
}

/*
** test0_vlsseg3e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,vint64m1_t maskedoff2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_i64m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,vint64m1_t maskedoff2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_i64m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 16);
}

/*
** test0_vlsseg3e64_v_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_i64m1_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_i64m1_tu:
**  ...
**	vsetivli\s+zero,\s*15,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_i64m1_tu(v0, v1, v2, base, bstride, 15);
}

/*
** test0_vlsseg3e64_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_i64m2(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_i64m2:
**  ...
**	vsetivli\s+zero,\s*28,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_i64m2(v0, v1, v2, base, bstride, 28);
}

/*
** test0_vlsseg3e64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vbool32_t mask,vint64m2_t maskedoff0,vint64m2_t maskedoff1,vint64m2_t maskedoff2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_i64m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_i64m2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vbool32_t mask,vint64m2_t maskedoff0,vint64m2_t maskedoff1,vint64m2_t maskedoff2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_i64m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 14);
}

/*
** test0_vlsseg3e64_v_i64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_i64m2_tu(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_i64m2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_i64m2_tu:
**  ...
**	vsetivli\s+zero,\s*22,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_i64m2_tu(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_i64m2_tu(v0, v1, v2, base, bstride, 22);
}

/*
** test0_vlsseg3e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_u64m1(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*7,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_u64m1(v0, v1, v2, base, bstride, 7);
}

/*
** test0_vlsseg3e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,vuint64m1_t maskedoff2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_u64m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,vuint64m1_t maskedoff2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_u64m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 5);
}

/*
** test0_vlsseg3e64_v_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_u64m1_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_u64m1_tu:
**  ...
**	vsetivli\s+zero,\s*20,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_u64m1_tu(v0, v1, v2, base, bstride, 20);
}

/*
** test0_vlsseg3e64_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_u64m2(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_u64m2:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_u64m2(v0, v1, v2, base, bstride, 31);
}

/*
** test0_vlsseg3e64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vbool32_t mask,vuint64m2_t maskedoff0,vuint64m2_t maskedoff1,vuint64m2_t maskedoff2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_u64m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_u64m2_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vbool32_t mask,vuint64m2_t maskedoff0,vuint64m2_t maskedoff1,vuint64m2_t maskedoff2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_u64m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 3);
}

/*
** test0_vlsseg3e64_v_u64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e64_v_u64m2_tu(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_u64m2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e64_v_u64m2_tu:
**  ...
**	vsetivli\s+zero,\s*6,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e64_v_u64m2_tu(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_u64m2_tu(v0, v1, v2, base, bstride, 6);
}

/*
** test0_vlsseg3e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vbool8_t mask,vint8m1_t maskedoff0,vint8m1_t maskedoff1,vint8m1_t maskedoff2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vbool8_t mask,vint8m1_t maskedoff0,vint8m1_t maskedoff1,vint8m1_t maskedoff2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 18);
}

/*
** test0_vlsseg3e8_v_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8m1_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_i8m1_tu:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8m1_tu(v0, v1, v2, base, bstride, 20);
}

/*
** test0_vlsseg3e8_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vbool4_t mask,vint8m2_t maskedoff0,vint8m2_t maskedoff1,vint8m2_t maskedoff2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_i8m2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vbool4_t mask,vint8m2_t maskedoff0,vint8m2_t maskedoff1,vint8m2_t maskedoff2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 5);
}

/*
** test0_vlsseg3e8_v_i8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_i8m2_tu(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8m2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_i8m2_tu:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_i8m2_tu(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8m2_tu(v0, v1, v2, base, bstride, 16);
}

/*
** test0_vlsseg3e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,vint8mf2_t maskedoff2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,vint8mf2_t maskedoff2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 25);
}

/*
** test0_vlsseg3e8_v_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8mf2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_i8mf2_tu:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8mf2_tu(v0, v1, v2, base, bstride, 7);
}

/*
** test0_vlsseg3e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vbool32_t mask,vint8mf4_t maskedoff0,vint8mf4_t maskedoff1,vint8mf4_t maskedoff2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8mf4_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vbool32_t mask,vint8mf4_t maskedoff0,vint8mf4_t maskedoff1,vint8mf4_t maskedoff2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8mf4_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 19);
}

/*
** test0_vlsseg3e8_v_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8mf4_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_i8mf4_tu:
**  ...
**	vsetivli\s+zero,\s*21,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8mf4_tu(v0, v1, v2, base, bstride, 21);
}

/*
** test0_vlsseg3e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vbool64_t mask,vint8mf8_t maskedoff0,vint8mf8_t maskedoff1,vint8mf8_t maskedoff2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8mf8_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vbool64_t mask,vint8mf8_t maskedoff0,vint8mf8_t maskedoff1,vint8mf8_t maskedoff2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8mf8_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 30);
}

/*
** test0_vlsseg3e8_v_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8mf8_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_i8mf8_tu:
**  ...
**	vsetivli\s+zero,\s*10,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_i8mf8_tu(v0, v1, v2, base, bstride, 10);
}

/*
** test0_vlsseg3e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,vuint8m1_t maskedoff2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,vuint8m1_t maskedoff2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8m1_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 2);
}

/*
** test0_vlsseg3e8_v_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8m1_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_u8m1_tu:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8m1_tu(v0, v1, v2, base, bstride, 24);
}

/*
** test0_vlsseg3e8_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vbool4_t mask,vuint8m2_t maskedoff0,vuint8m2_t maskedoff1,vuint8m2_t maskedoff2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_u8m2_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vbool4_t mask,vuint8m2_t maskedoff0,vuint8m2_t maskedoff1,vuint8m2_t maskedoff2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 15);
}

/*
** test0_vlsseg3e8_v_u8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_u8m2_tu(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8m2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_u8m2_tu:
**  ...
**	vsetivli\s+zero,\s*27,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_u8m2_tu(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8m2_tu(v0, v1, v2, base, bstride, 27);
}

/*
** test0_vlsseg3e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vbool16_t mask,vuint8mf2_t maskedoff0,vuint8mf2_t maskedoff1,vuint8mf2_t maskedoff2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vbool16_t mask,vuint8mf2_t maskedoff0,vuint8mf2_t maskedoff1,vuint8mf2_t maskedoff2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 19);
}

/*
** test0_vlsseg3e8_v_u8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8mf2_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_u8mf2_tu:
**  ...
**	vsetivli\s+zero,\s*21,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8mf2_tu(v0, v1, v2, base, bstride, 21);
}

/*
** test0_vlsseg3e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,vuint8mf4_t maskedoff2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8mf4_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,vuint8mf4_t maskedoff2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8mf4_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 9);
}

/*
** test0_vlsseg3e8_v_u8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8mf4_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_u8mf4_tu:
**  ...
**	vsetivli\s+zero,\s*29,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8mf4_tu(v0, v1, v2, base, bstride, 29);
}

/*
** test0_vlsseg3e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vbool64_t mask,vuint8mf8_t maskedoff0,vuint8mf8_t maskedoff1,vuint8mf8_t maskedoff2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8mf8_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vbool64_t mask,vuint8mf8_t maskedoff0,vuint8mf8_t maskedoff1,vuint8mf8_t maskedoff2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8mf8_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bstride, 20);
}

/*
** test0_vlsseg3e8_v_u8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg3e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8mf8_tu(v0, v1, v2, base, bstride, vl);
}

/*
** test1_vlsseg3e8_v_u8mf8_tu:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg3e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_v_u8mf8_tu(v0, v1, v2, base, bstride, 25);
}

/*
** test0_vlsseg4e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16m1(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16m1(v0, v1, v2, v3, base, bstride, 17);
}

/*
** test0_vlsseg4e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vbool16_t mask,vfloat16m1_t maskedoff0,vfloat16m1_t maskedoff1,vfloat16m1_t maskedoff2,vfloat16m1_t maskedoff3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vbool16_t mask,vfloat16m1_t maskedoff0,vfloat16m1_t maskedoff1,vfloat16m1_t maskedoff2,vfloat16m1_t maskedoff3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 31);
}

/*
** test0_vlsseg4e16_v_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16m1_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_f16m1_tu:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16m1_tu(v0, v1, v2, v3, base, bstride, 7);
}

/*
** test0_vlsseg4e16_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16m2(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_f16m2:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16m2(v0, v1, v2, v3, base, bstride, 0);
}

/*
** test0_vlsseg4e16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,vbool8_t mask,vfloat16m2_t maskedoff0,vfloat16m2_t maskedoff1,vfloat16m2_t maskedoff2,vfloat16m2_t maskedoff3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_f16m2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,vbool8_t mask,vfloat16m2_t maskedoff0,vfloat16m2_t maskedoff1,vfloat16m2_t maskedoff2,vfloat16m2_t maskedoff3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 5);
}

/*
** test0_vlsseg4e16_v_f16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_f16m2_tu(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16m2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_f16m2_tu:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_f16m2_tu(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16m2_tu(v0, v1, v2, v3, base, bstride, 3);
}

/*
** test0_vlsseg4e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16mf2(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16mf2(v0, v1, v2, v3, base, bstride, 27);
}

/*
** test0_vlsseg4e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,vfloat16mf2_t maskedoff3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,vfloat16mf2_t maskedoff3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 23);
}

/*
** test0_vlsseg4e16_v_f16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16mf2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_f16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16mf2_tu(v0, v1, v2, v3, base, bstride, 20);
}

/*
** test0_vlsseg4e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16mf4(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16mf4(v0, v1, v2, v3, base, bstride, 29);
}

/*
** test0_vlsseg4e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,vfloat16mf4_t maskedoff2,vfloat16mf4_t maskedoff3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16mf4_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,vfloat16mf4_t maskedoff2,vfloat16mf4_t maskedoff3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16mf4_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 8);
}

/*
** test0_vlsseg4e16_v_f16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16mf4_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_f16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_f16mf4_tu(v0, v1, v2, v3, base, bstride, 6);
}

/*
** test0_vlsseg4e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16m1(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16m1(v0, v1, v2, v3, base, bstride, 6);
}

/*
** test0_vlsseg4e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vbool16_t mask,vint16m1_t maskedoff0,vint16m1_t maskedoff1,vint16m1_t maskedoff2,vint16m1_t maskedoff3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vbool16_t mask,vint16m1_t maskedoff0,vint16m1_t maskedoff1,vint16m1_t maskedoff2,vint16m1_t maskedoff3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 6);
}

/*
** test0_vlsseg4e16_v_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16m1_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_i16m1_tu:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16m1_tu(v0, v1, v2, v3, base, bstride, 4);
}

/*
** test0_vlsseg4e16_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16m2(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_i16m2:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16m2(v0, v1, v2, v3, base, bstride, 9);
}

/*
** test0_vlsseg4e16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,vbool8_t mask,vint16m2_t maskedoff0,vint16m2_t maskedoff1,vint16m2_t maskedoff2,vint16m2_t maskedoff3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_i16m2_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,vbool8_t mask,vint16m2_t maskedoff0,vint16m2_t maskedoff1,vint16m2_t maskedoff2,vint16m2_t maskedoff3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 7);
}

/*
** test0_vlsseg4e16_v_i16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_i16m2_tu(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16m2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_i16m2_tu:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_i16m2_tu(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16m2_tu(v0, v1, v2, v3, base, bstride, 5);
}

/*
** test0_vlsseg4e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16mf2(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16mf2(v0, v1, v2, v3, base, bstride, 29);
}

/*
** test0_vlsseg4e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vbool32_t mask,vint16mf2_t maskedoff0,vint16mf2_t maskedoff1,vint16mf2_t maskedoff2,vint16mf2_t maskedoff3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vbool32_t mask,vint16mf2_t maskedoff0,vint16mf2_t maskedoff1,vint16mf2_t maskedoff2,vint16mf2_t maskedoff3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 22);
}

/*
** test0_vlsseg4e16_v_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16mf2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_i16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16mf2_tu(v0, v1, v2, v3, base, bstride, 10);
}

/*
** test0_vlsseg4e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16mf4(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16mf4(v0, v1, v2, v3, base, bstride, 19);
}

/*
** test0_vlsseg4e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vbool64_t mask,vint16mf4_t maskedoff0,vint16mf4_t maskedoff1,vint16mf4_t maskedoff2,vint16mf4_t maskedoff3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16mf4_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vbool64_t mask,vint16mf4_t maskedoff0,vint16mf4_t maskedoff1,vint16mf4_t maskedoff2,vint16mf4_t maskedoff3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16mf4_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 19);
}

/*
** test0_vlsseg4e16_v_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16mf4_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_i16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_i16mf4_tu(v0, v1, v2, v3, base, bstride, 16);
}

/*
** test0_vlsseg4e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16m1(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16m1(v0, v1, v2, v3, base, bstride, 25);
}

/*
** test0_vlsseg4e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,vuint16m1_t maskedoff2,vuint16m1_t maskedoff3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,vuint16m1_t maskedoff2,vuint16m1_t maskedoff3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 4);
}

/*
** test0_vlsseg4e16_v_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16m1_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_u16m1_tu:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16m1_tu(v0, v1, v2, v3, base, bstride, 28);
}

/*
** test0_vlsseg4e16_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16m2(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_u16m2:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16m2(v0, v1, v2, v3, base, bstride, 5);
}

/*
** test0_vlsseg4e16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,vbool8_t mask,vuint16m2_t maskedoff0,vuint16m2_t maskedoff1,vuint16m2_t maskedoff2,vuint16m2_t maskedoff3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_u16m2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,vbool8_t mask,vuint16m2_t maskedoff0,vuint16m2_t maskedoff1,vuint16m2_t maskedoff2,vuint16m2_t maskedoff3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 5);
}

/*
** test0_vlsseg4e16_v_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_u16m2_tu(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16m2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_u16m2_tu:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_u16m2_tu(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16m2_tu(v0, v1, v2, v3, base, bstride, 15);
}

/*
** test0_vlsseg4e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16mf2(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16mf2(v0, v1, v2, v3, base, bstride, 2);
}

/*
** test0_vlsseg4e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,vuint16mf2_t maskedoff2,vuint16mf2_t maskedoff3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,vuint16mf2_t maskedoff2,vuint16mf2_t maskedoff3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 3);
}

/*
** test0_vlsseg4e16_v_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16mf2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_u16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16mf2_tu(v0, v1, v2, v3, base, bstride, 0);
}

/*
** test0_vlsseg4e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16mf4(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16mf4(v0, v1, v2, v3, base, bstride, 11);
}

/*
** test0_vlsseg4e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,vuint16mf4_t maskedoff2,vuint16mf4_t maskedoff3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16mf4_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,vuint16mf4_t maskedoff2,vuint16mf4_t maskedoff3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16mf4_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 8);
}

/*
** test0_vlsseg4e16_v_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16mf4_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e16_v_u16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_v_u16mf4_tu(v0, v1, v2, v3, base, bstride, 28);
}

/*
** test0_vlsseg4e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32m1(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32m1(v0, v1, v2, v3, base, bstride, 16);
}

/*
** test0_vlsseg4e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vbool32_t mask,vfloat32m1_t maskedoff0,vfloat32m1_t maskedoff1,vfloat32m1_t maskedoff2,vfloat32m1_t maskedoff3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vbool32_t mask,vfloat32m1_t maskedoff0,vfloat32m1_t maskedoff1,vfloat32m1_t maskedoff2,vfloat32m1_t maskedoff3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 5);
}

/*
** test0_vlsseg4e32_v_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32m1_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_f32m1_tu:
**  ...
**	vsetivli\s+zero,\s*17,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32m1_tu(v0, v1, v2, v3, base, bstride, 17);
}

/*
** test0_vlsseg4e32_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32m2(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_f32m2:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32m2(v0, v1, v2, v3, base, bstride, 31);
}

/*
** test0_vlsseg4e32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,vbool16_t mask,vfloat32m2_t maskedoff0,vfloat32m2_t maskedoff1,vfloat32m2_t maskedoff2,vfloat32m2_t maskedoff3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_f32m2_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,vbool16_t mask,vfloat32m2_t maskedoff0,vfloat32m2_t maskedoff1,vfloat32m2_t maskedoff2,vfloat32m2_t maskedoff3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 28);
}

/*
** test0_vlsseg4e32_v_f32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_f32m2_tu(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32m2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_f32m2_tu:
**  ...
**	vsetivli\s+zero,\s*26,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_f32m2_tu(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32m2_tu(v0, v1, v2, v3, base, bstride, 26);
}

/*
** test0_vlsseg4e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32mf2(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32mf2(v0, v1, v2, v3, base, bstride, 1);
}

/*
** test0_vlsseg4e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,vfloat32mf2_t maskedoff2,vfloat32mf2_t maskedoff3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,vfloat32mf2_t maskedoff2,vfloat32mf2_t maskedoff3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 13);
}

/*
** test0_vlsseg4e32_v_f32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32mf2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_f32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_f32mf2_tu(v0, v1, v2, v3, base, bstride, 20);
}

/*
** test0_vlsseg4e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32m1(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*8,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32m1(v0, v1, v2, v3, base, bstride, 8);
}

/*
** test0_vlsseg4e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vbool32_t mask,vint32m1_t maskedoff0,vint32m1_t maskedoff1,vint32m1_t maskedoff2,vint32m1_t maskedoff3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vbool32_t mask,vint32m1_t maskedoff0,vint32m1_t maskedoff1,vint32m1_t maskedoff2,vint32m1_t maskedoff3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 23);
}

/*
** test0_vlsseg4e32_v_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32m1_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_i32m1_tu:
**  ...
**	vsetivli\s+zero,\s*17,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32m1_tu(v0, v1, v2, v3, base, bstride, 17);
}

/*
** test0_vlsseg4e32_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32m2(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_i32m2:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32m2(v0, v1, v2, v3, base, bstride, 14);
}

/*
** test0_vlsseg4e32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,vbool16_t mask,vint32m2_t maskedoff0,vint32m2_t maskedoff1,vint32m2_t maskedoff2,vint32m2_t maskedoff3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_i32m2_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,vbool16_t mask,vint32m2_t maskedoff0,vint32m2_t maskedoff1,vint32m2_t maskedoff2,vint32m2_t maskedoff3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 16);
}

/*
** test0_vlsseg4e32_v_i32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_i32m2_tu(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32m2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_i32m2_tu:
**  ...
**	vsetivli\s+zero,\s*25,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_i32m2_tu(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32m2_tu(v0, v1, v2, v3, base, bstride, 25);
}

/*
** test0_vlsseg4e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32mf2(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*25,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32mf2(v0, v1, v2, v3, base, bstride, 25);
}

/*
** test0_vlsseg4e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,vint32mf2_t maskedoff2,vint32mf2_t maskedoff3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,vint32mf2_t maskedoff2,vint32mf2_t maskedoff3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 18);
}

/*
** test0_vlsseg4e32_v_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32mf2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_i32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_i32mf2_tu(v0, v1, v2, v3, base, bstride, 20);
}

/*
** test0_vlsseg4e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32m1(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32m1(v0, v1, v2, v3, base, bstride, 31);
}

/*
** test0_vlsseg4e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,vuint32m1_t maskedoff2,vuint32m1_t maskedoff3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,vuint32m1_t maskedoff2,vuint32m1_t maskedoff3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 26);
}

/*
** test0_vlsseg4e32_v_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32m1_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_u32m1_tu:
**  ...
**	vsetivli\s+zero,\s*17,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32m1_tu(v0, v1, v2, v3, base, bstride, 17);
}

/*
** test0_vlsseg4e32_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32m2(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_u32m2:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32m2(v0, v1, v2, v3, base, bstride, 7);
}

/*
** test0_vlsseg4e32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,vbool16_t mask,vuint32m2_t maskedoff0,vuint32m2_t maskedoff1,vuint32m2_t maskedoff2,vuint32m2_t maskedoff3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_u32m2_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,vbool16_t mask,vuint32m2_t maskedoff0,vuint32m2_t maskedoff1,vuint32m2_t maskedoff2,vuint32m2_t maskedoff3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 12);
}

/*
** test0_vlsseg4e32_v_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_u32m2_tu(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32m2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_u32m2_tu:
**  ...
**	vsetivli\s+zero,\s*12,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_u32m2_tu(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32m2_tu(v0, v1, v2, v3, base, bstride, 12);
}

/*
** test0_vlsseg4e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32mf2(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32mf2(v0, v1, v2, v3, base, bstride, 18);
}

/*
** test0_vlsseg4e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,vuint32mf2_t maskedoff2,vuint32mf2_t maskedoff3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,vuint32mf2_t maskedoff2,vuint32mf2_t maskedoff3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 24);
}

/*
** test0_vlsseg4e32_v_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32mf2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e32_v_u32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*12,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_v_u32mf2_tu(v0, v1, v2, v3, base, bstride, 12);
}

/*
** test0_vlsseg4e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_f64m1(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_f64m1(v0, v1, v2, v3, base, bstride, 0);
}

/*
** test0_vlsseg4e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vbool64_t mask,vfloat64m1_t maskedoff0,vfloat64m1_t maskedoff1,vfloat64m1_t maskedoff2,vfloat64m1_t maskedoff3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_f64m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vbool64_t mask,vfloat64m1_t maskedoff0,vfloat64m1_t maskedoff1,vfloat64m1_t maskedoff2,vfloat64m1_t maskedoff3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_f64m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 12);
}

/*
** test0_vlsseg4e64_v_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_f64m1_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_f64m1_tu:
**  ...
**	vsetivli\s+zero,\s*23,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_f64m1_tu(v0, v1, v2, v3, base, bstride, 23);
}

/*
** test0_vlsseg4e64_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_f64m2(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_f64m2:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_f64m2(v0, v1, v2, v3, base, bstride, 0);
}

/*
** test0_vlsseg4e64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,vbool32_t mask,vfloat64m2_t maskedoff0,vfloat64m2_t maskedoff1,vfloat64m2_t maskedoff2,vfloat64m2_t maskedoff3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_f64m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_f64m2_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,vbool32_t mask,vfloat64m2_t maskedoff0,vfloat64m2_t maskedoff1,vfloat64m2_t maskedoff2,vfloat64m2_t maskedoff3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_f64m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 30);
}

/*
** test0_vlsseg4e64_v_f64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_f64m2_tu(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_f64m2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_f64m2_tu:
**  ...
**	vsetivli\s+zero,\s*2,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_f64m2_tu(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_f64m2_tu(v0, v1, v2, v3, base, bstride, 2);
}

/*
** test0_vlsseg4e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_i64m1(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*23,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_i64m1(v0, v1, v2, v3, base, bstride, 23);
}

/*
** test0_vlsseg4e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,vint64m1_t maskedoff2,vint64m1_t maskedoff3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_i64m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,vint64m1_t maskedoff2,vint64m1_t maskedoff3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_i64m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 20);
}

/*
** test0_vlsseg4e64_v_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_i64m1_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_i64m1_tu:
**  ...
**	vsetivli\s+zero,\s*24,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_i64m1_tu(v0, v1, v2, v3, base, bstride, 24);
}

/*
** test0_vlsseg4e64_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_i64m2(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_i64m2:
**  ...
**	vsetivli\s+zero,\s*20,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_i64m2(v0, v1, v2, v3, base, bstride, 20);
}

/*
** test0_vlsseg4e64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,vbool32_t mask,vint64m2_t maskedoff0,vint64m2_t maskedoff1,vint64m2_t maskedoff2,vint64m2_t maskedoff3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_i64m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_i64m2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,vbool32_t mask,vint64m2_t maskedoff0,vint64m2_t maskedoff1,vint64m2_t maskedoff2,vint64m2_t maskedoff3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_i64m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 5);
}

/*
** test0_vlsseg4e64_v_i64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_i64m2_tu(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_i64m2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_i64m2_tu:
**  ...
**	vsetivli\s+zero,\s*24,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_i64m2_tu(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_i64m2_tu(v0, v1, v2, v3, base, bstride, 24);
}

/*
** test0_vlsseg4e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_u64m1(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*19,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_u64m1(v0, v1, v2, v3, base, bstride, 19);
}

/*
** test0_vlsseg4e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,vuint64m1_t maskedoff2,vuint64m1_t maskedoff3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_u64m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,vuint64m1_t maskedoff2,vuint64m1_t maskedoff3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_u64m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 6);
}

/*
** test0_vlsseg4e64_v_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_u64m1_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_u64m1_tu:
**  ...
**	vsetivli\s+zero,\s*1,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_u64m1_tu(v0, v1, v2, v3, base, bstride, 1);
}

/*
** test0_vlsseg4e64_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_u64m2(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_u64m2:
**  ...
**	vsetivli\s+zero,\s*20,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_u64m2(v0, v1, v2, v3, base, bstride, 20);
}

/*
** test0_vlsseg4e64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,vbool32_t mask,vuint64m2_t maskedoff0,vuint64m2_t maskedoff1,vuint64m2_t maskedoff2,vuint64m2_t maskedoff3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_u64m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_u64m2_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,vbool32_t mask,vuint64m2_t maskedoff0,vuint64m2_t maskedoff1,vuint64m2_t maskedoff2,vuint64m2_t maskedoff3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_u64m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 15);
}

/*
** test0_vlsseg4e64_v_u64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e64_v_u64m2_tu(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_u64m2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e64_v_u64m2_tu:
**  ...
**	vsetivli\s+zero,\s*23,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e64_v_u64m2_tu(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_u64m2_tu(v0, v1, v2, v3, base, bstride, 23);
}

/*
** test0_vlsseg4e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vbool8_t mask,vint8m1_t maskedoff0,vint8m1_t maskedoff1,vint8m1_t maskedoff2,vint8m1_t maskedoff3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vbool8_t mask,vint8m1_t maskedoff0,vint8m1_t maskedoff1,vint8m1_t maskedoff2,vint8m1_t maskedoff3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 14);
}

/*
** test0_vlsseg4e8_v_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8m1_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_i8m1_tu:
**  ...
**	vsetivli\s+zero,\s*5,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8m1_tu(v0, v1, v2, v3, base, bstride, 5);
}

/*
** test0_vlsseg4e8_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,vbool4_t mask,vint8m2_t maskedoff0,vint8m2_t maskedoff1,vint8m2_t maskedoff2,vint8m2_t maskedoff3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_i8m2_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,vbool4_t mask,vint8m2_t maskedoff0,vint8m2_t maskedoff1,vint8m2_t maskedoff2,vint8m2_t maskedoff3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 12);
}

/*
** test0_vlsseg4e8_v_i8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_i8m2_tu(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8m2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_i8m2_tu:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_i8m2_tu(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8m2_tu(v0, v1, v2, v3, base, bstride, 14);
}

/*
** test0_vlsseg4e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,vint8mf2_t maskedoff2,vint8mf2_t maskedoff3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,vint8mf2_t maskedoff2,vint8mf2_t maskedoff3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 7);
}

/*
** test0_vlsseg4e8_v_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8mf2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_i8mf2_tu:
**  ...
**	vsetivli\s+zero,\s*10,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8mf2_tu(v0, v1, v2, v3, base, bstride, 10);
}

/*
** test0_vlsseg4e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vbool32_t mask,vint8mf4_t maskedoff0,vint8mf4_t maskedoff1,vint8mf4_t maskedoff2,vint8mf4_t maskedoff3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8mf4_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vbool32_t mask,vint8mf4_t maskedoff0,vint8mf4_t maskedoff1,vint8mf4_t maskedoff2,vint8mf4_t maskedoff3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8mf4_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 25);
}

/*
** test0_vlsseg4e8_v_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8mf4_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_i8mf4_tu:
**  ...
**	vsetivli\s+zero,\s*17,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8mf4_tu(v0, v1, v2, v3, base, bstride, 17);
}

/*
** test0_vlsseg4e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vbool64_t mask,vint8mf8_t maskedoff0,vint8mf8_t maskedoff1,vint8mf8_t maskedoff2,vint8mf8_t maskedoff3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8mf8_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vbool64_t mask,vint8mf8_t maskedoff0,vint8mf8_t maskedoff1,vint8mf8_t maskedoff2,vint8mf8_t maskedoff3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8mf8_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 2);
}

/*
** test0_vlsseg4e8_v_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8mf8_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_i8mf8_tu:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8mf8_tu(v0, v1, v2, v3, base, bstride, 0);
}

/*
** test0_vlsseg4e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,vuint8m1_t maskedoff2,vuint8m1_t maskedoff3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,vuint8m1_t maskedoff2,vuint8m1_t maskedoff3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 25);
}

/*
** test0_vlsseg4e8_v_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8m1_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_u8m1_tu:
**  ...
**	vsetivli\s+zero,\s*3,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8m1_tu(v0, v1, v2, v3, base, bstride, 3);
}

/*
** test0_vlsseg4e8_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vuint8m2_t *v3,vbool4_t mask,vuint8m2_t maskedoff0,vuint8m2_t maskedoff1,vuint8m2_t maskedoff2,vuint8m2_t maskedoff3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_u8m2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vuint8m2_t *v3,vbool4_t mask,vuint8m2_t maskedoff0,vuint8m2_t maskedoff1,vuint8m2_t maskedoff2,vuint8m2_t maskedoff3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 29);
}

/*
** test0_vlsseg4e8_v_u8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_u8m2_tu(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vuint8m2_t *v3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8m2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_u8m2_tu:
**  ...
**	vsetivli\s+zero,\s*8,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_u8m2_tu(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vuint8m2_t *v3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8m2_tu(v0, v1, v2, v3, base, bstride, 8);
}

/*
** test0_vlsseg4e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vbool16_t mask,vuint8mf2_t maskedoff0,vuint8mf2_t maskedoff1,vuint8mf2_t maskedoff2,vuint8mf2_t maskedoff3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vbool16_t mask,vuint8mf2_t maskedoff0,vuint8mf2_t maskedoff1,vuint8mf2_t maskedoff2,vuint8mf2_t maskedoff3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 15);
}

/*
** test0_vlsseg4e8_v_u8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8mf2_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_u8mf2_tu:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8mf2_tu(v0, v1, v2, v3, base, bstride, 24);
}

/*
** test0_vlsseg4e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,vuint8mf4_t maskedoff2,vuint8mf4_t maskedoff3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8mf4_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,vuint8mf4_t maskedoff2,vuint8mf4_t maskedoff3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8mf4_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 2);
}

/*
** test0_vlsseg4e8_v_u8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8mf4_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_u8mf4_tu:
**  ...
**	vsetivli\s+zero,\s*5,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8mf4_tu(v0, v1, v2, v3, base, bstride, 5);
}

/*
** test0_vlsseg4e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vbool64_t mask,vuint8mf8_t maskedoff0,vuint8mf8_t maskedoff1,vuint8mf8_t maskedoff2,vuint8mf8_t maskedoff3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8mf8_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vbool64_t mask,vuint8mf8_t maskedoff0,vuint8mf8_t maskedoff1,vuint8mf8_t maskedoff2,vuint8mf8_t maskedoff3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8mf8_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 2);
}

/*
** test0_vlsseg4e8_v_u8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg4e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8mf8_tu(v0, v1, v2, v3, base, bstride, vl);
}

/*
** test1_vlsseg4e8_v_u8mf8_tu:
**  ...
**	vsetivli\s+zero,\s*10,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg4e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_u8mf8_tu(v0, v1, v2, v3, base, bstride, 10);
}

/*
** test0_vlsseg5e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16m1(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16m1(v0, v1, v2, v3, v4, base, bstride, 8);
}

/*
** test0_vlsseg5e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vbool16_t mask,vfloat16m1_t maskedoff0,vfloat16m1_t maskedoff1,vfloat16m1_t maskedoff2,vfloat16m1_t maskedoff3,vfloat16m1_t maskedoff4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vbool16_t mask,vfloat16m1_t maskedoff0,vfloat16m1_t maskedoff1,vfloat16m1_t maskedoff2,vfloat16m1_t maskedoff3,vfloat16m1_t maskedoff4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 9);
}

/*
** test0_vlsseg5e16_v_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16m1_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_f16m1_tu:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16m1_tu(v0, v1, v2, v3, v4, base, bstride, 9);
}

/*
** test0_vlsseg5e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16mf2(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16mf2(v0, v1, v2, v3, v4, base, bstride, 31);
}

/*
** test0_vlsseg5e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,vfloat16mf2_t maskedoff3,vfloat16mf2_t maskedoff4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,vfloat16mf2_t maskedoff3,vfloat16mf2_t maskedoff4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 12);
}

/*
** test0_vlsseg5e16_v_f16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16mf2_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_f16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16mf2_tu(v0, v1, v2, v3, v4, base, bstride, 26);
}

/*
** test0_vlsseg5e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16mf4(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*14,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16mf4(v0, v1, v2, v3, v4, base, bstride, 14);
}

/*
** test0_vlsseg5e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,vfloat16mf4_t maskedoff2,vfloat16mf4_t maskedoff3,vfloat16mf4_t maskedoff4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16mf4_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,vfloat16mf4_t maskedoff2,vfloat16mf4_t maskedoff3,vfloat16mf4_t maskedoff4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16mf4_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 18);
}

/*
** test0_vlsseg5e16_v_f16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16mf4_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_f16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_f16mf4_tu(v0, v1, v2, v3, v4, base, bstride, 24);
}

/*
** test0_vlsseg5e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16m1(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16m1(v0, v1, v2, v3, v4, base, bstride, 6);
}

/*
** test0_vlsseg5e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vbool16_t mask,vint16m1_t maskedoff0,vint16m1_t maskedoff1,vint16m1_t maskedoff2,vint16m1_t maskedoff3,vint16m1_t maskedoff4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vbool16_t mask,vint16m1_t maskedoff0,vint16m1_t maskedoff1,vint16m1_t maskedoff2,vint16m1_t maskedoff3,vint16m1_t maskedoff4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 25);
}

/*
** test0_vlsseg5e16_v_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16m1_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_i16m1_tu:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16m1_tu(v0, v1, v2, v3, v4, base, bstride, 30);
}

/*
** test0_vlsseg5e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16mf2(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16mf2(v0, v1, v2, v3, v4, base, bstride, 12);
}

/*
** test0_vlsseg5e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vbool32_t mask,vint16mf2_t maskedoff0,vint16mf2_t maskedoff1,vint16mf2_t maskedoff2,vint16mf2_t maskedoff3,vint16mf2_t maskedoff4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vbool32_t mask,vint16mf2_t maskedoff0,vint16mf2_t maskedoff1,vint16mf2_t maskedoff2,vint16mf2_t maskedoff3,vint16mf2_t maskedoff4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 8);
}

/*
** test0_vlsseg5e16_v_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16mf2_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_i16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16mf2_tu(v0, v1, v2, v3, v4, base, bstride, 13);
}

/*
** test0_vlsseg5e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16mf4(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16mf4(v0, v1, v2, v3, v4, base, bstride, 15);
}

/*
** test0_vlsseg5e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vbool64_t mask,vint16mf4_t maskedoff0,vint16mf4_t maskedoff1,vint16mf4_t maskedoff2,vint16mf4_t maskedoff3,vint16mf4_t maskedoff4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16mf4_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vbool64_t mask,vint16mf4_t maskedoff0,vint16mf4_t maskedoff1,vint16mf4_t maskedoff2,vint16mf4_t maskedoff3,vint16mf4_t maskedoff4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16mf4_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 24);
}

/*
** test0_vlsseg5e16_v_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16mf4_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_i16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_i16mf4_tu(v0, v1, v2, v3, v4, base, bstride, 2);
}

/*
** test0_vlsseg5e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16m1(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16m1(v0, v1, v2, v3, v4, base, bstride, 30);
}

/*
** test0_vlsseg5e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,vuint16m1_t maskedoff2,vuint16m1_t maskedoff3,vuint16m1_t maskedoff4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,vuint16m1_t maskedoff2,vuint16m1_t maskedoff3,vuint16m1_t maskedoff4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 5);
}

/*
** test0_vlsseg5e16_v_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16m1_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_u16m1_tu:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16m1_tu(v0, v1, v2, v3, v4, base, bstride, 5);
}

/*
** test0_vlsseg5e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16mf2(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16mf2(v0, v1, v2, v3, v4, base, bstride, 17);
}

/*
** test0_vlsseg5e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,vuint16mf2_t maskedoff2,vuint16mf2_t maskedoff3,vuint16mf2_t maskedoff4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,vuint16mf2_t maskedoff2,vuint16mf2_t maskedoff3,vuint16mf2_t maskedoff4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 15);
}

/*
** test0_vlsseg5e16_v_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16mf2_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_u16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16mf2_tu(v0, v1, v2, v3, v4, base, bstride, 24);
}

/*
** test0_vlsseg5e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16mf4(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16mf4(v0, v1, v2, v3, v4, base, bstride, 4);
}

/*
** test0_vlsseg5e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,vuint16mf4_t maskedoff2,vuint16mf4_t maskedoff3,vuint16mf4_t maskedoff4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16mf4_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,vuint16mf4_t maskedoff2,vuint16mf4_t maskedoff3,vuint16mf4_t maskedoff4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16mf4_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 0);
}

/*
** test0_vlsseg5e16_v_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16mf4_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e16_v_u16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16mf4_tu(v0, v1, v2, v3, v4, base, bstride, 30);
}

/*
** test0_vlsseg5e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_f32m1(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_f32m1(v0, v1, v2, v3, v4, base, bstride, 9);
}

/*
** test0_vlsseg5e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vbool32_t mask,vfloat32m1_t maskedoff0,vfloat32m1_t maskedoff1,vfloat32m1_t maskedoff2,vfloat32m1_t maskedoff3,vfloat32m1_t maskedoff4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_f32m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vbool32_t mask,vfloat32m1_t maskedoff0,vfloat32m1_t maskedoff1,vfloat32m1_t maskedoff2,vfloat32m1_t maskedoff3,vfloat32m1_t maskedoff4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_f32m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 23);
}

/*
** test0_vlsseg5e32_v_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_f32m1_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_f32m1_tu:
**  ...
**	vsetivli\s+zero,\s*10,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_f32m1_tu(v0, v1, v2, v3, v4, base, bstride, 10);
}

/*
** test0_vlsseg5e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_f32mf2(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*11,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_f32mf2(v0, v1, v2, v3, v4, base, bstride, 11);
}

/*
** test0_vlsseg5e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,vfloat32mf2_t maskedoff2,vfloat32mf2_t maskedoff3,vfloat32mf2_t maskedoff4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_f32mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,vfloat32mf2_t maskedoff2,vfloat32mf2_t maskedoff3,vfloat32mf2_t maskedoff4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_f32mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 26);
}

/*
** test0_vlsseg5e32_v_f32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_f32mf2_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_f32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_f32mf2_tu(v0, v1, v2, v3, v4, base, bstride, 23);
}

/*
** test0_vlsseg5e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_i32m1(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_i32m1(v0, v1, v2, v3, v4, base, bstride, 21);
}

/*
** test0_vlsseg5e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vbool32_t mask,vint32m1_t maskedoff0,vint32m1_t maskedoff1,vint32m1_t maskedoff2,vint32m1_t maskedoff3,vint32m1_t maskedoff4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_i32m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vbool32_t mask,vint32m1_t maskedoff0,vint32m1_t maskedoff1,vint32m1_t maskedoff2,vint32m1_t maskedoff3,vint32m1_t maskedoff4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_i32m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 29);
}

/*
** test0_vlsseg5e32_v_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_i32m1_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_i32m1_tu:
**  ...
**	vsetivli\s+zero,\s*22,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_i32m1_tu(v0, v1, v2, v3, v4, base, bstride, 22);
}

/*
** test0_vlsseg5e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_i32mf2(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_i32mf2(v0, v1, v2, v3, v4, base, bstride, 14);
}

/*
** test0_vlsseg5e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,vint32mf2_t maskedoff2,vint32mf2_t maskedoff3,vint32mf2_t maskedoff4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_i32mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,vint32mf2_t maskedoff2,vint32mf2_t maskedoff3,vint32mf2_t maskedoff4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_i32mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 15);
}

/*
** test0_vlsseg5e32_v_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_i32mf2_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_i32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_i32mf2_tu(v0, v1, v2, v3, v4, base, bstride, 0);
}

/*
** test0_vlsseg5e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_u32m1(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_u32m1(v0, v1, v2, v3, v4, base, bstride, 31);
}

/*
** test0_vlsseg5e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,vuint32m1_t maskedoff2,vuint32m1_t maskedoff3,vuint32m1_t maskedoff4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_u32m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,vuint32m1_t maskedoff2,vuint32m1_t maskedoff3,vuint32m1_t maskedoff4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_u32m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 7);
}

/*
** test0_vlsseg5e32_v_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_u32m1_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_u32m1_tu:
**  ...
**	vsetivli\s+zero,\s*25,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_u32m1_tu(v0, v1, v2, v3, v4, base, bstride, 25);
}

/*
** test0_vlsseg5e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_u32mf2(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_u32mf2(v0, v1, v2, v3, v4, base, bstride, 9);
}

/*
** test0_vlsseg5e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,vuint32mf2_t maskedoff2,vuint32mf2_t maskedoff3,vuint32mf2_t maskedoff4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_u32mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,vuint32mf2_t maskedoff2,vuint32mf2_t maskedoff3,vuint32mf2_t maskedoff4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_u32mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 27);
}

/*
** test0_vlsseg5e32_v_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_u32mf2_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e32_v_u32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*17,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_u32mf2_tu(v0, v1, v2, v3, v4, base, bstride, 17);
}

/*
** test0_vlsseg5e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_f64m1(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*24,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_f64m1(v0, v1, v2, v3, v4, base, bstride, 24);
}

/*
** test0_vlsseg5e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vbool64_t mask,vfloat64m1_t maskedoff0,vfloat64m1_t maskedoff1,vfloat64m1_t maskedoff2,vfloat64m1_t maskedoff3,vfloat64m1_t maskedoff4,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_f64m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vbool64_t mask,vfloat64m1_t maskedoff0,vfloat64m1_t maskedoff1,vfloat64m1_t maskedoff2,vfloat64m1_t maskedoff3,vfloat64m1_t maskedoff4,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_f64m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 21);
}

/*
** test0_vlsseg5e64_v_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_f64m1_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e64_v_f64m1_tu:
**  ...
**	vsetivli\s+zero,\s*20,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_f64m1_tu(v0, v1, v2, v3, v4, base, bstride, 20);
}

/*
** test0_vlsseg5e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_i64m1(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*30,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_i64m1(v0, v1, v2, v3, v4, base, bstride, 30);
}

/*
** test0_vlsseg5e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,vint64m1_t maskedoff2,vint64m1_t maskedoff3,vint64m1_t maskedoff4,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_i64m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,vint64m1_t maskedoff2,vint64m1_t maskedoff3,vint64m1_t maskedoff4,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_i64m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 0);
}

/*
** test0_vlsseg5e64_v_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_i64m1_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e64_v_i64m1_tu:
**  ...
**	vsetivli\s+zero,\s*3,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_i64m1_tu(v0, v1, v2, v3, v4, base, bstride, 3);
}

/*
** test0_vlsseg5e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_u64m1(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_u64m1(v0, v1, v2, v3, v4, base, bstride, 0);
}

/*
** test0_vlsseg5e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,vuint64m1_t maskedoff2,vuint64m1_t maskedoff3,vuint64m1_t maskedoff4,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_u64m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,vuint64m1_t maskedoff2,vuint64m1_t maskedoff3,vuint64m1_t maskedoff4,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_u64m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 27);
}

/*
** test0_vlsseg5e64_v_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_u64m1_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e64_v_u64m1_tu:
**  ...
**	vsetivli\s+zero,\s*4,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_v_u64m1_tu(v0, v1, v2, v3, v4, base, bstride, 4);
}

/*
** test0_vlsseg5e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vbool8_t mask,vint8m1_t maskedoff0,vint8m1_t maskedoff1,vint8m1_t maskedoff2,vint8m1_t maskedoff3,vint8m1_t maskedoff4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_i8m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vbool8_t mask,vint8m1_t maskedoff0,vint8m1_t maskedoff1,vint8m1_t maskedoff2,vint8m1_t maskedoff3,vint8m1_t maskedoff4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_i8m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 12);
}

/*
** test0_vlsseg5e8_v_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_i8m1_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e8_v_i8m1_tu:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_i8m1_tu(v0, v1, v2, v3, v4, base, bstride, 22);
}

/*
** test0_vlsseg5e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,vint8mf2_t maskedoff2,vint8mf2_t maskedoff3,vint8mf2_t maskedoff4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_i8mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,vint8mf2_t maskedoff2,vint8mf2_t maskedoff3,vint8mf2_t maskedoff4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_i8mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 25);
}

/*
** test0_vlsseg5e8_v_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_i8mf2_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e8_v_i8mf2_tu:
**  ...
**	vsetivli\s+zero,\s*6,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_i8mf2_tu(v0, v1, v2, v3, v4, base, bstride, 6);
}

/*
** test0_vlsseg5e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vbool32_t mask,vint8mf4_t maskedoff0,vint8mf4_t maskedoff1,vint8mf4_t maskedoff2,vint8mf4_t maskedoff3,vint8mf4_t maskedoff4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_i8mf4_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vbool32_t mask,vint8mf4_t maskedoff0,vint8mf4_t maskedoff1,vint8mf4_t maskedoff2,vint8mf4_t maskedoff3,vint8mf4_t maskedoff4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_i8mf4_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 27);
}

/*
** test0_vlsseg5e8_v_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_i8mf4_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e8_v_i8mf4_tu:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_i8mf4_tu(v0, v1, v2, v3, v4, base, bstride, 15);
}

/*
** test0_vlsseg5e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vbool64_t mask,vint8mf8_t maskedoff0,vint8mf8_t maskedoff1,vint8mf8_t maskedoff2,vint8mf8_t maskedoff3,vint8mf8_t maskedoff4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_i8mf8_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vbool64_t mask,vint8mf8_t maskedoff0,vint8mf8_t maskedoff1,vint8mf8_t maskedoff2,vint8mf8_t maskedoff3,vint8mf8_t maskedoff4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_i8mf8_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 17);
}

/*
** test0_vlsseg5e8_v_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_i8mf8_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e8_v_i8mf8_tu:
**  ...
**	vsetivli\s+zero,\s*13,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_i8mf8_tu(v0, v1, v2, v3, v4, base, bstride, 13);
}

/*
** test0_vlsseg5e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,vuint8m1_t maskedoff2,vuint8m1_t maskedoff3,vuint8m1_t maskedoff4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_u8m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,vuint8m1_t maskedoff2,vuint8m1_t maskedoff3,vuint8m1_t maskedoff4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_u8m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 19);
}

/*
** test0_vlsseg5e8_v_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_u8m1_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e8_v_u8m1_tu:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_u8m1_tu(v0, v1, v2, v3, v4, base, bstride, 20);
}

/*
** test0_vlsseg5e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vbool16_t mask,vuint8mf2_t maskedoff0,vuint8mf2_t maskedoff1,vuint8mf2_t maskedoff2,vuint8mf2_t maskedoff3,vuint8mf2_t maskedoff4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_u8mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vbool16_t mask,vuint8mf2_t maskedoff0,vuint8mf2_t maskedoff1,vuint8mf2_t maskedoff2,vuint8mf2_t maskedoff3,vuint8mf2_t maskedoff4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_u8mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 31);
}

/*
** test0_vlsseg5e8_v_u8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_u8mf2_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e8_v_u8mf2_tu:
**  ...
**	vsetivli\s+zero,\s*13,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_u8mf2_tu(v0, v1, v2, v3, v4, base, bstride, 13);
}

/*
** test0_vlsseg5e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,vuint8mf4_t maskedoff2,vuint8mf4_t maskedoff3,vuint8mf4_t maskedoff4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_u8mf4_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,vuint8mf4_t maskedoff2,vuint8mf4_t maskedoff3,vuint8mf4_t maskedoff4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_u8mf4_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 31);
}

/*
** test0_vlsseg5e8_v_u8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_u8mf4_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e8_v_u8mf4_tu:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_u8mf4_tu(v0, v1, v2, v3, v4, base, bstride, 11);
}

/*
** test0_vlsseg5e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg5e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vbool64_t mask,vuint8mf8_t maskedoff0,vuint8mf8_t maskedoff1,vuint8mf8_t maskedoff2,vuint8mf8_t maskedoff3,vuint8mf8_t maskedoff4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_u8mf8_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/*
** test1_vlsseg5e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg5e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vbool64_t mask,vuint8mf8_t maskedoff0,vuint8mf8_t maskedoff1,vuint8mf8_t maskedoff2,vuint8mf8_t maskedoff3,vuint8mf8_t maskedoff4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_u8mf8_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 14);
}

/*
** test0_vlsseg5e8_v_u8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg5e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_u8mf8_tu(v0, v1, v2, v3, v4, base, bstride, vl);
}

/*
** test1_vlsseg5e8_v_u8mf8_tu:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg5e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_v_u8mf8_tu(v0, v1, v2, v3, v4, base, bstride, 19);
}

/*
** test0_vlsseg6e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16m1(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16m1(v0, v1, v2, v3, v4, v5, base, bstride, 29);
}

/*
** test0_vlsseg6e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vbool16_t mask,vfloat16m1_t maskedoff0,vfloat16m1_t maskedoff1,vfloat16m1_t maskedoff2,vfloat16m1_t maskedoff3,vfloat16m1_t maskedoff4,vfloat16m1_t maskedoff5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vbool16_t mask,vfloat16m1_t maskedoff0,vfloat16m1_t maskedoff1,vfloat16m1_t maskedoff2,vfloat16m1_t maskedoff3,vfloat16m1_t maskedoff4,vfloat16m1_t maskedoff5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 19);
}

/*
** test0_vlsseg6e16_v_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_f16m1_tu:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, 2);
}

/*
** test0_vlsseg6e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16mf2(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16mf2(v0, v1, v2, v3, v4, v5, base, bstride, 12);
}

/*
** test0_vlsseg6e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,vfloat16mf2_t maskedoff3,vfloat16mf2_t maskedoff4,vfloat16mf2_t maskedoff5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,vfloat16mf2_t maskedoff3,vfloat16mf2_t maskedoff4,vfloat16mf2_t maskedoff5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 24);
}

/*
** test0_vlsseg6e16_v_f16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16mf2_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_f16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16mf2_tu(v0, v1, v2, v3, v4, v5, base, bstride, 12);
}

/*
** test0_vlsseg6e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16mf4(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16mf4(v0, v1, v2, v3, v4, v5, base, bstride, 11);
}

/*
** test0_vlsseg6e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,vfloat16mf4_t maskedoff2,vfloat16mf4_t maskedoff3,vfloat16mf4_t maskedoff4,vfloat16mf4_t maskedoff5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16mf4_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,vfloat16mf4_t maskedoff2,vfloat16mf4_t maskedoff3,vfloat16mf4_t maskedoff4,vfloat16mf4_t maskedoff5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16mf4_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 18);
}

/*
** test0_vlsseg6e16_v_f16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16mf4_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_f16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_f16mf4_tu(v0, v1, v2, v3, v4, v5, base, bstride, 8);
}

/*
** test0_vlsseg6e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16m1(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16m1(v0, v1, v2, v3, v4, v5, base, bstride, 22);
}

/*
** test0_vlsseg6e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vbool16_t mask,vint16m1_t maskedoff0,vint16m1_t maskedoff1,vint16m1_t maskedoff2,vint16m1_t maskedoff3,vint16m1_t maskedoff4,vint16m1_t maskedoff5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vbool16_t mask,vint16m1_t maskedoff0,vint16m1_t maskedoff1,vint16m1_t maskedoff2,vint16m1_t maskedoff3,vint16m1_t maskedoff4,vint16m1_t maskedoff5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 17);
}

/*
** test0_vlsseg6e16_v_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_i16m1_tu:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, 17);
}

/*
** test0_vlsseg6e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16mf2(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16mf2(v0, v1, v2, v3, v4, v5, base, bstride, 7);
}

/*
** test0_vlsseg6e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vbool32_t mask,vint16mf2_t maskedoff0,vint16mf2_t maskedoff1,vint16mf2_t maskedoff2,vint16mf2_t maskedoff3,vint16mf2_t maskedoff4,vint16mf2_t maskedoff5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vbool32_t mask,vint16mf2_t maskedoff0,vint16mf2_t maskedoff1,vint16mf2_t maskedoff2,vint16mf2_t maskedoff3,vint16mf2_t maskedoff4,vint16mf2_t maskedoff5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 9);
}

/*
** test0_vlsseg6e16_v_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16mf2_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_i16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16mf2_tu(v0, v1, v2, v3, v4, v5, base, bstride, 29);
}

/*
** test0_vlsseg6e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16mf4(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16mf4(v0, v1, v2, v3, v4, v5, base, bstride, 16);
}

/*
** test0_vlsseg6e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vbool64_t mask,vint16mf4_t maskedoff0,vint16mf4_t maskedoff1,vint16mf4_t maskedoff2,vint16mf4_t maskedoff3,vint16mf4_t maskedoff4,vint16mf4_t maskedoff5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16mf4_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vbool64_t mask,vint16mf4_t maskedoff0,vint16mf4_t maskedoff1,vint16mf4_t maskedoff2,vint16mf4_t maskedoff3,vint16mf4_t maskedoff4,vint16mf4_t maskedoff5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16mf4_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 7);
}

/*
** test0_vlsseg6e16_v_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16mf4_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_i16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_i16mf4_tu(v0, v1, v2, v3, v4, v5, base, bstride, 2);
}

/*
** test0_vlsseg6e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16m1(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*14,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16m1(v0, v1, v2, v3, v4, v5, base, bstride, 14);
}

/*
** test0_vlsseg6e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,vuint16m1_t maskedoff2,vuint16m1_t maskedoff3,vuint16m1_t maskedoff4,vuint16m1_t maskedoff5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,vuint16m1_t maskedoff2,vuint16m1_t maskedoff3,vuint16m1_t maskedoff4,vuint16m1_t maskedoff5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 11);
}

/*
** test0_vlsseg6e16_v_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_u16m1_tu:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, 17);
}

/*
** test0_vlsseg6e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16mf2(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16mf2(v0, v1, v2, v3, v4, v5, base, bstride, 29);
}

/*
** test0_vlsseg6e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,vuint16mf2_t maskedoff2,vuint16mf2_t maskedoff3,vuint16mf2_t maskedoff4,vuint16mf2_t maskedoff5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,vuint16mf2_t maskedoff2,vuint16mf2_t maskedoff3,vuint16mf2_t maskedoff4,vuint16mf2_t maskedoff5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 29);
}

/*
** test0_vlsseg6e16_v_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16mf2_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_u16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16mf2_tu(v0, v1, v2, v3, v4, v5, base, bstride, 26);
}

/*
** test0_vlsseg6e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16mf4(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*14,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16mf4(v0, v1, v2, v3, v4, v5, base, bstride, 14);
}

/*
** test0_vlsseg6e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,vuint16mf4_t maskedoff2,vuint16mf4_t maskedoff3,vuint16mf4_t maskedoff4,vuint16mf4_t maskedoff5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16mf4_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,vuint16mf4_t maskedoff2,vuint16mf4_t maskedoff3,vuint16mf4_t maskedoff4,vuint16mf4_t maskedoff5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16mf4_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 14);
}

/*
** test0_vlsseg6e16_v_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16mf4_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e16_v_u16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_v_u16mf4_tu(v0, v1, v2, v3, v4, v5, base, bstride, 24);
}

/*
** test0_vlsseg6e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_f32m1(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_f32m1(v0, v1, v2, v3, v4, v5, base, bstride, 0);
}

/*
** test0_vlsseg6e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vbool32_t mask,vfloat32m1_t maskedoff0,vfloat32m1_t maskedoff1,vfloat32m1_t maskedoff2,vfloat32m1_t maskedoff3,vfloat32m1_t maskedoff4,vfloat32m1_t maskedoff5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_f32m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vbool32_t mask,vfloat32m1_t maskedoff0,vfloat32m1_t maskedoff1,vfloat32m1_t maskedoff2,vfloat32m1_t maskedoff3,vfloat32m1_t maskedoff4,vfloat32m1_t maskedoff5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_f32m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 4);
}

/*
** test0_vlsseg6e32_v_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_f32m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_f32m1_tu:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_f32m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, 1);
}

/*
** test0_vlsseg6e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_f32mf2(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_f32mf2(v0, v1, v2, v3, v4, v5, base, bstride, 27);
}

/*
** test0_vlsseg6e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,vfloat32mf2_t maskedoff2,vfloat32mf2_t maskedoff3,vfloat32mf2_t maskedoff4,vfloat32mf2_t maskedoff5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_f32mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,vfloat32mf2_t maskedoff2,vfloat32mf2_t maskedoff3,vfloat32mf2_t maskedoff4,vfloat32mf2_t maskedoff5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_f32mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 21);
}

/*
** test0_vlsseg6e32_v_f32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_f32mf2_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_f32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*8,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_f32mf2_tu(v0, v1, v2, v3, v4, v5, base, bstride, 8);
}

/*
** test0_vlsseg6e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_i32m1(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*12,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_i32m1(v0, v1, v2, v3, v4, v5, base, bstride, 12);
}

/*
** test0_vlsseg6e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vbool32_t mask,vint32m1_t maskedoff0,vint32m1_t maskedoff1,vint32m1_t maskedoff2,vint32m1_t maskedoff3,vint32m1_t maskedoff4,vint32m1_t maskedoff5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_i32m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vbool32_t mask,vint32m1_t maskedoff0,vint32m1_t maskedoff1,vint32m1_t maskedoff2,vint32m1_t maskedoff3,vint32m1_t maskedoff4,vint32m1_t maskedoff5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_i32m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 27);
}

/*
** test0_vlsseg6e32_v_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_i32m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_i32m1_tu:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_i32m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, 2);
}

/*
** test0_vlsseg6e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_i32mf2(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_i32mf2(v0, v1, v2, v3, v4, v5, base, bstride, 4);
}

/*
** test0_vlsseg6e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,vint32mf2_t maskedoff2,vint32mf2_t maskedoff3,vint32mf2_t maskedoff4,vint32mf2_t maskedoff5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_i32mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,vint32mf2_t maskedoff2,vint32mf2_t maskedoff3,vint32mf2_t maskedoff4,vint32mf2_t maskedoff5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_i32mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 25);
}

/*
** test0_vlsseg6e32_v_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_i32mf2_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_i32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_i32mf2_tu(v0, v1, v2, v3, v4, v5, base, bstride, 31);
}

/*
** test0_vlsseg6e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_u32m1(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*25,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_u32m1(v0, v1, v2, v3, v4, v5, base, bstride, 25);
}

/*
** test0_vlsseg6e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,vuint32m1_t maskedoff2,vuint32m1_t maskedoff3,vuint32m1_t maskedoff4,vuint32m1_t maskedoff5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_u32m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,vuint32m1_t maskedoff2,vuint32m1_t maskedoff3,vuint32m1_t maskedoff4,vuint32m1_t maskedoff5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_u32m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 20);
}

/*
** test0_vlsseg6e32_v_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_u32m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_u32m1_tu:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_u32m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, 27);
}

/*
** test0_vlsseg6e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_u32mf2(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_u32mf2(v0, v1, v2, v3, v4, v5, base, bstride, 14);
}

/*
** test0_vlsseg6e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,vuint32mf2_t maskedoff2,vuint32mf2_t maskedoff3,vuint32mf2_t maskedoff4,vuint32mf2_t maskedoff5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_u32mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,vuint32mf2_t maskedoff2,vuint32mf2_t maskedoff3,vuint32mf2_t maskedoff4,vuint32mf2_t maskedoff5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_u32mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 27);
}

/*
** test0_vlsseg6e32_v_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_u32mf2_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e32_v_u32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*26,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_v_u32mf2_tu(v0, v1, v2, v3, v4, v5, base, bstride, 26);
}

/*
** test0_vlsseg6e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_f64m1(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*20,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_f64m1(v0, v1, v2, v3, v4, v5, base, bstride, 20);
}

/*
** test0_vlsseg6e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vbool64_t mask,vfloat64m1_t maskedoff0,vfloat64m1_t maskedoff1,vfloat64m1_t maskedoff2,vfloat64m1_t maskedoff3,vfloat64m1_t maskedoff4,vfloat64m1_t maskedoff5,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_f64m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vbool64_t mask,vfloat64m1_t maskedoff0,vfloat64m1_t maskedoff1,vfloat64m1_t maskedoff2,vfloat64m1_t maskedoff3,vfloat64m1_t maskedoff4,vfloat64m1_t maskedoff5,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_f64m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 0);
}

/*
** test0_vlsseg6e64_v_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_f64m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e64_v_f64m1_tu:
**  ...
**	vsetivli\s+zero,\s*6,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_f64m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, 6);
}

/*
** test0_vlsseg6e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_i64m1(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*27,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_i64m1(v0, v1, v2, v3, v4, v5, base, bstride, 27);
}

/*
** test0_vlsseg6e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,vint64m1_t maskedoff2,vint64m1_t maskedoff3,vint64m1_t maskedoff4,vint64m1_t maskedoff5,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_i64m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,vint64m1_t maskedoff2,vint64m1_t maskedoff3,vint64m1_t maskedoff4,vint64m1_t maskedoff5,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_i64m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 3);
}

/*
** test0_vlsseg6e64_v_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_i64m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e64_v_i64m1_tu:
**  ...
**	vsetivli\s+zero,\s*18,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_i64m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, 18);
}

/*
** test0_vlsseg6e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_u64m1(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*2,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_u64m1(v0, v1, v2, v3, v4, v5, base, bstride, 2);
}

/*
** test0_vlsseg6e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,vuint64m1_t maskedoff2,vuint64m1_t maskedoff3,vuint64m1_t maskedoff4,vuint64m1_t maskedoff5,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_u64m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,vuint64m1_t maskedoff2,vuint64m1_t maskedoff3,vuint64m1_t maskedoff4,vuint64m1_t maskedoff5,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_u64m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 2);
}

/*
** test0_vlsseg6e64_v_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_u64m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e64_v_u64m1_tu:
**  ...
**	vsetivli\s+zero,\s*8,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_u64m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, 8);
}

/*
** test0_vlsseg6e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vbool8_t mask,vint8m1_t maskedoff0,vint8m1_t maskedoff1,vint8m1_t maskedoff2,vint8m1_t maskedoff3,vint8m1_t maskedoff4,vint8m1_t maskedoff5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_i8m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vbool8_t mask,vint8m1_t maskedoff0,vint8m1_t maskedoff1,vint8m1_t maskedoff2,vint8m1_t maskedoff3,vint8m1_t maskedoff4,vint8m1_t maskedoff5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_i8m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 13);
}

/*
** test0_vlsseg6e8_v_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_i8m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e8_v_i8m1_tu:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_i8m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, 25);
}

/*
** test0_vlsseg6e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,vint8mf2_t maskedoff2,vint8mf2_t maskedoff3,vint8mf2_t maskedoff4,vint8mf2_t maskedoff5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_i8mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,vint8mf2_t maskedoff2,vint8mf2_t maskedoff3,vint8mf2_t maskedoff4,vint8mf2_t maskedoff5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_i8mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 13);
}

/*
** test0_vlsseg6e8_v_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_i8mf2_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e8_v_i8mf2_tu:
**  ...
**	vsetivli\s+zero,\s*5,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_i8mf2_tu(v0, v1, v2, v3, v4, v5, base, bstride, 5);
}

/*
** test0_vlsseg6e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vbool32_t mask,vint8mf4_t maskedoff0,vint8mf4_t maskedoff1,vint8mf4_t maskedoff2,vint8mf4_t maskedoff3,vint8mf4_t maskedoff4,vint8mf4_t maskedoff5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_i8mf4_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vbool32_t mask,vint8mf4_t maskedoff0,vint8mf4_t maskedoff1,vint8mf4_t maskedoff2,vint8mf4_t maskedoff3,vint8mf4_t maskedoff4,vint8mf4_t maskedoff5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_i8mf4_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 14);
}

/*
** test0_vlsseg6e8_v_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_i8mf4_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e8_v_i8mf4_tu:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_i8mf4_tu(v0, v1, v2, v3, v4, v5, base, bstride, 18);
}

/*
** test0_vlsseg6e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vbool64_t mask,vint8mf8_t maskedoff0,vint8mf8_t maskedoff1,vint8mf8_t maskedoff2,vint8mf8_t maskedoff3,vint8mf8_t maskedoff4,vint8mf8_t maskedoff5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_i8mf8_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vbool64_t mask,vint8mf8_t maskedoff0,vint8mf8_t maskedoff1,vint8mf8_t maskedoff2,vint8mf8_t maskedoff3,vint8mf8_t maskedoff4,vint8mf8_t maskedoff5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_i8mf8_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 28);
}

/*
** test0_vlsseg6e8_v_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_i8mf8_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e8_v_i8mf8_tu:
**  ...
**	vsetivli\s+zero,\s*1,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_i8mf8_tu(v0, v1, v2, v3, v4, v5, base, bstride, 1);
}

/*
** test0_vlsseg6e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,vuint8m1_t maskedoff2,vuint8m1_t maskedoff3,vuint8m1_t maskedoff4,vuint8m1_t maskedoff5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_u8m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,vuint8m1_t maskedoff2,vuint8m1_t maskedoff3,vuint8m1_t maskedoff4,vuint8m1_t maskedoff5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_u8m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 4);
}

/*
** test0_vlsseg6e8_v_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_u8m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e8_v_u8m1_tu:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_u8m1_tu(v0, v1, v2, v3, v4, v5, base, bstride, 15);
}

/*
** test0_vlsseg6e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vbool16_t mask,vuint8mf2_t maskedoff0,vuint8mf2_t maskedoff1,vuint8mf2_t maskedoff2,vuint8mf2_t maskedoff3,vuint8mf2_t maskedoff4,vuint8mf2_t maskedoff5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_u8mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vbool16_t mask,vuint8mf2_t maskedoff0,vuint8mf2_t maskedoff1,vuint8mf2_t maskedoff2,vuint8mf2_t maskedoff3,vuint8mf2_t maskedoff4,vuint8mf2_t maskedoff5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_u8mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 6);
}

/*
** test0_vlsseg6e8_v_u8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_u8mf2_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e8_v_u8mf2_tu:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_u8mf2_tu(v0, v1, v2, v3, v4, v5, base, bstride, 14);
}

/*
** test0_vlsseg6e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,vuint8mf4_t maskedoff2,vuint8mf4_t maskedoff3,vuint8mf4_t maskedoff4,vuint8mf4_t maskedoff5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_u8mf4_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,vuint8mf4_t maskedoff2,vuint8mf4_t maskedoff3,vuint8mf4_t maskedoff4,vuint8mf4_t maskedoff5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_u8mf4_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 25);
}

/*
** test0_vlsseg6e8_v_u8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_u8mf4_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e8_v_u8mf4_tu:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_u8mf4_tu(v0, v1, v2, v3, v4, v5, base, bstride, 15);
}

/*
** test0_vlsseg6e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg6e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vbool64_t mask,vuint8mf8_t maskedoff0,vuint8mf8_t maskedoff1,vuint8mf8_t maskedoff2,vuint8mf8_t maskedoff3,vuint8mf8_t maskedoff4,vuint8mf8_t maskedoff5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_u8mf8_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, vl);
}

/*
** test1_vlsseg6e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg6e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vbool64_t mask,vuint8mf8_t maskedoff0,vuint8mf8_t maskedoff1,vuint8mf8_t maskedoff2,vuint8mf8_t maskedoff3,vuint8mf8_t maskedoff4,vuint8mf8_t maskedoff5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_u8mf8_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bstride, 11);
}

/*
** test0_vlsseg6e8_v_u8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg6e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_u8mf8_tu(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/*
** test1_vlsseg6e8_v_u8mf8_tu:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg6e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_v_u8mf8_tu(v0, v1, v2, v3, v4, v5, base, bstride, 26);
}

/*
** test0_vlsseg7e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, 17);
}

/*
** test0_vlsseg7e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vbool16_t mask,vfloat16m1_t maskedoff0,vfloat16m1_t maskedoff1,vfloat16m1_t maskedoff2,vfloat16m1_t maskedoff3,vfloat16m1_t maskedoff4,vfloat16m1_t maskedoff5,vfloat16m1_t maskedoff6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vbool16_t mask,vfloat16m1_t maskedoff0,vfloat16m1_t maskedoff1,vfloat16m1_t maskedoff2,vfloat16m1_t maskedoff3,vfloat16m1_t maskedoff4,vfloat16m1_t maskedoff5,vfloat16m1_t maskedoff6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 22);
}

/*
** test0_vlsseg7e16_v_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_f16m1_tu:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 31);
}

/*
** test0_vlsseg7e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16mf2(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16mf2(v0, v1, v2, v3, v4, v5, v6, base, bstride, 15);
}

/*
** test0_vlsseg7e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,vfloat16mf2_t maskedoff3,vfloat16mf2_t maskedoff4,vfloat16mf2_t maskedoff5,vfloat16mf2_t maskedoff6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,vfloat16mf2_t maskedoff3,vfloat16mf2_t maskedoff4,vfloat16mf2_t maskedoff5,vfloat16mf2_t maskedoff6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 19);
}

/*
** test0_vlsseg7e16_v_f16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_f16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 13);
}

/*
** test0_vlsseg7e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16mf4(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16mf4(v0, v1, v2, v3, v4, v5, v6, base, bstride, 1);
}

/*
** test0_vlsseg7e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,vfloat16mf4_t maskedoff2,vfloat16mf4_t maskedoff3,vfloat16mf4_t maskedoff4,vfloat16mf4_t maskedoff5,vfloat16mf4_t maskedoff6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,vfloat16mf4_t maskedoff2,vfloat16mf4_t maskedoff3,vfloat16mf4_t maskedoff4,vfloat16mf4_t maskedoff5,vfloat16mf4_t maskedoff6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 11);
}

/*
** test0_vlsseg7e16_v_f16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16mf4_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_f16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_f16mf4_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 1);
}

/*
** test0_vlsseg7e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, 30);
}

/*
** test0_vlsseg7e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vbool16_t mask,vint16m1_t maskedoff0,vint16m1_t maskedoff1,vint16m1_t maskedoff2,vint16m1_t maskedoff3,vint16m1_t maskedoff4,vint16m1_t maskedoff5,vint16m1_t maskedoff6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vbool16_t mask,vint16m1_t maskedoff0,vint16m1_t maskedoff1,vint16m1_t maskedoff2,vint16m1_t maskedoff3,vint16m1_t maskedoff4,vint16m1_t maskedoff5,vint16m1_t maskedoff6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 21);
}

/*
** test0_vlsseg7e16_v_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_i16m1_tu:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 25);
}

/*
** test0_vlsseg7e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16mf2(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16mf2(v0, v1, v2, v3, v4, v5, v6, base, bstride, 19);
}

/*
** test0_vlsseg7e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vbool32_t mask,vint16mf2_t maskedoff0,vint16mf2_t maskedoff1,vint16mf2_t maskedoff2,vint16mf2_t maskedoff3,vint16mf2_t maskedoff4,vint16mf2_t maskedoff5,vint16mf2_t maskedoff6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vbool32_t mask,vint16mf2_t maskedoff0,vint16mf2_t maskedoff1,vint16mf2_t maskedoff2,vint16mf2_t maskedoff3,vint16mf2_t maskedoff4,vint16mf2_t maskedoff5,vint16mf2_t maskedoff6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 13);
}

/*
** test0_vlsseg7e16_v_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_i16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 20);
}

/*
** test0_vlsseg7e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16mf4(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16mf4(v0, v1, v2, v3, v4, v5, v6, base, bstride, 7);
}

/*
** test0_vlsseg7e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vbool64_t mask,vint16mf4_t maskedoff0,vint16mf4_t maskedoff1,vint16mf4_t maskedoff2,vint16mf4_t maskedoff3,vint16mf4_t maskedoff4,vint16mf4_t maskedoff5,vint16mf4_t maskedoff6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vbool64_t mask,vint16mf4_t maskedoff0,vint16mf4_t maskedoff1,vint16mf4_t maskedoff2,vint16mf4_t maskedoff3,vint16mf4_t maskedoff4,vint16mf4_t maskedoff5,vint16mf4_t maskedoff6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 13);
}

/*
** test0_vlsseg7e16_v_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16mf4_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_i16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_i16mf4_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 7);
}

/*
** test0_vlsseg7e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, 7);
}

/*
** test0_vlsseg7e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,vuint16m1_t maskedoff2,vuint16m1_t maskedoff3,vuint16m1_t maskedoff4,vuint16m1_t maskedoff5,vuint16m1_t maskedoff6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,vuint16m1_t maskedoff2,vuint16m1_t maskedoff3,vuint16m1_t maskedoff4,vuint16m1_t maskedoff5,vuint16m1_t maskedoff6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 1);
}

/*
** test0_vlsseg7e16_v_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_u16m1_tu:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 28);
}

/*
** test0_vlsseg7e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16mf2(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16mf2(v0, v1, v2, v3, v4, v5, v6, base, bstride, 25);
}

/*
** test0_vlsseg7e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,vuint16mf2_t maskedoff2,vuint16mf2_t maskedoff3,vuint16mf2_t maskedoff4,vuint16mf2_t maskedoff5,vuint16mf2_t maskedoff6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,vuint16mf2_t maskedoff2,vuint16mf2_t maskedoff3,vuint16mf2_t maskedoff4,vuint16mf2_t maskedoff5,vuint16mf2_t maskedoff6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 6);
}

/*
** test0_vlsseg7e16_v_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_u16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 29);
}

/*
** test0_vlsseg7e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16mf4(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16mf4(v0, v1, v2, v3, v4, v5, v6, base, bstride, 12);
}

/*
** test0_vlsseg7e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,vuint16mf4_t maskedoff2,vuint16mf4_t maskedoff3,vuint16mf4_t maskedoff4,vuint16mf4_t maskedoff5,vuint16mf4_t maskedoff6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,vuint16mf4_t maskedoff2,vuint16mf4_t maskedoff3,vuint16mf4_t maskedoff4,vuint16mf4_t maskedoff5,vuint16mf4_t maskedoff6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 27);
}

/*
** test0_vlsseg7e16_v_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16mf4_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e16_v_u16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16mf4_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 22);
}

/*
** test0_vlsseg7e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_f32m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_f32m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, 20);
}

/*
** test0_vlsseg7e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vbool32_t mask,vfloat32m1_t maskedoff0,vfloat32m1_t maskedoff1,vfloat32m1_t maskedoff2,vfloat32m1_t maskedoff3,vfloat32m1_t maskedoff4,vfloat32m1_t maskedoff5,vfloat32m1_t maskedoff6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_f32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vbool32_t mask,vfloat32m1_t maskedoff0,vfloat32m1_t maskedoff1,vfloat32m1_t maskedoff2,vfloat32m1_t maskedoff3,vfloat32m1_t maskedoff4,vfloat32m1_t maskedoff5,vfloat32m1_t maskedoff6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_f32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 19);
}

/*
** test0_vlsseg7e32_v_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_f32m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_f32m1_tu:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_f32m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 16);
}

/*
** test0_vlsseg7e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_f32mf2(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_f32mf2(v0, v1, v2, v3, v4, v5, v6, base, bstride, 27);
}

/*
** test0_vlsseg7e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,vfloat32mf2_t maskedoff2,vfloat32mf2_t maskedoff3,vfloat32mf2_t maskedoff4,vfloat32mf2_t maskedoff5,vfloat32mf2_t maskedoff6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_f32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,vfloat32mf2_t maskedoff2,vfloat32mf2_t maskedoff3,vfloat32mf2_t maskedoff4,vfloat32mf2_t maskedoff5,vfloat32mf2_t maskedoff6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_f32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 31);
}

/*
** test0_vlsseg7e32_v_f32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_f32mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_f32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_f32mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 4);
}

/*
** test0_vlsseg7e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_i32m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_i32m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, 9);
}

/*
** test0_vlsseg7e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vbool32_t mask,vint32m1_t maskedoff0,vint32m1_t maskedoff1,vint32m1_t maskedoff2,vint32m1_t maskedoff3,vint32m1_t maskedoff4,vint32m1_t maskedoff5,vint32m1_t maskedoff6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_i32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vbool32_t mask,vint32m1_t maskedoff0,vint32m1_t maskedoff1,vint32m1_t maskedoff2,vint32m1_t maskedoff3,vint32m1_t maskedoff4,vint32m1_t maskedoff5,vint32m1_t maskedoff6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_i32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 27);
}

/*
** test0_vlsseg7e32_v_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_i32m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_i32m1_tu:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_i32m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 0);
}

/*
** test0_vlsseg7e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_i32mf2(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_i32mf2(v0, v1, v2, v3, v4, v5, v6, base, bstride, 31);
}

/*
** test0_vlsseg7e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,vint32mf2_t maskedoff2,vint32mf2_t maskedoff3,vint32mf2_t maskedoff4,vint32mf2_t maskedoff5,vint32mf2_t maskedoff6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_i32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,vint32mf2_t maskedoff2,vint32mf2_t maskedoff3,vint32mf2_t maskedoff4,vint32mf2_t maskedoff5,vint32mf2_t maskedoff6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_i32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 4);
}

/*
** test0_vlsseg7e32_v_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_i32mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_i32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_i32mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 5);
}

/*
** test0_vlsseg7e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_u32m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*11,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_u32m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, 11);
}

/*
** test0_vlsseg7e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,vuint32m1_t maskedoff2,vuint32m1_t maskedoff3,vuint32m1_t maskedoff4,vuint32m1_t maskedoff5,vuint32m1_t maskedoff6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_u32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,vuint32m1_t maskedoff2,vuint32m1_t maskedoff3,vuint32m1_t maskedoff4,vuint32m1_t maskedoff5,vuint32m1_t maskedoff6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_u32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 1);
}

/*
** test0_vlsseg7e32_v_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_u32m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_u32m1_tu:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_u32m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 7);
}

/*
** test0_vlsseg7e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_u32mf2(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*3,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_u32mf2(v0, v1, v2, v3, v4, v5, v6, base, bstride, 3);
}

/*
** test0_vlsseg7e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,vuint32mf2_t maskedoff2,vuint32mf2_t maskedoff3,vuint32mf2_t maskedoff4,vuint32mf2_t maskedoff5,vuint32mf2_t maskedoff6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_u32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,vuint32mf2_t maskedoff2,vuint32mf2_t maskedoff3,vuint32mf2_t maskedoff4,vuint32mf2_t maskedoff5,vuint32mf2_t maskedoff6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_u32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 30);
}

/*
** test0_vlsseg7e32_v_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_u32mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e32_v_u32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_v_u32mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 27);
}

/*
** test0_vlsseg7e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_f64m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*23,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_f64m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, 23);
}

/*
** test0_vlsseg7e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vbool64_t mask,vfloat64m1_t maskedoff0,vfloat64m1_t maskedoff1,vfloat64m1_t maskedoff2,vfloat64m1_t maskedoff3,vfloat64m1_t maskedoff4,vfloat64m1_t maskedoff5,vfloat64m1_t maskedoff6,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_f64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vbool64_t mask,vfloat64m1_t maskedoff0,vfloat64m1_t maskedoff1,vfloat64m1_t maskedoff2,vfloat64m1_t maskedoff3,vfloat64m1_t maskedoff4,vfloat64m1_t maskedoff5,vfloat64m1_t maskedoff6,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_f64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 11);
}

/*
** test0_vlsseg7e64_v_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_f64m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e64_v_f64m1_tu:
**  ...
**	vsetivli\s+zero,\s*7,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_f64m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 7);
}

/*
** test0_vlsseg7e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_i64m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*15,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_i64m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, 15);
}

/*
** test0_vlsseg7e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,vint64m1_t maskedoff2,vint64m1_t maskedoff3,vint64m1_t maskedoff4,vint64m1_t maskedoff5,vint64m1_t maskedoff6,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_i64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,vint64m1_t maskedoff2,vint64m1_t maskedoff3,vint64m1_t maskedoff4,vint64m1_t maskedoff5,vint64m1_t maskedoff6,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_i64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 18);
}

/*
** test0_vlsseg7e64_v_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_i64m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e64_v_i64m1_tu:
**  ...
**	vsetivli\s+zero,\s*18,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_i64m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 18);
}

/*
** test0_vlsseg7e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_u64m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*15,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_u64m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, 15);
}

/*
** test0_vlsseg7e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,vuint64m1_t maskedoff2,vuint64m1_t maskedoff3,vuint64m1_t maskedoff4,vuint64m1_t maskedoff5,vuint64m1_t maskedoff6,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_u64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,vuint64m1_t maskedoff2,vuint64m1_t maskedoff3,vuint64m1_t maskedoff4,vuint64m1_t maskedoff5,vuint64m1_t maskedoff6,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_u64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 28);
}

/*
** test0_vlsseg7e64_v_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_u64m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e64_v_u64m1_tu:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_u64m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 31);
}

/*
** test0_vlsseg7e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vbool8_t mask,vint8m1_t maskedoff0,vint8m1_t maskedoff1,vint8m1_t maskedoff2,vint8m1_t maskedoff3,vint8m1_t maskedoff4,vint8m1_t maskedoff5,vint8m1_t maskedoff6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_i8m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vbool8_t mask,vint8m1_t maskedoff0,vint8m1_t maskedoff1,vint8m1_t maskedoff2,vint8m1_t maskedoff3,vint8m1_t maskedoff4,vint8m1_t maskedoff5,vint8m1_t maskedoff6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_i8m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 28);
}

/*
** test0_vlsseg7e8_v_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_i8m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e8_v_i8m1_tu:
**  ...
**	vsetivli\s+zero,\s*6,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_i8m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 6);
}

/*
** test0_vlsseg7e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,vint8mf2_t maskedoff2,vint8mf2_t maskedoff3,vint8mf2_t maskedoff4,vint8mf2_t maskedoff5,vint8mf2_t maskedoff6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_i8mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,vint8mf2_t maskedoff2,vint8mf2_t maskedoff3,vint8mf2_t maskedoff4,vint8mf2_t maskedoff5,vint8mf2_t maskedoff6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_i8mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 24);
}

/*
** test0_vlsseg7e8_v_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_i8mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e8_v_i8mf2_tu:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_i8mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 31);
}

/*
** test0_vlsseg7e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vbool32_t mask,vint8mf4_t maskedoff0,vint8mf4_t maskedoff1,vint8mf4_t maskedoff2,vint8mf4_t maskedoff3,vint8mf4_t maskedoff4,vint8mf4_t maskedoff5,vint8mf4_t maskedoff6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_i8mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vbool32_t mask,vint8mf4_t maskedoff0,vint8mf4_t maskedoff1,vint8mf4_t maskedoff2,vint8mf4_t maskedoff3,vint8mf4_t maskedoff4,vint8mf4_t maskedoff5,vint8mf4_t maskedoff6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_i8mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 22);
}

/*
** test0_vlsseg7e8_v_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_i8mf4_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e8_v_i8mf4_tu:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_i8mf4_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 30);
}

/*
** test0_vlsseg7e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vbool64_t mask,vint8mf8_t maskedoff0,vint8mf8_t maskedoff1,vint8mf8_t maskedoff2,vint8mf8_t maskedoff3,vint8mf8_t maskedoff4,vint8mf8_t maskedoff5,vint8mf8_t maskedoff6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_i8mf8_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vbool64_t mask,vint8mf8_t maskedoff0,vint8mf8_t maskedoff1,vint8mf8_t maskedoff2,vint8mf8_t maskedoff3,vint8mf8_t maskedoff4,vint8mf8_t maskedoff5,vint8mf8_t maskedoff6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_i8mf8_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 3);
}

/*
** test0_vlsseg7e8_v_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_i8mf8_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e8_v_i8mf8_tu:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_i8mf8_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 31);
}

/*
** test0_vlsseg7e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,vuint8m1_t maskedoff2,vuint8m1_t maskedoff3,vuint8m1_t maskedoff4,vuint8m1_t maskedoff5,vuint8m1_t maskedoff6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_u8m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,vuint8m1_t maskedoff2,vuint8m1_t maskedoff3,vuint8m1_t maskedoff4,vuint8m1_t maskedoff5,vuint8m1_t maskedoff6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_u8m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 0);
}

/*
** test0_vlsseg7e8_v_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_u8m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e8_v_u8m1_tu:
**  ...
**	vsetivli\s+zero,\s*12,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_u8m1_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 12);
}

/*
** test0_vlsseg7e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vbool16_t mask,vuint8mf2_t maskedoff0,vuint8mf2_t maskedoff1,vuint8mf2_t maskedoff2,vuint8mf2_t maskedoff3,vuint8mf2_t maskedoff4,vuint8mf2_t maskedoff5,vuint8mf2_t maskedoff6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_u8mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vbool16_t mask,vuint8mf2_t maskedoff0,vuint8mf2_t maskedoff1,vuint8mf2_t maskedoff2,vuint8mf2_t maskedoff3,vuint8mf2_t maskedoff4,vuint8mf2_t maskedoff5,vuint8mf2_t maskedoff6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_u8mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 13);
}

/*
** test0_vlsseg7e8_v_u8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_u8mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e8_v_u8mf2_tu:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_u8mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 14);
}

/*
** test0_vlsseg7e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,vuint8mf4_t maskedoff2,vuint8mf4_t maskedoff3,vuint8mf4_t maskedoff4,vuint8mf4_t maskedoff5,vuint8mf4_t maskedoff6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_u8mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,vuint8mf4_t maskedoff2,vuint8mf4_t maskedoff3,vuint8mf4_t maskedoff4,vuint8mf4_t maskedoff5,vuint8mf4_t maskedoff6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_u8mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 26);
}

/*
** test0_vlsseg7e8_v_u8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_u8mf4_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e8_v_u8mf4_tu:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_u8mf4_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 26);
}

/*
** test0_vlsseg7e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg7e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vbool64_t mask,vuint8mf8_t maskedoff0,vuint8mf8_t maskedoff1,vuint8mf8_t maskedoff2,vuint8mf8_t maskedoff3,vuint8mf8_t maskedoff4,vuint8mf8_t maskedoff5,vuint8mf8_t maskedoff6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_u8mf8_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/*
** test1_vlsseg7e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg7e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vbool64_t mask,vuint8mf8_t maskedoff0,vuint8mf8_t maskedoff1,vuint8mf8_t maskedoff2,vuint8mf8_t maskedoff3,vuint8mf8_t maskedoff4,vuint8mf8_t maskedoff5,vuint8mf8_t maskedoff6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_u8mf8_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 19);
}

/*
** test0_vlsseg7e8_v_u8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg7e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_u8mf8_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/*
** test1_vlsseg7e8_v_u8mf8_tu:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg7e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_v_u8mf8_tu(v0, v1, v2, v3, v4, v5, v6, base, bstride, 7);
}

/*
** test0_vlsseg8e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 5);
}

/*
** test0_vlsseg8e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,vbool16_t mask,vfloat16m1_t maskedoff0,vfloat16m1_t maskedoff1,vfloat16m1_t maskedoff2,vfloat16m1_t maskedoff3,vfloat16m1_t maskedoff4,vfloat16m1_t maskedoff5,vfloat16m1_t maskedoff6,vfloat16m1_t maskedoff7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,vbool16_t mask,vfloat16m1_t maskedoff0,vfloat16m1_t maskedoff1,vfloat16m1_t maskedoff2,vfloat16m1_t maskedoff3,vfloat16m1_t maskedoff4,vfloat16m1_t maskedoff5,vfloat16m1_t maskedoff6,vfloat16m1_t maskedoff7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 3);
}

/*
** test0_vlsseg8e16_v_f16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_f16m1_tu:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 11);
}

/*
** test0_vlsseg8e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 29);
}

/*
** test0_vlsseg8e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,vfloat16mf2_t maskedoff3,vfloat16mf2_t maskedoff4,vfloat16mf2_t maskedoff5,vfloat16mf2_t maskedoff6,vfloat16mf2_t maskedoff7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,vfloat16mf2_t maskedoff3,vfloat16mf2_t maskedoff4,vfloat16mf2_t maskedoff5,vfloat16mf2_t maskedoff6,vfloat16mf2_t maskedoff7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 12);
}

/*
** test0_vlsseg8e16_v_f16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_f16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 1);
}

/*
** test0_vlsseg8e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 17);
}

/*
** test0_vlsseg8e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,vfloat16mf4_t maskedoff2,vfloat16mf4_t maskedoff3,vfloat16mf4_t maskedoff4,vfloat16mf4_t maskedoff5,vfloat16mf4_t maskedoff6,vfloat16mf4_t maskedoff7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,vfloat16mf4_t maskedoff2,vfloat16mf4_t maskedoff3,vfloat16mf4_t maskedoff4,vfloat16mf4_t maskedoff5,vfloat16mf4_t maskedoff6,vfloat16mf4_t maskedoff7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 21);
}

/*
** test0_vlsseg8e16_v_f16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16mf4_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_f16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_f16mf4_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 6);
}

/*
** test0_vlsseg8e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 9);
}

/*
** test0_vlsseg8e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,vbool16_t mask,vint16m1_t maskedoff0,vint16m1_t maskedoff1,vint16m1_t maskedoff2,vint16m1_t maskedoff3,vint16m1_t maskedoff4,vint16m1_t maskedoff5,vint16m1_t maskedoff6,vint16m1_t maskedoff7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,vbool16_t mask,vint16m1_t maskedoff0,vint16m1_t maskedoff1,vint16m1_t maskedoff2,vint16m1_t maskedoff3,vint16m1_t maskedoff4,vint16m1_t maskedoff5,vint16m1_t maskedoff6,vint16m1_t maskedoff7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 17);
}

/*
** test0_vlsseg8e16_v_i16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_i16m1_tu:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 24);
}

/*
** test0_vlsseg8e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 1);
}

/*
** test0_vlsseg8e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,vbool32_t mask,vint16mf2_t maskedoff0,vint16mf2_t maskedoff1,vint16mf2_t maskedoff2,vint16mf2_t maskedoff3,vint16mf2_t maskedoff4,vint16mf2_t maskedoff5,vint16mf2_t maskedoff6,vint16mf2_t maskedoff7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,vbool32_t mask,vint16mf2_t maskedoff0,vint16mf2_t maskedoff1,vint16mf2_t maskedoff2,vint16mf2_t maskedoff3,vint16mf2_t maskedoff4,vint16mf2_t maskedoff5,vint16mf2_t maskedoff6,vint16mf2_t maskedoff7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 10);
}

/*
** test0_vlsseg8e16_v_i16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_i16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 0);
}

/*
** test0_vlsseg8e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 8);
}

/*
** test0_vlsseg8e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,vbool64_t mask,vint16mf4_t maskedoff0,vint16mf4_t maskedoff1,vint16mf4_t maskedoff2,vint16mf4_t maskedoff3,vint16mf4_t maskedoff4,vint16mf4_t maskedoff5,vint16mf4_t maskedoff6,vint16mf4_t maskedoff7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,vbool64_t mask,vint16mf4_t maskedoff0,vint16mf4_t maskedoff1,vint16mf4_t maskedoff2,vint16mf4_t maskedoff3,vint16mf4_t maskedoff4,vint16mf4_t maskedoff5,vint16mf4_t maskedoff6,vint16mf4_t maskedoff7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 9);
}

/*
** test0_vlsseg8e16_v_i16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16mf4_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_i16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16mf4_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 21);
}

/*
** test0_vlsseg8e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 21);
}

/*
** test0_vlsseg8e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,vuint16m1_t maskedoff2,vuint16m1_t maskedoff3,vuint16m1_t maskedoff4,vuint16m1_t maskedoff5,vuint16m1_t maskedoff6,vuint16m1_t maskedoff7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,vuint16m1_t maskedoff2,vuint16m1_t maskedoff3,vuint16m1_t maskedoff4,vuint16m1_t maskedoff5,vuint16m1_t maskedoff6,vuint16m1_t maskedoff7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 18);
}

/*
** test0_vlsseg8e16_v_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_u16m1_tu:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 1);
}

/*
** test0_vlsseg8e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*14,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 14);
}

/*
** test0_vlsseg8e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,vuint16mf2_t maskedoff2,vuint16mf2_t maskedoff3,vuint16mf2_t maskedoff4,vuint16mf2_t maskedoff5,vuint16mf2_t maskedoff6,vuint16mf2_t maskedoff7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,vuint16mf2_t maskedoff2,vuint16mf2_t maskedoff3,vuint16mf2_t maskedoff4,vuint16mf2_t maskedoff5,vuint16mf2_t maskedoff6,vuint16mf2_t maskedoff7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 22);
}

/*
** test0_vlsseg8e16_v_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_u16mf2_tu:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 15);
}

/*
** test0_vlsseg8e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 4);
}

/*
** test0_vlsseg8e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,vuint16mf4_t maskedoff2,vuint16mf4_t maskedoff3,vuint16mf4_t maskedoff4,vuint16mf4_t maskedoff5,vuint16mf4_t maskedoff6,vuint16mf4_t maskedoff7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,vuint16mf4_t maskedoff2,vuint16mf4_t maskedoff3,vuint16mf4_t maskedoff4,vuint16mf4_t maskedoff5,vuint16mf4_t maskedoff6,vuint16mf4_t maskedoff7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 1);
}

/*
** test0_vlsseg8e16_v_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16mf4_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e16_v_u16mf4_tu:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_u16mf4_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 10);
}

/*
** test0_vlsseg8e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_f32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_f32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 21);
}

/*
** test0_vlsseg8e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,vbool32_t mask,vfloat32m1_t maskedoff0,vfloat32m1_t maskedoff1,vfloat32m1_t maskedoff2,vfloat32m1_t maskedoff3,vfloat32m1_t maskedoff4,vfloat32m1_t maskedoff5,vfloat32m1_t maskedoff6,vfloat32m1_t maskedoff7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_f32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,vbool32_t mask,vfloat32m1_t maskedoff0,vfloat32m1_t maskedoff1,vfloat32m1_t maskedoff2,vfloat32m1_t maskedoff3,vfloat32m1_t maskedoff4,vfloat32m1_t maskedoff5,vfloat32m1_t maskedoff6,vfloat32m1_t maskedoff7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_f32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 31);
}

/*
** test0_vlsseg8e32_v_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_f32m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_f32m1_tu:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_f32m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 0);
}

/*
** test0_vlsseg8e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_f32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_f32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 7);
}

/*
** test0_vlsseg8e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,vfloat32mf2_t maskedoff2,vfloat32mf2_t maskedoff3,vfloat32mf2_t maskedoff4,vfloat32mf2_t maskedoff5,vfloat32mf2_t maskedoff6,vfloat32mf2_t maskedoff7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_f32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,vfloat32mf2_t maskedoff2,vfloat32mf2_t maskedoff3,vfloat32mf2_t maskedoff4,vfloat32mf2_t maskedoff5,vfloat32mf2_t maskedoff6,vfloat32mf2_t maskedoff7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_f32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 11);
}

/*
** test0_vlsseg8e32_v_f32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_f32mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_f32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_f32mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 2);
}

/*
** test0_vlsseg8e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_i32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*19,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_i32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 19);
}

/*
** test0_vlsseg8e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,vbool32_t mask,vint32m1_t maskedoff0,vint32m1_t maskedoff1,vint32m1_t maskedoff2,vint32m1_t maskedoff3,vint32m1_t maskedoff4,vint32m1_t maskedoff5,vint32m1_t maskedoff6,vint32m1_t maskedoff7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_i32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,vbool32_t mask,vint32m1_t maskedoff0,vint32m1_t maskedoff1,vint32m1_t maskedoff2,vint32m1_t maskedoff3,vint32m1_t maskedoff4,vint32m1_t maskedoff5,vint32m1_t maskedoff6,vint32m1_t maskedoff7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_i32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 12);
}

/*
** test0_vlsseg8e32_v_i32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_i32m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_i32m1_tu:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_i32m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 4);
}

/*
** test0_vlsseg8e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_i32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_i32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 16);
}

/*
** test0_vlsseg8e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,vint32mf2_t maskedoff2,vint32mf2_t maskedoff3,vint32mf2_t maskedoff4,vint32mf2_t maskedoff5,vint32mf2_t maskedoff6,vint32mf2_t maskedoff7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_i32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,vint32mf2_t maskedoff2,vint32mf2_t maskedoff3,vint32mf2_t maskedoff4,vint32mf2_t maskedoff5,vint32mf2_t maskedoff6,vint32mf2_t maskedoff7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_i32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 6);
}

/*
** test0_vlsseg8e32_v_i32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_i32mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_i32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*28,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_i32mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 28);
}

/*
** test0_vlsseg8e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_u32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*11,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_u32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 11);
}

/*
** test0_vlsseg8e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,vuint32m1_t maskedoff2,vuint32m1_t maskedoff3,vuint32m1_t maskedoff4,vuint32m1_t maskedoff5,vuint32m1_t maskedoff6,vuint32m1_t maskedoff7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_u32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,vuint32m1_t maskedoff2,vuint32m1_t maskedoff3,vuint32m1_t maskedoff4,vuint32m1_t maskedoff5,vuint32m1_t maskedoff6,vuint32m1_t maskedoff7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_u32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 14);
}

/*
** test0_vlsseg8e32_v_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_u32m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_u32m1_tu:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_u32m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 9);
}

/*
** test0_vlsseg8e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_u32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_u32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 27);
}

/*
** test0_vlsseg8e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,vuint32mf2_t maskedoff2,vuint32mf2_t maskedoff3,vuint32mf2_t maskedoff4,vuint32mf2_t maskedoff5,vuint32mf2_t maskedoff6,vuint32mf2_t maskedoff7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_u32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,vbool64_t mask,vuint32mf2_t maskedoff0,vuint32mf2_t maskedoff1,vuint32mf2_t maskedoff2,vuint32mf2_t maskedoff3,vuint32mf2_t maskedoff4,vuint32mf2_t maskedoff5,vuint32mf2_t maskedoff6,vuint32mf2_t maskedoff7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_u32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 18);
}

/*
** test0_vlsseg8e32_v_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_u32mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e32_v_u32mf2_tu:
**  ...
**	vsetivli\s+zero,\s*22,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_v_u32mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 22);
}

/*
** test0_vlsseg8e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_f64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*26,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_f64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 26);
}

/*
** test0_vlsseg8e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,vbool64_t mask,vfloat64m1_t maskedoff0,vfloat64m1_t maskedoff1,vfloat64m1_t maskedoff2,vfloat64m1_t maskedoff3,vfloat64m1_t maskedoff4,vfloat64m1_t maskedoff5,vfloat64m1_t maskedoff6,vfloat64m1_t maskedoff7,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_f64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,vbool64_t mask,vfloat64m1_t maskedoff0,vfloat64m1_t maskedoff1,vfloat64m1_t maskedoff2,vfloat64m1_t maskedoff3,vfloat64m1_t maskedoff4,vfloat64m1_t maskedoff5,vfloat64m1_t maskedoff6,vfloat64m1_t maskedoff7,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_f64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 3);
}

/*
** test0_vlsseg8e64_v_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_f64m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e64_v_f64m1_tu:
**  ...
**	vsetivli\s+zero,\s*6,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_f64m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 6);
}

/*
** test0_vlsseg8e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_i64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*10,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_i64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 10);
}

/*
** test0_vlsseg8e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,vint64m1_t maskedoff2,vint64m1_t maskedoff3,vint64m1_t maskedoff4,vint64m1_t maskedoff5,vint64m1_t maskedoff6,vint64m1_t maskedoff7,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_i64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,vint64m1_t maskedoff2,vint64m1_t maskedoff3,vint64m1_t maskedoff4,vint64m1_t maskedoff5,vint64m1_t maskedoff6,vint64m1_t maskedoff7,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_i64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 1);
}

/*
** test0_vlsseg8e64_v_i64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_i64m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e64_v_i64m1_tu:
**  ...
**	vsetivli\s+zero,\s*6,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_i64m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 6);
}

/*
** test0_vlsseg8e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_u64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*22,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_u64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 22);
}

/*
** test0_vlsseg8e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,vuint64m1_t maskedoff2,vuint64m1_t maskedoff3,vuint64m1_t maskedoff4,vuint64m1_t maskedoff5,vuint64m1_t maskedoff6,vuint64m1_t maskedoff7,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_u64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,vuint64m1_t maskedoff2,vuint64m1_t maskedoff3,vuint64m1_t maskedoff4,vuint64m1_t maskedoff5,vuint64m1_t maskedoff6,vuint64m1_t maskedoff7,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_u64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 27);
}

/*
** test0_vlsseg8e64_v_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_u64m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e64_v_u64m1_tu:
**  ...
**	vsetivli\s+zero,\s*9,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_v_u64m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 9);
}

/*
** test0_vlsseg8e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,vbool8_t mask,vint8m1_t maskedoff0,vint8m1_t maskedoff1,vint8m1_t maskedoff2,vint8m1_t maskedoff3,vint8m1_t maskedoff4,vint8m1_t maskedoff5,vint8m1_t maskedoff6,vint8m1_t maskedoff7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,vbool8_t mask,vint8m1_t maskedoff0,vint8m1_t maskedoff1,vint8m1_t maskedoff2,vint8m1_t maskedoff3,vint8m1_t maskedoff4,vint8m1_t maskedoff5,vint8m1_t maskedoff6,vint8m1_t maskedoff7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 28);
}

/*
** test0_vlsseg8e8_v_i8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e8_v_i8m1_tu:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 18);
}

/*
** test0_vlsseg8e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,vint8mf2_t maskedoff2,vint8mf2_t maskedoff3,vint8mf2_t maskedoff4,vint8mf2_t maskedoff5,vint8mf2_t maskedoff6,vint8mf2_t maskedoff7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,vint8mf2_t maskedoff2,vint8mf2_t maskedoff3,vint8mf2_t maskedoff4,vint8mf2_t maskedoff5,vint8mf2_t maskedoff6,vint8mf2_t maskedoff7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 28);
}

/*
** test0_vlsseg8e8_v_i8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e8_v_i8mf2_tu:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 18);
}

/*
** test0_vlsseg8e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vint8mf4_t *v7,vbool32_t mask,vint8mf4_t maskedoff0,vint8mf4_t maskedoff1,vint8mf4_t maskedoff2,vint8mf4_t maskedoff3,vint8mf4_t maskedoff4,vint8mf4_t maskedoff5,vint8mf4_t maskedoff6,vint8mf4_t maskedoff7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vint8mf4_t *v7,vbool32_t mask,vint8mf4_t maskedoff0,vint8mf4_t maskedoff1,vint8mf4_t maskedoff2,vint8mf4_t maskedoff3,vint8mf4_t maskedoff4,vint8mf4_t maskedoff5,vint8mf4_t maskedoff6,vint8mf4_t maskedoff7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 11);
}

/*
** test0_vlsseg8e8_v_i8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vint8mf4_t *v7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8mf4_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e8_v_i8mf4_tu:
**  ...
**	vsetivli\s+zero,\s*13,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vint8mf4_t *v7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8mf4_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 13);
}

/*
** test0_vlsseg8e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,vbool64_t mask,vint8mf8_t maskedoff0,vint8mf8_t maskedoff1,vint8mf8_t maskedoff2,vint8mf8_t maskedoff3,vint8mf8_t maskedoff4,vint8mf8_t maskedoff5,vint8mf8_t maskedoff6,vint8mf8_t maskedoff7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8mf8_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,vbool64_t mask,vint8mf8_t maskedoff0,vint8mf8_t maskedoff1,vint8mf8_t maskedoff2,vint8mf8_t maskedoff3,vint8mf8_t maskedoff4,vint8mf8_t maskedoff5,vint8mf8_t maskedoff6,vint8mf8_t maskedoff7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8mf8_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 9);
}

/*
** test0_vlsseg8e8_v_i8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8mf8_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e8_v_i8mf8_tu:
**  ...
**	vsetivli\s+zero,\s*27,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8mf8_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 27);
}

/*
** test0_vlsseg8e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,vuint8m1_t maskedoff2,vuint8m1_t maskedoff3,vuint8m1_t maskedoff4,vuint8m1_t maskedoff5,vuint8m1_t maskedoff6,vuint8m1_t maskedoff7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_u8m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,vuint8m1_t maskedoff2,vuint8m1_t maskedoff3,vuint8m1_t maskedoff4,vuint8m1_t maskedoff5,vuint8m1_t maskedoff6,vuint8m1_t maskedoff7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_u8m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 3);
}

/*
** test0_vlsseg8e8_v_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_u8m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e8_v_u8m1_tu:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_u8m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 16);
}

/*
** test0_vlsseg8e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vuint8mf2_t *v7,vbool16_t mask,vuint8mf2_t maskedoff0,vuint8mf2_t maskedoff1,vuint8mf2_t maskedoff2,vuint8mf2_t maskedoff3,vuint8mf2_t maskedoff4,vuint8mf2_t maskedoff5,vuint8mf2_t maskedoff6,vuint8mf2_t maskedoff7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_u8mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vuint8mf2_t *v7,vbool16_t mask,vuint8mf2_t maskedoff0,vuint8mf2_t maskedoff1,vuint8mf2_t maskedoff2,vuint8mf2_t maskedoff3,vuint8mf2_t maskedoff4,vuint8mf2_t maskedoff5,vuint8mf2_t maskedoff6,vuint8mf2_t maskedoff7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_u8mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 29);
}

/*
** test0_vlsseg8e8_v_u8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vuint8mf2_t *v7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_u8mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e8_v_u8mf2_tu:
**  ...
**	vsetivli\s+zero,\s*3,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vuint8mf2_t *v7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_u8mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 3);
}

/*
** test0_vlsseg8e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vuint8mf4_t *v7,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,vuint8mf4_t maskedoff2,vuint8mf4_t maskedoff3,vuint8mf4_t maskedoff4,vuint8mf4_t maskedoff5,vuint8mf4_t maskedoff6,vuint8mf4_t maskedoff7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_u8mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vuint8mf4_t *v7,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,vuint8mf4_t maskedoff2,vuint8mf4_t maskedoff3,vuint8mf4_t maskedoff4,vuint8mf4_t maskedoff5,vuint8mf4_t maskedoff6,vuint8mf4_t maskedoff7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_u8mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 24);
}

/*
** test0_vlsseg8e8_v_u8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vuint8mf4_t *v7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_u8mf4_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e8_v_u8mf4_tu:
**  ...
**	vsetivli\s+zero,\s*29,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vuint8mf4_t *v7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_u8mf4_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 29);
}

/*
** test0_vlsseg8e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlsseg8e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,vbool64_t mask,vuint8mf8_t maskedoff0,vuint8mf8_t maskedoff1,vuint8mf8_t maskedoff2,vuint8mf8_t maskedoff3,vuint8mf8_t maskedoff4,vuint8mf8_t maskedoff5,vuint8mf8_t maskedoff6,vuint8mf8_t maskedoff7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_u8mf8_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, vl);
}

/*
** test1_vlsseg8e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlsseg8e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,vbool64_t mask,vuint8mf8_t maskedoff0,vuint8mf8_t maskedoff1,vuint8mf8_t maskedoff2,vuint8mf8_t maskedoff3,vuint8mf8_t maskedoff4,vuint8mf8_t maskedoff5,vuint8mf8_t maskedoff6,vuint8mf8_t maskedoff7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_u8mf8_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bstride, 11);
}

/*
** test0_vlsseg8e8_v_u8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vlsseg8e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_u8mf8_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/*
** test1_vlsseg8e8_v_u8mf8_tu:
**  ...
**	vsetivli\s+zero,\s*27,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vlsseg8e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_u8mf8_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 27);
}

