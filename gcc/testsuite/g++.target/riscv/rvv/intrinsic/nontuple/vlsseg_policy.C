/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test0_vlsseg2e16_v_f16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_f16m1_tamu(vfloat16m1_t *v0,vfloat16m1_t *v1,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t merge0,vfloat16m1_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_f16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_f16m1_tuma(vfloat16m1_t *v0,vfloat16m1_t *v1,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_f16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_f16m1_tumu(vfloat16m1_t *v0,vfloat16m1_t *v1,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_f16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_f16m2_tamu(vfloat16m2_t *v0,vfloat16m2_t *v1,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e16_v_f16m2_tu(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t merge0,vfloat16m2_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_f16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_f16m2_tuma(vfloat16m2_t *v0,vfloat16m2_t *v1,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_f16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_f16m2_tumu(vfloat16m2_t *v0,vfloat16m2_t *v1,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_f16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_f16m4_tamu(vfloat16m4_t *v0,vfloat16m4_t *v1,vbool4_t mask,vfloat16m4_t merge0,vfloat16m4_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e16_v_f16m4_tu(vfloat16m4_t *v0,vfloat16m4_t *v1,vfloat16m4_t merge0,vfloat16m4_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_f16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_f16m4_tuma(vfloat16m4_t *v0,vfloat16m4_t *v1,vbool4_t mask,vfloat16m4_t merge0,vfloat16m4_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_f16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_f16m4_tumu(vfloat16m4_t *v0,vfloat16m4_t *v1,vbool4_t mask,vfloat16m4_t merge0,vfloat16m4_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_f16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_f16mf2_tamu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t merge0,vfloat16mf2_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_f16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_f16mf2_tuma(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_f16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_f16mf2_tumu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_f16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_f16mf4_tamu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t merge0,vfloat16mf4_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_f16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_f16mf4_tuma(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_f16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_f16mf4_tumu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_i16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_i16m1_tamu(vint16m1_t *v0,vint16m1_t *v1,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t merge0,vint16m1_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_i16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_i16m1_tuma(vint16m1_t *v0,vint16m1_t *v1,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_i16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_i16m1_tumu(vint16m1_t *v0,vint16m1_t *v1,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_i16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_i16m2_tamu(vint16m2_t *v0,vint16m2_t *v1,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e16_v_i16m2_tu(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t merge0,vint16m2_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_i16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_i16m2_tuma(vint16m2_t *v0,vint16m2_t *v1,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_i16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_i16m2_tumu(vint16m2_t *v0,vint16m2_t *v1,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_i16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_i16m4_tamu(vint16m4_t *v0,vint16m4_t *v1,vbool4_t mask,vint16m4_t merge0,vint16m4_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e16_v_i16m4_tu(vint16m4_t *v0,vint16m4_t *v1,vint16m4_t merge0,vint16m4_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_i16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_i16m4_tuma(vint16m4_t *v0,vint16m4_t *v1,vbool4_t mask,vint16m4_t merge0,vint16m4_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_i16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_i16m4_tumu(vint16m4_t *v0,vint16m4_t *v1,vbool4_t mask,vint16m4_t merge0,vint16m4_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_i16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_i16mf2_tamu(vint16mf2_t *v0,vint16mf2_t *v1,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t merge0,vint16mf2_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_i16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_i16mf2_tuma(vint16mf2_t *v0,vint16mf2_t *v1,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_i16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_i16mf2_tumu(vint16mf2_t *v0,vint16mf2_t *v1,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_i16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_i16mf4_tamu(vint16mf4_t *v0,vint16mf4_t *v1,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t merge0,vint16mf4_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_i16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_i16mf4_tuma(vint16mf4_t *v0,vint16mf4_t *v1,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_i16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_i16mf4_tumu(vint16mf4_t *v0,vint16mf4_t *v1,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_u16m1_tamu(vuint16m1_t *v0,vuint16m1_t *v1,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t merge0,vuint16m1_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_u16m1_tuma(vuint16m1_t *v0,vuint16m1_t *v1,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_u16m1_tumu(vuint16m1_t *v0,vuint16m1_t *v1,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_u16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_u16m2_tamu(vuint16m2_t *v0,vuint16m2_t *v1,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e16_v_u16m2_tu(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t merge0,vuint16m2_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_u16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_u16m2_tuma(vuint16m2_t *v0,vuint16m2_t *v1,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_u16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_u16m2_tumu(vuint16m2_t *v0,vuint16m2_t *v1,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_u16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_u16m4_tamu(vuint16m4_t *v0,vuint16m4_t *v1,vbool4_t mask,vuint16m4_t merge0,vuint16m4_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e16_v_u16m4_tu(vuint16m4_t *v0,vuint16m4_t *v1,vuint16m4_t merge0,vuint16m4_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_u16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_u16m4_tuma(vuint16m4_t *v0,vuint16m4_t *v1,vbool4_t mask,vuint16m4_t merge0,vuint16m4_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_u16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_u16m4_tumu(vuint16m4_t *v0,vuint16m4_t *v1,vbool4_t mask,vuint16m4_t merge0,vuint16m4_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_u16mf2_tamu(vuint16mf2_t *v0,vuint16mf2_t *v1,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t merge0,vuint16mf2_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_u16mf2_tuma(vuint16mf2_t *v0,vuint16mf2_t *v1,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_u16mf2_tumu(vuint16mf2_t *v0,vuint16mf2_t *v1,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_u16mf4_tamu(vuint16mf4_t *v0,vuint16mf4_t *v1,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t merge0,vuint16mf4_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_u16mf4_tuma(vuint16mf4_t *v0,vuint16mf4_t *v1,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e16_v_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e16_v_u16mf4_tumu(vuint16mf4_t *v0,vuint16mf4_t *v1,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_f32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_f32m1_tamu(vfloat32m1_t *v0,vfloat32m1_t *v1,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t merge0,vfloat32m1_t merge1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_f32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_f32m1_tuma(vfloat32m1_t *v0,vfloat32m1_t *v1,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_f32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_f32m1_tumu(vfloat32m1_t *v0,vfloat32m1_t *v1,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_f32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_f32m2_tamu(vfloat32m2_t *v0,vfloat32m2_t *v1,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e32_v_f32m2_tu(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t merge0,vfloat32m2_t merge1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_f32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_f32m2_tuma(vfloat32m2_t *v0,vfloat32m2_t *v1,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_f32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_f32m2_tumu(vfloat32m2_t *v0,vfloat32m2_t *v1,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_f32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_f32m4_tamu(vfloat32m4_t *v0,vfloat32m4_t *v1,vbool8_t mask,vfloat32m4_t merge0,vfloat32m4_t merge1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e32_v_f32m4_tu(vfloat32m4_t *v0,vfloat32m4_t *v1,vfloat32m4_t merge0,vfloat32m4_t merge1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_f32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_f32m4_tuma(vfloat32m4_t *v0,vfloat32m4_t *v1,vbool8_t mask,vfloat32m4_t merge0,vfloat32m4_t merge1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_f32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_f32m4_tumu(vfloat32m4_t *v0,vfloat32m4_t *v1,vbool8_t mask,vfloat32m4_t merge0,vfloat32m4_t merge1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_f32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_f32mf2_tamu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t merge0,vfloat32mf2_t merge1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_f32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_f32mf2_tuma(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_f32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_f32mf2_tumu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_i32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_i32m1_tamu(vint32m1_t *v0,vint32m1_t *v1,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t merge0,vint32m1_t merge1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_i32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_i32m1_tuma(vint32m1_t *v0,vint32m1_t *v1,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_i32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_i32m1_tumu(vint32m1_t *v0,vint32m1_t *v1,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_i32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_i32m2_tamu(vint32m2_t *v0,vint32m2_t *v1,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e32_v_i32m2_tu(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t merge0,vint32m2_t merge1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_i32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_i32m2_tuma(vint32m2_t *v0,vint32m2_t *v1,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_i32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_i32m2_tumu(vint32m2_t *v0,vint32m2_t *v1,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_i32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_i32m4_tamu(vint32m4_t *v0,vint32m4_t *v1,vbool8_t mask,vint32m4_t merge0,vint32m4_t merge1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e32_v_i32m4_tu(vint32m4_t *v0,vint32m4_t *v1,vint32m4_t merge0,vint32m4_t merge1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_i32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_i32m4_tuma(vint32m4_t *v0,vint32m4_t *v1,vbool8_t mask,vint32m4_t merge0,vint32m4_t merge1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_i32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_i32m4_tumu(vint32m4_t *v0,vint32m4_t *v1,vbool8_t mask,vint32m4_t merge0,vint32m4_t merge1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_i32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_i32mf2_tamu(vint32mf2_t *v0,vint32mf2_t *v1,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t merge0,vint32mf2_t merge1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_i32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_i32mf2_tuma(vint32mf2_t *v0,vint32mf2_t *v1,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_i32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_i32mf2_tumu(vint32mf2_t *v0,vint32mf2_t *v1,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_u32m1_tamu(vuint32m1_t *v0,vuint32m1_t *v1,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t merge0,vuint32m1_t merge1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_u32m1_tuma(vuint32m1_t *v0,vuint32m1_t *v1,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_u32m1_tumu(vuint32m1_t *v0,vuint32m1_t *v1,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_u32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_u32m2_tamu(vuint32m2_t *v0,vuint32m2_t *v1,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e32_v_u32m2_tu(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t merge0,vuint32m2_t merge1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_u32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_u32m2_tuma(vuint32m2_t *v0,vuint32m2_t *v1,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_u32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_u32m2_tumu(vuint32m2_t *v0,vuint32m2_t *v1,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_u32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_u32m4_tamu(vuint32m4_t *v0,vuint32m4_t *v1,vbool8_t mask,vuint32m4_t merge0,vuint32m4_t merge1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e32_v_u32m4_tu(vuint32m4_t *v0,vuint32m4_t *v1,vuint32m4_t merge0,vuint32m4_t merge1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_u32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_u32m4_tuma(vuint32m4_t *v0,vuint32m4_t *v1,vbool8_t mask,vuint32m4_t merge0,vuint32m4_t merge1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_u32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_u32m4_tumu(vuint32m4_t *v0,vuint32m4_t *v1,vbool8_t mask,vuint32m4_t merge0,vuint32m4_t merge1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_u32mf2_tamu(vuint32mf2_t *v0,vuint32mf2_t *v1,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t merge0,vuint32mf2_t merge1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_u32mf2_tuma(vuint32mf2_t *v0,vuint32mf2_t *v1,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e32_v_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e32_v_u32mf2_tumu(vuint32mf2_t *v0,vuint32mf2_t *v1,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e32_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_f64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_f64m1_tamu(vfloat64m1_t *v0,vfloat64m1_t *v1,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t merge0,vfloat64m1_t merge1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_f64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_f64m1_tuma(vfloat64m1_t *v0,vfloat64m1_t *v1,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_f64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_f64m1_tumu(vfloat64m1_t *v0,vfloat64m1_t *v1,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_f64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_f64m2_tamu(vfloat64m2_t *v0,vfloat64m2_t *v1,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e64_v_f64m2_tu(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t merge0,vfloat64m2_t merge1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_f64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_f64m2_tuma(vfloat64m2_t *v0,vfloat64m2_t *v1,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_f64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_f64m2_tumu(vfloat64m2_t *v0,vfloat64m2_t *v1,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_f64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_f64m4_tamu(vfloat64m4_t *v0,vfloat64m4_t *v1,vbool16_t mask,vfloat64m4_t merge0,vfloat64m4_t merge1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e64_v_f64m4_tu(vfloat64m4_t *v0,vfloat64m4_t *v1,vfloat64m4_t merge0,vfloat64m4_t merge1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_f64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_f64m4_tuma(vfloat64m4_t *v0,vfloat64m4_t *v1,vbool16_t mask,vfloat64m4_t merge0,vfloat64m4_t merge1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_f64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_f64m4_tumu(vfloat64m4_t *v0,vfloat64m4_t *v1,vbool16_t mask,vfloat64m4_t merge0,vfloat64m4_t merge1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_i64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_i64m1_tamu(vint64m1_t *v0,vint64m1_t *v1,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t merge0,vint64m1_t merge1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_i64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_i64m1_tuma(vint64m1_t *v0,vint64m1_t *v1,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_i64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_i64m1_tumu(vint64m1_t *v0,vint64m1_t *v1,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_i64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_i64m2_tamu(vint64m2_t *v0,vint64m2_t *v1,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e64_v_i64m2_tu(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t merge0,vint64m2_t merge1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_i64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_i64m2_tuma(vint64m2_t *v0,vint64m2_t *v1,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_i64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_i64m2_tumu(vint64m2_t *v0,vint64m2_t *v1,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_i64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_i64m4_tamu(vint64m4_t *v0,vint64m4_t *v1,vbool16_t mask,vint64m4_t merge0,vint64m4_t merge1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e64_v_i64m4_tu(vint64m4_t *v0,vint64m4_t *v1,vint64m4_t merge0,vint64m4_t merge1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_i64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_i64m4_tuma(vint64m4_t *v0,vint64m4_t *v1,vbool16_t mask,vint64m4_t merge0,vint64m4_t merge1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_i64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_i64m4_tumu(vint64m4_t *v0,vint64m4_t *v1,vbool16_t mask,vint64m4_t merge0,vint64m4_t merge1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_u64m1_tamu(vuint64m1_t *v0,vuint64m1_t *v1,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t merge0,vuint64m1_t merge1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_u64m1_tuma(vuint64m1_t *v0,vuint64m1_t *v1,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_u64m1_tumu(vuint64m1_t *v0,vuint64m1_t *v1,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_u64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_u64m2_tamu(vuint64m2_t *v0,vuint64m2_t *v1,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e64_v_u64m2_tu(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t merge0,vuint64m2_t merge1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_u64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_u64m2_tuma(vuint64m2_t *v0,vuint64m2_t *v1,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_u64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_u64m2_tumu(vuint64m2_t *v0,vuint64m2_t *v1,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_u64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_u64m4_tamu(vuint64m4_t *v0,vuint64m4_t *v1,vbool16_t mask,vuint64m4_t merge0,vuint64m4_t merge1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e64_v_u64m4_tu(vuint64m4_t *v0,vuint64m4_t *v1,vuint64m4_t merge0,vuint64m4_t merge1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_u64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_u64m4_tuma(vuint64m4_t *v0,vuint64m4_t *v1,vbool16_t mask,vuint64m4_t merge0,vuint64m4_t merge1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e64_v_u64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e64_v_u64m4_tumu(vuint64m4_t *v0,vuint64m4_t *v1,vbool16_t mask,vuint64m4_t merge0,vuint64m4_t merge1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8m1_tamu(vint8m1_t *v0,vint8m1_t *v1,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t merge0,vint8m1_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8m1_tuma(vint8m1_t *v0,vint8m1_t *v1,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8m1_tumu(vint8m1_t *v0,vint8m1_t *v1,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8m2_tamu(vint8m2_t *v0,vint8m2_t *v1,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e8_v_i8m2_tu(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t merge0,vint8m2_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8m2_tuma(vint8m2_t *v0,vint8m2_t *v1,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8m2_tumu(vint8m2_t *v0,vint8m2_t *v1,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8m4_tamu(vint8m4_t *v0,vint8m4_t *v1,vbool2_t mask,vint8m4_t merge0,vint8m4_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e8_v_i8m4_tu(vint8m4_t *v0,vint8m4_t *v1,vint8m4_t merge0,vint8m4_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8m4_tuma(vint8m4_t *v0,vint8m4_t *v1,vbool2_t mask,vint8m4_t merge0,vint8m4_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8m4_tumu(vint8m4_t *v0,vint8m4_t *v1,vbool2_t mask,vint8m4_t merge0,vint8m4_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8mf2_tamu(vint8mf2_t *v0,vint8mf2_t *v1,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t merge0,vint8mf2_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8mf2_tuma(vint8mf2_t *v0,vint8mf2_t *v1,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8mf2_tumu(vint8mf2_t *v0,vint8mf2_t *v1,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8mf4_tamu(vint8mf4_t *v0,vint8mf4_t *v1,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t merge0,vint8mf4_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8mf4_tuma(vint8mf4_t *v0,vint8mf4_t *v1,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8mf4_tumu(vint8mf4_t *v0,vint8mf4_t *v1,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8mf8_tamu(vint8mf8_t *v0,vint8mf8_t *v1,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t merge0,vint8mf8_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8mf8_tuma(vint8mf8_t *v0,vint8mf8_t *v1,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_i8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_i8mf8_tumu(vint8mf8_t *v0,vint8mf8_t *v1,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8m1_tamu(vuint8m1_t *v0,vuint8m1_t *v1,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t merge0,vuint8m1_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8m1_tuma(vuint8m1_t *v0,vuint8m1_t *v1,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8m1_tumu(vuint8m1_t *v0,vuint8m1_t *v1,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8m2_tamu(vuint8m2_t *v0,vuint8m2_t *v1,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e8_v_u8m2_tu(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t merge0,vuint8m2_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8m2_tuma(vuint8m2_t *v0,vuint8m2_t *v1,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8m2_tumu(vuint8m2_t *v0,vuint8m2_t *v1,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8m4_tamu(vuint8m4_t *v0,vuint8m4_t *v1,vbool2_t mask,vuint8m4_t merge0,vuint8m4_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e8_v_u8m4_tu(vuint8m4_t *v0,vuint8m4_t *v1,vuint8m4_t merge0,vuint8m4_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8m4_tuma(vuint8m4_t *v0,vuint8m4_t *v1,vbool2_t mask,vuint8m4_t merge0,vuint8m4_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8m4_tumu(vuint8m4_t *v0,vuint8m4_t *v1,vbool2_t mask,vuint8m4_t merge0,vuint8m4_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8mf2_tamu(vuint8mf2_t *v0,vuint8mf2_t *v1,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t merge0,vuint8mf2_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8mf2_tuma(vuint8mf2_t *v0,vuint8mf2_t *v1,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8mf2_tumu(vuint8mf2_t *v0,vuint8mf2_t *v1,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8mf4_tamu(vuint8mf4_t *v0,vuint8mf4_t *v1,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t merge0,vuint8mf4_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8mf4_tuma(vuint8mf4_t *v0,vuint8mf4_t *v1,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8mf4_tumu(vuint8mf4_t *v0,vuint8mf4_t *v1,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8mf8_tamu(vuint8mf8_t *v0,vuint8mf8_t *v1,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tamu(v0, v1, mask, merge0, merge1, base, bstride, vl);
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
extern "C" void
test0_vlsseg2e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t merge0,vuint8mf8_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tu(v0, v1, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8mf8_tuma(vuint8mf8_t *v0,vuint8mf8_t *v1,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tuma(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg2e8_v_u8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg2e8_v_u8mf8_tumu(vuint8mf8_t *v0,vuint8mf8_t *v1,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e8_tumu(v0, v1, mask, merge0, merge1, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_f16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_f16m1_tamu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_f16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_f16m1_tuma(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_f16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_f16m1_tumu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_f16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_f16m2_tamu(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,vfloat16m2_t merge2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e16_v_f16m2_tu(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t merge0,vfloat16m2_t merge1,vfloat16m2_t merge2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_f16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_f16m2_tuma(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,vfloat16m2_t merge2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_f16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_f16m2_tumu(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,vfloat16m2_t merge2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_f16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_f16mf2_tamu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_f16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_f16mf2_tuma(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_f16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_f16mf2_tumu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_f16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_f16mf4_tamu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_f16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_f16mf4_tuma(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_f16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_f16mf4_tumu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_i16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_i16m1_tamu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_i16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_i16m1_tuma(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_i16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_i16m1_tumu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_i16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_i16m2_tamu(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,vint16m2_t merge2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e16_v_i16m2_tu(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t merge0,vint16m2_t merge1,vint16m2_t merge2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_i16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_i16m2_tuma(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,vint16m2_t merge2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_i16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_i16m2_tumu(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,vint16m2_t merge2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_i16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_i16mf2_tamu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_i16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_i16mf2_tuma(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_i16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_i16mf2_tumu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_i16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_i16mf4_tamu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_i16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_i16mf4_tuma(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_i16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_i16mf4_tumu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_u16m1_tamu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_u16m1_tuma(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_u16m1_tumu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_u16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_u16m2_tamu(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,vuint16m2_t merge2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e16_v_u16m2_tu(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t merge0,vuint16m2_t merge1,vuint16m2_t merge2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_u16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_u16m2_tuma(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,vuint16m2_t merge2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_u16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_u16m2_tumu(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,vuint16m2_t merge2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_u16mf2_tamu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_u16mf2_tuma(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_u16mf2_tumu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_u16mf4_tamu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_u16mf4_tuma(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e16_v_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e16_v_u16mf4_tumu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e16_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_f32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_f32m1_tamu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_f32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_f32m1_tuma(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_f32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_f32m1_tumu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_f32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_f32m2_tamu(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,vfloat32m2_t merge2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e32_v_f32m2_tu(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t merge0,vfloat32m2_t merge1,vfloat32m2_t merge2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_f32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_f32m2_tuma(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,vfloat32m2_t merge2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_f32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_f32m2_tumu(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,vfloat32m2_t merge2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_f32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_f32mf2_tamu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_f32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_f32mf2_tuma(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_f32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_f32mf2_tumu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_i32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_i32m1_tamu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_i32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_i32m1_tuma(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_i32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_i32m1_tumu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_i32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_i32m2_tamu(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,vint32m2_t merge2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e32_v_i32m2_tu(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t merge0,vint32m2_t merge1,vint32m2_t merge2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_i32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_i32m2_tuma(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,vint32m2_t merge2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_i32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_i32m2_tumu(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,vint32m2_t merge2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_i32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_i32mf2_tamu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_i32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_i32mf2_tuma(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_i32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_i32mf2_tumu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_u32m1_tamu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_u32m1_tuma(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_u32m1_tumu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_u32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_u32m2_tamu(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,vuint32m2_t merge2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e32_v_u32m2_tu(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t merge0,vuint32m2_t merge1,vuint32m2_t merge2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_u32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_u32m2_tuma(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,vuint32m2_t merge2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_u32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_u32m2_tumu(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,vuint32m2_t merge2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_u32mf2_tamu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_u32mf2_tuma(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e32_v_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e32_v_u32mf2_tumu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_f64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_f64m1_tamu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_f64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_f64m1_tuma(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_f64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_f64m1_tumu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_f64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_f64m2_tamu(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,vfloat64m2_t merge2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e64_v_f64m2_tu(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t merge0,vfloat64m2_t merge1,vfloat64m2_t merge2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_f64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_f64m2_tuma(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,vfloat64m2_t merge2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_f64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_f64m2_tumu(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,vfloat64m2_t merge2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_i64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_i64m1_tamu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_i64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_i64m1_tuma(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_i64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_i64m1_tumu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_i64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_i64m2_tamu(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,vint64m2_t merge2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e64_v_i64m2_tu(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t merge0,vint64m2_t merge1,vint64m2_t merge2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_i64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_i64m2_tuma(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,vint64m2_t merge2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_i64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_i64m2_tumu(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,vint64m2_t merge2,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_u64m1_tamu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_u64m1_tuma(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_u64m1_tumu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_u64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_u64m2_tamu(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,vuint64m2_t merge2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e64_v_u64m2_tu(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t merge0,vuint64m2_t merge1,vuint64m2_t merge2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_u64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_u64m2_tuma(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,vuint64m2_t merge2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e64_v_u64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e64_v_u64m2_tumu(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,vuint64m2_t merge2,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_i8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_i8m1_tamu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_i8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_i8m1_tuma(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_i8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_i8m1_tumu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_i8m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_i8m2_tamu(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,vint8m2_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e8_v_i8m2_tu(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t merge0,vint8m2_t merge1,vint8m2_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_i8m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_i8m2_tuma(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,vint8m2_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_i8m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_i8m2_tumu(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,vint8m2_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_i8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_i8mf2_tamu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_i8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_i8mf2_tuma(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_i8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_i8mf2_tumu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_i8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_i8mf4_tamu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_i8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_i8mf4_tuma(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_i8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_i8mf4_tumu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_i8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_i8mf8_tamu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_i8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_i8mf8_tuma(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_i8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_i8mf8_tumu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_u8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_u8m1_tamu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_u8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_u8m1_tuma(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_u8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_u8m1_tumu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_u8m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_u8m2_tamu(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,vuint8m2_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e8_v_u8m2_tu(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vuint8m2_t merge0,vuint8m2_t merge1,vuint8m2_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_u8m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_u8m2_tuma(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,vuint8m2_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_u8m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_u8m2_tumu(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,vuint8m2_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_u8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_u8mf2_tamu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_u8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_u8mf2_tuma(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_u8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_u8mf2_tumu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_u8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_u8mf4_tamu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_u8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_u8mf4_tuma(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_u8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_u8mf4_tumu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_u8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_u8mf8_tamu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tamu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
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
extern "C" void
test0_vlsseg3e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tu(v0, v1, v2, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_u8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_u8mf8_tuma(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tuma(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg3e8_v_u8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg3e8_v_u8mf8_tumu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e8_tumu(v0, v1, v2, mask, merge0, merge1, merge2, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_f16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_f16m1_tamu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_f16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_f16m1_tuma(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_f16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_f16m1_tumu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_f16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_f16m2_tamu(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,vfloat16m2_t merge2,vfloat16m2_t merge3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e16_v_f16m2_tu(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,vfloat16m2_t merge0,vfloat16m2_t merge1,vfloat16m2_t merge2,vfloat16m2_t merge3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_f16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_f16m2_tuma(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,vfloat16m2_t merge2,vfloat16m2_t merge3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_f16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_f16m2_tumu(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,vfloat16m2_t merge2,vfloat16m2_t merge3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_f16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_f16mf2_tamu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_f16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_f16mf2_tuma(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_f16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_f16mf2_tumu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_f16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_f16mf4_tamu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_f16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_f16mf4_tuma(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_f16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_f16mf4_tumu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_i16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_i16m1_tamu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_i16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_i16m1_tuma(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_i16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_i16m1_tumu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_i16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_i16m2_tamu(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,vint16m2_t merge2,vint16m2_t merge3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e16_v_i16m2_tu(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,vint16m2_t merge0,vint16m2_t merge1,vint16m2_t merge2,vint16m2_t merge3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_i16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_i16m2_tuma(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,vint16m2_t merge2,vint16m2_t merge3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_i16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_i16m2_tumu(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,vint16m2_t merge2,vint16m2_t merge3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_i16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_i16mf2_tamu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_i16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_i16mf2_tuma(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_i16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_i16mf2_tumu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_i16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_i16mf4_tamu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_i16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_i16mf4_tuma(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_i16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_i16mf4_tumu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_u16m1_tamu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_u16m1_tuma(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_u16m1_tumu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_u16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_u16m2_tamu(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,vuint16m2_t merge2,vuint16m2_t merge3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e16_v_u16m2_tu(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,vuint16m2_t merge0,vuint16m2_t merge1,vuint16m2_t merge2,vuint16m2_t merge3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_u16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_u16m2_tuma(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,vuint16m2_t merge2,vuint16m2_t merge3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_u16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_u16m2_tumu(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,vuint16m2_t merge2,vuint16m2_t merge3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_u16mf2_tamu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_u16mf2_tuma(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_u16mf2_tumu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_u16mf4_tamu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_u16mf4_tuma(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e16_v_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e16_v_u16mf4_tumu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e16_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_f32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_f32m1_tamu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_f32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_f32m1_tuma(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_f32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_f32m1_tumu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_f32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_f32m2_tamu(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,vfloat32m2_t merge2,vfloat32m2_t merge3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e32_v_f32m2_tu(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,vfloat32m2_t merge0,vfloat32m2_t merge1,vfloat32m2_t merge2,vfloat32m2_t merge3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_f32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_f32m2_tuma(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,vfloat32m2_t merge2,vfloat32m2_t merge3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_f32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_f32m2_tumu(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,vfloat32m2_t merge2,vfloat32m2_t merge3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_f32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_f32mf2_tamu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_f32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_f32mf2_tuma(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_f32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_f32mf2_tumu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_i32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_i32m1_tamu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_i32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_i32m1_tuma(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_i32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_i32m1_tumu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_i32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_i32m2_tamu(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,vint32m2_t merge2,vint32m2_t merge3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e32_v_i32m2_tu(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,vint32m2_t merge0,vint32m2_t merge1,vint32m2_t merge2,vint32m2_t merge3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_i32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_i32m2_tuma(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,vint32m2_t merge2,vint32m2_t merge3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_i32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_i32m2_tumu(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,vint32m2_t merge2,vint32m2_t merge3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_i32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_i32mf2_tamu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_i32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_i32mf2_tuma(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_i32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_i32mf2_tumu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_u32m1_tamu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_u32m1_tuma(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_u32m1_tumu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_u32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_u32m2_tamu(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,vuint32m2_t merge2,vuint32m2_t merge3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e32_v_u32m2_tu(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,vuint32m2_t merge0,vuint32m2_t merge1,vuint32m2_t merge2,vuint32m2_t merge3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_u32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_u32m2_tuma(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,vuint32m2_t merge2,vuint32m2_t merge3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_u32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_u32m2_tumu(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,vuint32m2_t merge2,vuint32m2_t merge3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_u32mf2_tamu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_u32mf2_tuma(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e32_v_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e32_v_u32mf2_tumu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e32_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_f64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_f64m1_tamu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_f64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_f64m1_tuma(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_f64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_f64m1_tumu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_f64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_f64m2_tamu(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,vfloat64m2_t merge2,vfloat64m2_t merge3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e64_v_f64m2_tu(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,vfloat64m2_t merge0,vfloat64m2_t merge1,vfloat64m2_t merge2,vfloat64m2_t merge3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_f64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_f64m2_tuma(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,vfloat64m2_t merge2,vfloat64m2_t merge3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_f64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_f64m2_tumu(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,vfloat64m2_t merge2,vfloat64m2_t merge3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_i64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_i64m1_tamu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_i64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_i64m1_tuma(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_i64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_i64m1_tumu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_i64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_i64m2_tamu(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,vint64m2_t merge2,vint64m2_t merge3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e64_v_i64m2_tu(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,vint64m2_t merge0,vint64m2_t merge1,vint64m2_t merge2,vint64m2_t merge3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_i64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_i64m2_tuma(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,vint64m2_t merge2,vint64m2_t merge3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_i64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_i64m2_tumu(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,vint64m2_t merge2,vint64m2_t merge3,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_u64m1_tamu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_u64m1_tuma(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_u64m1_tumu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_u64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_u64m2_tamu(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,vuint64m2_t merge2,vuint64m2_t merge3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e64_v_u64m2_tu(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,vuint64m2_t merge0,vuint64m2_t merge1,vuint64m2_t merge2,vuint64m2_t merge3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_u64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_u64m2_tuma(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,vuint64m2_t merge2,vuint64m2_t merge3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e64_v_u64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e64_v_u64m2_tumu(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,vuint64m2_t merge2,vuint64m2_t merge3,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_i8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_i8m1_tamu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_i8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_i8m1_tuma(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_i8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_i8m1_tumu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_i8m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_i8m2_tamu(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,vint8m2_t merge2,vint8m2_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e8_v_i8m2_tu(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,vint8m2_t merge0,vint8m2_t merge1,vint8m2_t merge2,vint8m2_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_i8m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_i8m2_tuma(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,vint8m2_t merge2,vint8m2_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_i8m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_i8m2_tumu(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,vint8m2_t merge2,vint8m2_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_i8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_i8mf2_tamu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_i8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_i8mf2_tuma(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_i8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_i8mf2_tumu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_i8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_i8mf4_tamu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_i8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_i8mf4_tuma(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_i8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_i8mf4_tumu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_i8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_i8mf8_tamu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_i8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_i8mf8_tuma(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_i8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_i8mf8_tumu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_u8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_u8m1_tamu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_u8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_u8m1_tuma(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_u8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_u8m1_tumu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_u8m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_u8m2_tamu(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vuint8m2_t *v3,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,vuint8m2_t merge2,vuint8m2_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e8_v_u8m2_tu(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vuint8m2_t *v3,vuint8m2_t merge0,vuint8m2_t merge1,vuint8m2_t merge2,vuint8m2_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_u8m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_u8m2_tuma(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vuint8m2_t *v3,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,vuint8m2_t merge2,vuint8m2_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_u8m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_u8m2_tumu(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vuint8m2_t *v3,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,vuint8m2_t merge2,vuint8m2_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_u8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_u8mf2_tamu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_u8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_u8mf2_tuma(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_u8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_u8mf2_tumu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_u8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_u8mf4_tamu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_u8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_u8mf4_tuma(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_u8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_u8mf4_tumu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_u8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_u8mf8_tamu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tamu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
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
extern "C" void
test0_vlsseg4e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tu(v0, v1, v2, v3, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_u8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_u8mf8_tuma(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tuma(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg4e8_v_u8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg4e8_v_u8mf8_tumu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_tumu(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_f16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_f16m1_tamu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_f16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_f16m1_tuma(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_f16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_f16m1_tumu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_f16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_f16mf2_tamu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_f16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_f16mf2_tuma(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_f16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_f16mf2_tumu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_f16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_f16mf4_tamu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_f16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_f16mf4_tuma(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_f16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_f16mf4_tumu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_i16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_i16m1_tamu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_i16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_i16m1_tuma(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_i16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_i16m1_tumu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_i16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_i16mf2_tamu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_i16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_i16mf2_tuma(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_i16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_i16mf2_tumu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_i16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_i16mf4_tamu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_i16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_i16mf4_tuma(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_i16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_i16mf4_tumu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_u16m1_tamu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_u16m1_tuma(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_u16m1_tumu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_u16mf2_tamu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_u16mf2_tuma(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_u16mf2_tumu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_u16mf4_tamu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_u16mf4_tuma(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e16_v_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e16_v_u16mf4_tumu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_f32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_f32m1_tamu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_f32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_f32m1_tuma(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_f32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_f32m1_tumu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_f32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_f32mf2_tamu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_f32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_f32mf2_tuma(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_f32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_f32mf2_tumu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_i32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_i32m1_tamu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_i32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_i32m1_tuma(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_i32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_i32m1_tumu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_i32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_i32mf2_tamu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_i32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_i32mf2_tuma(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_i32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_i32mf2_tumu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_u32m1_tamu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_u32m1_tuma(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_u32m1_tumu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_u32mf2_tamu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_u32mf2_tuma(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e32_v_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e32_v_u32mf2_tumu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e64_v_f64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e64_v_f64m1_tamu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e64_v_f64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e64_v_f64m1_tuma(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e64_v_f64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e64_v_f64m1_tumu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e64_v_i64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e64_v_i64m1_tamu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e64_v_i64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e64_v_i64m1_tuma(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e64_v_i64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e64_v_i64m1_tumu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e64_v_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e64_v_u64m1_tamu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e64_v_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e64_v_u64m1_tuma(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e64_v_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e64_v_u64m1_tumu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e64_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_i8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_i8m1_tamu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_i8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_i8m1_tuma(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_i8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_i8m1_tumu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_i8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_i8mf2_tamu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_i8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_i8mf2_tuma(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_i8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_i8mf2_tumu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_i8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_i8mf4_tamu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_i8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_i8mf4_tuma(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_i8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_i8mf4_tumu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_i8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_i8mf8_tamu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_i8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_i8mf8_tuma(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_i8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_i8mf8_tumu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_u8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_u8m1_tamu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_u8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_u8m1_tuma(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_u8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_u8m1_tumu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_u8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_u8mf2_tamu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_u8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_u8mf2_tuma(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_u8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_u8mf2_tumu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_u8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_u8mf4_tamu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_u8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_u8mf4_tuma(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_u8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_u8mf4_tumu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_u8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_u8mf8_tamu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tamu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
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
extern "C" void
test0_vlsseg5e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tu(v0, v1, v2, v3, v4, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_u8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_u8mf8_tuma(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tuma(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg5e8_v_u8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg5e8_v_u8mf8_tumu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e8_tumu(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_f16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_f16m1_tamu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_f16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_f16m1_tuma(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_f16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_f16m1_tumu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_f16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_f16mf2_tamu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_f16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_f16mf2_tuma(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_f16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_f16mf2_tumu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_f16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_f16mf4_tamu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_f16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_f16mf4_tuma(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_f16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_f16mf4_tumu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_i16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_i16m1_tamu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_i16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_i16m1_tuma(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_i16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_i16m1_tumu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_i16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_i16mf2_tamu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_i16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_i16mf2_tuma(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_i16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_i16mf2_tumu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_i16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_i16mf4_tamu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_i16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_i16mf4_tuma(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_i16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_i16mf4_tumu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_u16m1_tamu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_u16m1_tuma(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_u16m1_tumu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_u16mf2_tamu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_u16mf2_tuma(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_u16mf2_tumu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_u16mf4_tamu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_u16mf4_tuma(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e16_v_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e16_v_u16mf4_tumu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e16_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_f32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_f32m1_tamu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_f32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_f32m1_tuma(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_f32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_f32m1_tumu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_f32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_f32mf2_tamu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_f32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_f32mf2_tuma(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_f32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_f32mf2_tumu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_i32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_i32m1_tamu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_i32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_i32m1_tuma(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_i32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_i32m1_tumu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_i32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_i32mf2_tamu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_i32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_i32mf2_tuma(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_i32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_i32mf2_tumu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_u32m1_tamu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_u32m1_tuma(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_u32m1_tumu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_u32mf2_tamu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_u32mf2_tuma(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e32_v_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e32_v_u32mf2_tumu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e32_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e64_v_f64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e64_v_f64m1_tamu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e64_v_f64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e64_v_f64m1_tuma(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e64_v_f64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e64_v_f64m1_tumu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e64_v_i64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e64_v_i64m1_tamu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e64_v_i64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e64_v_i64m1_tuma(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e64_v_i64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e64_v_i64m1_tumu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e64_v_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e64_v_u64m1_tamu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e64_v_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e64_v_u64m1_tuma(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e64_v_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e64_v_u64m1_tumu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_i8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_i8m1_tamu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_i8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_i8m1_tuma(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_i8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_i8m1_tumu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_i8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_i8mf2_tamu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_i8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_i8mf2_tuma(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_i8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_i8mf2_tumu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_i8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_i8mf4_tamu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_i8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_i8mf4_tuma(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_i8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_i8mf4_tumu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_i8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_i8mf8_tamu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_i8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_i8mf8_tuma(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_i8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_i8mf8_tumu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_u8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_u8m1_tamu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_u8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_u8m1_tuma(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_u8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_u8m1_tumu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_u8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_u8mf2_tamu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_u8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_u8mf2_tuma(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_u8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_u8mf2_tumu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_u8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_u8mf4_tamu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_u8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_u8mf4_tuma(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_u8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_u8mf4_tumu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_u8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_u8mf8_tamu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tamu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
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
extern "C" void
test0_vlsseg6e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tu(v0, v1, v2, v3, v4, v5, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_u8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_u8mf8_tuma(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tuma(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg6e8_v_u8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg6e8_v_u8mf8_tumu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e8_tumu(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_f16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_f16m1_tamu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,vfloat16m1_t merge6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,vfloat16m1_t merge6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_f16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_f16m1_tuma(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,vfloat16m1_t merge6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_f16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_f16m1_tumu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,vfloat16m1_t merge6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_f16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_f16mf2_tamu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,vfloat16mf2_t merge6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,vfloat16mf2_t merge6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_f16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_f16mf2_tuma(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,vfloat16mf2_t merge6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_f16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_f16mf2_tumu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,vfloat16mf2_t merge6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_f16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_f16mf4_tamu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,vfloat16mf4_t merge6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,vfloat16mf4_t merge6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_f16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_f16mf4_tuma(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,vfloat16mf4_t merge6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_f16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_f16mf4_tumu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,vfloat16mf4_t merge6,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_i16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_i16m1_tamu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,vint16m1_t merge6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,vint16m1_t merge6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_i16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_i16m1_tuma(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,vint16m1_t merge6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_i16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_i16m1_tumu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,vint16m1_t merge6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_i16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_i16mf2_tamu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,vint16mf2_t merge6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,vint16mf2_t merge6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_i16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_i16mf2_tuma(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,vint16mf2_t merge6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_i16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_i16mf2_tumu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,vint16mf2_t merge6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_i16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_i16mf4_tamu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,vint16mf4_t merge6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,vint16mf4_t merge6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_i16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_i16mf4_tuma(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,vint16mf4_t merge6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_i16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_i16mf4_tumu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,vint16mf4_t merge6,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_u16m1_tamu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,vuint16m1_t merge6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,vuint16m1_t merge6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_u16m1_tuma(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,vuint16m1_t merge6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_u16m1_tumu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,vuint16m1_t merge6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_u16mf2_tamu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,vuint16mf2_t merge6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,vuint16mf2_t merge6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_u16mf2_tuma(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,vuint16mf2_t merge6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_u16mf2_tumu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,vuint16mf2_t merge6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_u16mf4_tamu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,vuint16mf4_t merge6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,vuint16mf4_t merge6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_u16mf4_tuma(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,vuint16mf4_t merge6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e16_v_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e16_v_u16mf4_tumu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,vuint16mf4_t merge6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_f32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_f32m1_tamu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,vfloat32m1_t merge6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,vfloat32m1_t merge6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_f32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_f32m1_tuma(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,vfloat32m1_t merge6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_f32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_f32m1_tumu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,vfloat32m1_t merge6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_f32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_f32mf2_tamu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,vfloat32mf2_t merge6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,vfloat32mf2_t merge6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_f32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_f32mf2_tuma(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,vfloat32mf2_t merge6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_f32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_f32mf2_tumu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,vfloat32mf2_t merge6,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_i32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_i32m1_tamu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,vint32m1_t merge6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,vint32m1_t merge6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_i32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_i32m1_tuma(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,vint32m1_t merge6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_i32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_i32m1_tumu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,vint32m1_t merge6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_i32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_i32mf2_tamu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,vint32mf2_t merge6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,vint32mf2_t merge6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_i32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_i32mf2_tuma(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,vint32mf2_t merge6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_i32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_i32mf2_tumu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,vint32mf2_t merge6,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_u32m1_tamu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,vuint32m1_t merge6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,vuint32m1_t merge6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_u32m1_tuma(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,vuint32m1_t merge6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_u32m1_tumu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,vuint32m1_t merge6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_u32mf2_tamu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,vuint32mf2_t merge6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,vuint32mf2_t merge6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_u32mf2_tuma(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,vuint32mf2_t merge6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e32_v_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e32_v_u32mf2_tumu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,vuint32mf2_t merge6,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e32_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e64_v_f64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e64_v_f64m1_tamu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,vfloat64m1_t merge6,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,vfloat64m1_t merge6,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e64_v_f64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e64_v_f64m1_tuma(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,vfloat64m1_t merge6,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e64_v_f64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e64_v_f64m1_tumu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,vfloat64m1_t merge6,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e64_v_i64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e64_v_i64m1_tamu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,vint64m1_t merge6,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,vint64m1_t merge6,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e64_v_i64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e64_v_i64m1_tuma(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,vint64m1_t merge6,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e64_v_i64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e64_v_i64m1_tumu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,vint64m1_t merge6,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e64_v_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e64_v_u64m1_tamu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,vuint64m1_t merge6,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,vuint64m1_t merge6,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e64_v_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e64_v_u64m1_tuma(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,vuint64m1_t merge6,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e64_v_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e64_v_u64m1_tumu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,vuint64m1_t merge6,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_i8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_i8m1_tamu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,vint8m1_t merge6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,vint8m1_t merge6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_i8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_i8m1_tuma(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,vint8m1_t merge6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_i8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_i8m1_tumu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,vint8m1_t merge6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_i8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_i8mf2_tamu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,vint8mf2_t merge6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,vint8mf2_t merge6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_i8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_i8mf2_tuma(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,vint8mf2_t merge6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_i8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_i8mf2_tumu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,vint8mf2_t merge6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_i8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_i8mf4_tamu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,vint8mf4_t merge6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,vint8mf4_t merge6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_i8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_i8mf4_tuma(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,vint8mf4_t merge6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_i8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_i8mf4_tumu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,vint8mf4_t merge6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_i8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_i8mf8_tamu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,vint8mf8_t merge6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,vint8mf8_t merge6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_i8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_i8mf8_tuma(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,vint8mf8_t merge6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_i8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_i8mf8_tumu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,vint8mf8_t merge6,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_u8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_u8m1_tamu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,vuint8m1_t merge6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,vuint8m1_t merge6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_u8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_u8m1_tuma(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,vuint8m1_t merge6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_u8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_u8m1_tumu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,vuint8m1_t merge6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_u8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_u8mf2_tamu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,vuint8mf2_t merge6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,vuint8mf2_t merge6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_u8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_u8mf2_tuma(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,vuint8mf2_t merge6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_u8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_u8mf2_tumu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,vuint8mf2_t merge6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_u8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_u8mf4_tamu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,vuint8mf4_t merge6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,vuint8mf4_t merge6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_u8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_u8mf4_tuma(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,vuint8mf4_t merge6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_u8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_u8mf4_tumu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,vuint8mf4_t merge6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_u8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_u8mf8_tamu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,vuint8mf8_t merge6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tamu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
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
extern "C" void
test0_vlsseg7e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,vuint8mf8_t merge6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tu(v0, v1, v2, v3, v4, v5, v6, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_u8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_u8mf8_tuma(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,vuint8mf8_t merge6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tuma(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg7e8_v_u8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg7e8_v_u8mf8_tumu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,vuint8mf8_t merge6,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e8_tumu(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_f16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_f16m1_tamu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,vfloat16m1_t merge6,vfloat16m1_t merge7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e16_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,vfloat16m1_t merge6,vfloat16m1_t merge7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_f16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_f16m1_tuma(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,vfloat16m1_t merge6,vfloat16m1_t merge7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_f16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_f16m1_tumu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,vfloat16m1_t merge6,vfloat16m1_t merge7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_f16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_f16mf2_tamu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,vfloat16mf2_t merge6,vfloat16mf2_t merge7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e16_v_f16mf2_tu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,vfloat16mf2_t merge6,vfloat16mf2_t merge7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_f16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_f16mf2_tuma(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,vfloat16mf2_t merge6,vfloat16mf2_t merge7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_f16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_f16mf2_tumu(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,vfloat16mf2_t merge6,vfloat16mf2_t merge7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_f16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_f16mf4_tamu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,vfloat16mf4_t merge6,vfloat16mf4_t merge7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e16_v_f16mf4_tu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,vfloat16mf4_t merge6,vfloat16mf4_t merge7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_f16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_f16mf4_tuma(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,vfloat16mf4_t merge6,vfloat16mf4_t merge7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_f16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_f16mf4_tumu(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,vfloat16mf4_t merge6,vfloat16mf4_t merge7,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_i16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_i16m1_tamu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,vint16m1_t merge6,vint16m1_t merge7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,vint16m1_t merge6,vint16m1_t merge7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_i16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_i16m1_tuma(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,vint16m1_t merge6,vint16m1_t merge7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_i16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_i16m1_tumu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,vint16m1_t merge6,vint16m1_t merge7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_i16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_i16mf2_tamu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,vint16mf2_t merge6,vint16mf2_t merge7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e16_v_i16mf2_tu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,vint16mf2_t merge6,vint16mf2_t merge7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_i16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_i16mf2_tuma(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,vint16mf2_t merge6,vint16mf2_t merge7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_i16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_i16mf2_tumu(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,vint16mf2_t merge6,vint16mf2_t merge7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_i16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_i16mf4_tamu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,vint16mf4_t merge6,vint16mf4_t merge7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e16_v_i16mf4_tu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,vint16mf4_t merge6,vint16mf4_t merge7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_i16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_i16mf4_tuma(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,vint16mf4_t merge6,vint16mf4_t merge7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_i16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_i16mf4_tumu(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,vint16mf4_t merge6,vint16mf4_t merge7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_u16m1_tamu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,vuint16m1_t merge6,vuint16m1_t merge7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e16_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,vuint16m1_t merge6,vuint16m1_t merge7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_u16m1_tuma(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,vuint16m1_t merge6,vuint16m1_t merge7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_u16m1_tumu(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,vuint16m1_t merge6,vuint16m1_t merge7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_u16mf2_tamu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,vuint16mf2_t merge6,vuint16mf2_t merge7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e16_v_u16mf2_tu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,vuint16mf2_t merge6,vuint16mf2_t merge7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_u16mf2_tuma(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,vuint16mf2_t merge6,vuint16mf2_t merge7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_u16mf2_tumu(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,vuint16mf2_t merge6,vuint16mf2_t merge7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_u16mf4_tamu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,vuint16mf4_t merge6,vuint16mf4_t merge7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e16_v_u16mf4_tu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,vuint16mf4_t merge6,vuint16mf4_t merge7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_u16mf4_tuma(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,vuint16mf4_t merge6,vuint16mf4_t merge7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e16_v_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e16_v_u16mf4_tumu(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,vuint16mf4_t merge6,vuint16mf4_t merge7,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_f32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_f32m1_tamu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,vfloat32m1_t merge6,vfloat32m1_t merge7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e32_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,vfloat32m1_t merge6,vfloat32m1_t merge7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_f32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_f32m1_tuma(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,vfloat32m1_t merge6,vfloat32m1_t merge7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_f32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_f32m1_tumu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,vfloat32m1_t merge6,vfloat32m1_t merge7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_f32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_f32mf2_tamu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,vfloat32mf2_t merge6,vfloat32mf2_t merge7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e32_v_f32mf2_tu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,vfloat32mf2_t merge6,vfloat32mf2_t merge7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_f32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_f32mf2_tuma(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,vfloat32mf2_t merge6,vfloat32mf2_t merge7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_f32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_f32mf2_tumu(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,vfloat32mf2_t merge6,vfloat32mf2_t merge7,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_i32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_i32m1_tamu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,vint32m1_t merge6,vint32m1_t merge7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e32_v_i32m1_tu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,vint32m1_t merge6,vint32m1_t merge7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_i32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_i32m1_tuma(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,vint32m1_t merge6,vint32m1_t merge7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_i32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_i32m1_tumu(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,vint32m1_t merge6,vint32m1_t merge7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_i32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_i32mf2_tamu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,vint32mf2_t merge6,vint32mf2_t merge7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e32_v_i32mf2_tu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,vint32mf2_t merge6,vint32mf2_t merge7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_i32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_i32mf2_tuma(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,vint32mf2_t merge6,vint32mf2_t merge7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_i32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_i32mf2_tumu(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,vint32mf2_t merge6,vint32mf2_t merge7,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_u32m1_tamu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,vuint32m1_t merge6,vuint32m1_t merge7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e32_v_u32m1_tu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,vuint32m1_t merge6,vuint32m1_t merge7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_u32m1_tuma(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,vuint32m1_t merge6,vuint32m1_t merge7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_u32m1_tumu(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,vuint32m1_t merge6,vuint32m1_t merge7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_u32mf2_tamu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,vuint32mf2_t merge6,vuint32mf2_t merge7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,vuint32mf2_t merge6,vuint32mf2_t merge7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_u32mf2_tuma(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,vuint32mf2_t merge6,vuint32mf2_t merge7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e32_v_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e32_v_u32mf2_tumu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,vuint32mf2_t merge6,vuint32mf2_t merge7,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e32_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e64_v_f64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e64_v_f64m1_tamu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,vfloat64m1_t merge6,vfloat64m1_t merge7,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e64_v_f64m1_tu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,vfloat64m1_t merge6,vfloat64m1_t merge7,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e64_v_f64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e64_v_f64m1_tuma(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,vfloat64m1_t merge6,vfloat64m1_t merge7,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e64_v_f64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e64_v_f64m1_tumu(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,vfloat64m1_t merge6,vfloat64m1_t merge7,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e64_v_i64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e64_v_i64m1_tamu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,vint64m1_t merge6,vint64m1_t merge7,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,vint64m1_t merge6,vint64m1_t merge7,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e64_v_i64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e64_v_i64m1_tuma(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,vint64m1_t merge6,vint64m1_t merge7,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e64_v_i64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e64_v_i64m1_tumu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,vint64m1_t merge6,vint64m1_t merge7,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e64_v_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e64_v_u64m1_tamu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,vuint64m1_t merge6,vuint64m1_t merge7,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e64_v_u64m1_tu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,vuint64m1_t merge6,vuint64m1_t merge7,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e64_v_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e64_v_u64m1_tuma(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,vuint64m1_t merge6,vuint64m1_t merge7,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e64_v_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e64_v_u64m1_tumu(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,vuint64m1_t merge6,vuint64m1_t merge7,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e64_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_i8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_i8m1_tamu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,vint8m1_t merge6,vint8m1_t merge7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e8_v_i8m1_tu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,vint8m1_t merge6,vint8m1_t merge7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_i8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_i8m1_tuma(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,vint8m1_t merge6,vint8m1_t merge7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_i8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_i8m1_tumu(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,vint8m1_t merge6,vint8m1_t merge7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_i8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_i8mf2_tamu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,vint8mf2_t merge6,vint8mf2_t merge7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,vint8mf2_t merge6,vint8mf2_t merge7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_i8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_i8mf2_tuma(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,vint8mf2_t merge6,vint8mf2_t merge7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_i8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_i8mf2_tumu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,vint8mf2_t merge6,vint8mf2_t merge7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_i8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_i8mf4_tamu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vint8mf4_t *v7,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,vint8mf4_t merge6,vint8mf4_t merge7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vint8mf4_t *v7,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,vint8mf4_t merge6,vint8mf4_t merge7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_i8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_i8mf4_tuma(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vint8mf4_t *v7,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,vint8mf4_t merge6,vint8mf4_t merge7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_i8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_i8mf4_tumu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vint8mf4_t *v7,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,vint8mf4_t merge6,vint8mf4_t merge7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_i8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_i8mf8_tamu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,vint8mf8_t merge6,vint8mf8_t merge7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e8_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,vint8mf8_t merge6,vint8mf8_t merge7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_i8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_i8mf8_tuma(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,vint8mf8_t merge6,vint8mf8_t merge7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_i8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_i8mf8_tumu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,vint8mf8_t merge6,vint8mf8_t merge7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_u8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_u8m1_tamu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,vuint8m1_t merge6,vuint8m1_t merge7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e8_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,vuint8m1_t merge6,vuint8m1_t merge7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_u8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_u8m1_tuma(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,vuint8m1_t merge6,vuint8m1_t merge7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_u8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_u8m1_tumu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,vuint8m1_t merge6,vuint8m1_t merge7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_u8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_u8mf2_tamu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vuint8mf2_t *v7,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,vuint8mf2_t merge6,vuint8mf2_t merge7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e8_v_u8mf2_tu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vuint8mf2_t *v7,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,vuint8mf2_t merge6,vuint8mf2_t merge7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_u8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_u8mf2_tuma(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vuint8mf2_t *v7,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,vuint8mf2_t merge6,vuint8mf2_t merge7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_u8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_u8mf2_tumu(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vuint8mf2_t *v7,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,vuint8mf2_t merge6,vuint8mf2_t merge7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_u8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_u8mf4_tamu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vuint8mf4_t *v7,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,vuint8mf4_t merge6,vuint8mf4_t merge7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e8_v_u8mf4_tu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vuint8mf4_t *v7,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,vuint8mf4_t merge6,vuint8mf4_t merge7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_u8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_u8mf4_tuma(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vuint8mf4_t *v7,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,vuint8mf4_t merge6,vuint8mf4_t merge7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_u8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_u8mf4_tumu(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vuint8mf4_t *v7,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,vuint8mf4_t merge6,vuint8mf4_t merge7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_u8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_u8mf8_tamu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,vuint8mf8_t merge6,vuint8mf8_t merge7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tamu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
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
extern "C" void
test0_vlsseg8e8_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,vuint8mf8_t merge6,vuint8mf8_t merge7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tu(v0, v1, v2, v3, v4, v5, v6, v7, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_u8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_u8mf8_tuma(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,vuint8mf8_t merge6,vuint8mf8_t merge7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tuma(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}


/*
** test0_vlsseg8e8_v_u8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vlsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vlsseg8e8_v_u8mf8_tumu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,vuint8mf8_t merge6,vuint8mf8_t merge7,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_tumu(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, bstride, vl);
}



