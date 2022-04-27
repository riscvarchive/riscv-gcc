/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test0_vssseg2e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e16_v_f16m1(float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,size_t vl)
{
    vssseg2e16_v_f16m1(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e16_v_f16m1(float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,size_t vl)
{
    vssseg2e16_v_f16m1(base, bstride, v0, v1, 26);
}

/*
** test0_vssseg2e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e16_v_f16m1_m(vbool16_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,size_t vl)
{
    vssseg2e16_v_f16m1_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e16_v_f16m1_m(vbool16_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,size_t vl)
{
    vssseg2e16_v_f16m1_m(mask, base, bstride, v0, v1, 6);
}

/*
** test0_vssseg2e16_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e16_v_f16m2(float16_t *base,ptrdiff_t bstride,vfloat16m2_t v0,vfloat16m2_t v1,size_t vl)
{
    vssseg2e16_v_f16m2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_f16m2:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e16_v_f16m2(float16_t *base,ptrdiff_t bstride,vfloat16m2_t v0,vfloat16m2_t v1,size_t vl)
{
    vssseg2e16_v_f16m2(base, bstride, v0, v1, 6);
}

/*
** test0_vssseg2e16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e16_v_f16m2_m(vbool8_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m2_t v0,vfloat16m2_t v1,size_t vl)
{
    vssseg2e16_v_f16m2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_f16m2_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e16_v_f16m2_m(vbool8_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m2_t v0,vfloat16m2_t v1,size_t vl)
{
    vssseg2e16_v_f16m2_m(mask, base, bstride, v0, v1, 7);
}

/*
** test0_vssseg2e16_v_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e16_v_f16m4(float16_t *base,ptrdiff_t bstride,vfloat16m4_t v0,vfloat16m4_t v1,size_t vl)
{
    vssseg2e16_v_f16m4(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_f16m4:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e16_v_f16m4(float16_t *base,ptrdiff_t bstride,vfloat16m4_t v0,vfloat16m4_t v1,size_t vl)
{
    vssseg2e16_v_f16m4(base, bstride, v0, v1, 5);
}

/*
** test0_vssseg2e16_v_f16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e16_v_f16m4_m(vbool4_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m4_t v0,vfloat16m4_t v1,size_t vl)
{
    vssseg2e16_v_f16m4_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_f16m4_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e16_v_f16m4_m(vbool4_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m4_t v0,vfloat16m4_t v1,size_t vl)
{
    vssseg2e16_v_f16m4_m(mask, base, bstride, v0, v1, 0);
}

/*
** test0_vssseg2e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e16_v_f16mf2(float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,size_t vl)
{
    vssseg2e16_v_f16mf2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e16_v_f16mf2(float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,size_t vl)
{
    vssseg2e16_v_f16mf2(base, bstride, v0, v1, 23);
}

/*
** test0_vssseg2e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e16_v_f16mf2_m(vbool32_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,size_t vl)
{
    vssseg2e16_v_f16mf2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e16_v_f16mf2_m(vbool32_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,size_t vl)
{
    vssseg2e16_v_f16mf2_m(mask, base, bstride, v0, v1, 24);
}

/*
** test0_vssseg2e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e16_v_f16mf4(float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,size_t vl)
{
    vssseg2e16_v_f16mf4(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e16_v_f16mf4(float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,size_t vl)
{
    vssseg2e16_v_f16mf4(base, bstride, v0, v1, 12);
}

/*
** test0_vssseg2e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e16_v_f16mf4_m(vbool64_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,size_t vl)
{
    vssseg2e16_v_f16mf4_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e16_v_f16mf4_m(vbool64_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,size_t vl)
{
    vssseg2e16_v_f16mf4_m(mask, base, bstride, v0, v1, 2);
}

/*
** test0_vssseg2e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e16_v_i16m1(int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,size_t vl)
{
    vssseg2e16_v_i16m1(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e16_v_i16m1(int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,size_t vl)
{
    vssseg2e16_v_i16m1(base, bstride, v0, v1, 27);
}

/*
** test0_vssseg2e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e16_v_i16m1_m(vbool16_t mask,int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,size_t vl)
{
    vssseg2e16_v_i16m1_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e16_v_i16m1_m(vbool16_t mask,int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,size_t vl)
{
    vssseg2e16_v_i16m1_m(mask, base, bstride, v0, v1, 16);
}

/*
** test0_vssseg2e16_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e16_v_i16m2(int16_t *base,ptrdiff_t bstride,vint16m2_t v0,vint16m2_t v1,size_t vl)
{
    vssseg2e16_v_i16m2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_i16m2:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e16_v_i16m2(int16_t *base,ptrdiff_t bstride,vint16m2_t v0,vint16m2_t v1,size_t vl)
{
    vssseg2e16_v_i16m2(base, bstride, v0, v1, 4);
}

/*
** test0_vssseg2e16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e16_v_i16m2_m(vbool8_t mask,int16_t *base,ptrdiff_t bstride,vint16m2_t v0,vint16m2_t v1,size_t vl)
{
    vssseg2e16_v_i16m2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_i16m2_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e16_v_i16m2_m(vbool8_t mask,int16_t *base,ptrdiff_t bstride,vint16m2_t v0,vint16m2_t v1,size_t vl)
{
    vssseg2e16_v_i16m2_m(mask, base, bstride, v0, v1, 8);
}

/*
** test0_vssseg2e16_v_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e16_v_i16m4(int16_t *base,ptrdiff_t bstride,vint16m4_t v0,vint16m4_t v1,size_t vl)
{
    vssseg2e16_v_i16m4(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_i16m4:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e16_v_i16m4(int16_t *base,ptrdiff_t bstride,vint16m4_t v0,vint16m4_t v1,size_t vl)
{
    vssseg2e16_v_i16m4(base, bstride, v0, v1, 12);
}

/*
** test0_vssseg2e16_v_i16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e16_v_i16m4_m(vbool4_t mask,int16_t *base,ptrdiff_t bstride,vint16m4_t v0,vint16m4_t v1,size_t vl)
{
    vssseg2e16_v_i16m4_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_i16m4_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e16_v_i16m4_m(vbool4_t mask,int16_t *base,ptrdiff_t bstride,vint16m4_t v0,vint16m4_t v1,size_t vl)
{
    vssseg2e16_v_i16m4_m(mask, base, bstride, v0, v1, 10);
}

/*
** test0_vssseg2e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e16_v_i16mf2(int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,size_t vl)
{
    vssseg2e16_v_i16mf2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e16_v_i16mf2(int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,size_t vl)
{
    vssseg2e16_v_i16mf2(base, bstride, v0, v1, 25);
}

/*
** test0_vssseg2e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e16_v_i16mf2_m(vbool32_t mask,int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,size_t vl)
{
    vssseg2e16_v_i16mf2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e16_v_i16mf2_m(vbool32_t mask,int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,size_t vl)
{
    vssseg2e16_v_i16mf2_m(mask, base, bstride, v0, v1, 12);
}

/*
** test0_vssseg2e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e16_v_i16mf4(int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,size_t vl)
{
    vssseg2e16_v_i16mf4(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e16_v_i16mf4(int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,size_t vl)
{
    vssseg2e16_v_i16mf4(base, bstride, v0, v1, 21);
}

/*
** test0_vssseg2e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e16_v_i16mf4_m(vbool64_t mask,int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,size_t vl)
{
    vssseg2e16_v_i16mf4_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e16_v_i16mf4_m(vbool64_t mask,int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,size_t vl)
{
    vssseg2e16_v_i16mf4_m(mask, base, bstride, v0, v1, 3);
}

/*
** test0_vssseg2e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e16_v_u16m1(uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,size_t vl)
{
    vssseg2e16_v_u16m1(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e16_v_u16m1(uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,size_t vl)
{
    vssseg2e16_v_u16m1(base, bstride, v0, v1, 30);
}

/*
** test0_vssseg2e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e16_v_u16m1_m(vbool16_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,size_t vl)
{
    vssseg2e16_v_u16m1_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e16_v_u16m1_m(vbool16_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,size_t vl)
{
    vssseg2e16_v_u16m1_m(mask, base, bstride, v0, v1, 20);
}

/*
** test0_vssseg2e16_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e16_v_u16m2(uint16_t *base,ptrdiff_t bstride,vuint16m2_t v0,vuint16m2_t v1,size_t vl)
{
    vssseg2e16_v_u16m2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_u16m2:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e16_v_u16m2(uint16_t *base,ptrdiff_t bstride,vuint16m2_t v0,vuint16m2_t v1,size_t vl)
{
    vssseg2e16_v_u16m2(base, bstride, v0, v1, 13);
}

/*
** test0_vssseg2e16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e16_v_u16m2_m(vbool8_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m2_t v0,vuint16m2_t v1,size_t vl)
{
    vssseg2e16_v_u16m2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_u16m2_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e16_v_u16m2_m(vbool8_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m2_t v0,vuint16m2_t v1,size_t vl)
{
    vssseg2e16_v_u16m2_m(mask, base, bstride, v0, v1, 18);
}

/*
** test0_vssseg2e16_v_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e16_v_u16m4(uint16_t *base,ptrdiff_t bstride,vuint16m4_t v0,vuint16m4_t v1,size_t vl)
{
    vssseg2e16_v_u16m4(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_u16m4:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e16_v_u16m4(uint16_t *base,ptrdiff_t bstride,vuint16m4_t v0,vuint16m4_t v1,size_t vl)
{
    vssseg2e16_v_u16m4(base, bstride, v0, v1, 20);
}

/*
** test0_vssseg2e16_v_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e16_v_u16m4_m(vbool4_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m4_t v0,vuint16m4_t v1,size_t vl)
{
    vssseg2e16_v_u16m4_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_u16m4_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e16_v_u16m4_m(vbool4_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m4_t v0,vuint16m4_t v1,size_t vl)
{
    vssseg2e16_v_u16m4_m(mask, base, bstride, v0, v1, 29);
}

/*
** test0_vssseg2e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e16_v_u16mf2(uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,size_t vl)
{
    vssseg2e16_v_u16mf2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e16_v_u16mf2(uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,size_t vl)
{
    vssseg2e16_v_u16mf2(base, bstride, v0, v1, 3);
}

/*
** test0_vssseg2e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,size_t vl)
{
    vssseg2e16_v_u16mf2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,size_t vl)
{
    vssseg2e16_v_u16mf2_m(mask, base, bstride, v0, v1, 22);
}

/*
** test0_vssseg2e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e16_v_u16mf4(uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vssseg2e16_v_u16mf4(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e16_v_u16mf4(uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vssseg2e16_v_u16mf4(base, bstride, v0, v1, 23);
}

/*
** test0_vssseg2e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vssseg2e16_v_u16mf4_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vssseg2e16_v_u16mf4_m(mask, base, bstride, v0, v1, 10);
}

/*
** test0_vssseg2e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e32_v_f32m1(float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,size_t vl)
{
    vssseg2e32_v_f32m1(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e32_v_f32m1(float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,size_t vl)
{
    vssseg2e32_v_f32m1(base, bstride, v0, v1, 9);
}

/*
** test0_vssseg2e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e32_v_f32m1_m(vbool32_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,size_t vl)
{
    vssseg2e32_v_f32m1_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e32_v_f32m1_m(vbool32_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,size_t vl)
{
    vssseg2e32_v_f32m1_m(mask, base, bstride, v0, v1, 4);
}

/*
** test0_vssseg2e32_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e32_v_f32m2(float32_t *base,ptrdiff_t bstride,vfloat32m2_t v0,vfloat32m2_t v1,size_t vl)
{
    vssseg2e32_v_f32m2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_f32m2:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e32_v_f32m2(float32_t *base,ptrdiff_t bstride,vfloat32m2_t v0,vfloat32m2_t v1,size_t vl)
{
    vssseg2e32_v_f32m2(base, bstride, v0, v1, 0);
}

/*
** test0_vssseg2e32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e32_v_f32m2_m(vbool16_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m2_t v0,vfloat32m2_t v1,size_t vl)
{
    vssseg2e32_v_f32m2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_f32m2_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e32_v_f32m2_m(vbool16_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m2_t v0,vfloat32m2_t v1,size_t vl)
{
    vssseg2e32_v_f32m2_m(mask, base, bstride, v0, v1, 15);
}

/*
** test0_vssseg2e32_v_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e32_v_f32m4(float32_t *base,ptrdiff_t bstride,vfloat32m4_t v0,vfloat32m4_t v1,size_t vl)
{
    vssseg2e32_v_f32m4(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_f32m4:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e32_v_f32m4(float32_t *base,ptrdiff_t bstride,vfloat32m4_t v0,vfloat32m4_t v1,size_t vl)
{
    vssseg2e32_v_f32m4(base, bstride, v0, v1, 9);
}

/*
** test0_vssseg2e32_v_f32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e32_v_f32m4_m(vbool8_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m4_t v0,vfloat32m4_t v1,size_t vl)
{
    vssseg2e32_v_f32m4_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_f32m4_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e32_v_f32m4_m(vbool8_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m4_t v0,vfloat32m4_t v1,size_t vl)
{
    vssseg2e32_v_f32m4_m(mask, base, bstride, v0, v1, 5);
}

/*
** test0_vssseg2e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e32_v_f32mf2(float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,size_t vl)
{
    vssseg2e32_v_f32mf2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e32_v_f32mf2(float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,size_t vl)
{
    vssseg2e32_v_f32mf2(base, bstride, v0, v1, 14);
}

/*
** test0_vssseg2e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e32_v_f32mf2_m(vbool64_t mask,float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,size_t vl)
{
    vssseg2e32_v_f32mf2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e32_v_f32mf2_m(vbool64_t mask,float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,size_t vl)
{
    vssseg2e32_v_f32mf2_m(mask, base, bstride, v0, v1, 14);
}

/*
** test0_vssseg2e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e32_v_i32m1(int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,size_t vl)
{
    vssseg2e32_v_i32m1(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*11,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e32_v_i32m1(int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,size_t vl)
{
    vssseg2e32_v_i32m1(base, bstride, v0, v1, 11);
}

/*
** test0_vssseg2e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e32_v_i32m1_m(vbool32_t mask,int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,size_t vl)
{
    vssseg2e32_v_i32m1_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e32_v_i32m1_m(vbool32_t mask,int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,size_t vl)
{
    vssseg2e32_v_i32m1_m(mask, base, bstride, v0, v1, 30);
}

/*
** test0_vssseg2e32_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e32_v_i32m2(int32_t *base,ptrdiff_t bstride,vint32m2_t v0,vint32m2_t v1,size_t vl)
{
    vssseg2e32_v_i32m2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_i32m2:
**  ...
**	vsetivli\s+zero,\s*19,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e32_v_i32m2(int32_t *base,ptrdiff_t bstride,vint32m2_t v0,vint32m2_t v1,size_t vl)
{
    vssseg2e32_v_i32m2(base, bstride, v0, v1, 19);
}

/*
** test0_vssseg2e32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e32_v_i32m2_m(vbool16_t mask,int32_t *base,ptrdiff_t bstride,vint32m2_t v0,vint32m2_t v1,size_t vl)
{
    vssseg2e32_v_i32m2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_i32m2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e32_v_i32m2_m(vbool16_t mask,int32_t *base,ptrdiff_t bstride,vint32m2_t v0,vint32m2_t v1,size_t vl)
{
    vssseg2e32_v_i32m2_m(mask, base, bstride, v0, v1, 5);
}

/*
** test0_vssseg2e32_v_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e32_v_i32m4(int32_t *base,ptrdiff_t bstride,vint32m4_t v0,vint32m4_t v1,size_t vl)
{
    vssseg2e32_v_i32m4(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_i32m4:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e32_v_i32m4(int32_t *base,ptrdiff_t bstride,vint32m4_t v0,vint32m4_t v1,size_t vl)
{
    vssseg2e32_v_i32m4(base, bstride, v0, v1, 21);
}

/*
** test0_vssseg2e32_v_i32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e32_v_i32m4_m(vbool8_t mask,int32_t *base,ptrdiff_t bstride,vint32m4_t v0,vint32m4_t v1,size_t vl)
{
    vssseg2e32_v_i32m4_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_i32m4_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e32_v_i32m4_m(vbool8_t mask,int32_t *base,ptrdiff_t bstride,vint32m4_t v0,vint32m4_t v1,size_t vl)
{
    vssseg2e32_v_i32m4_m(mask, base, bstride, v0, v1, 18);
}

/*
** test0_vssseg2e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e32_v_i32mf2(int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,size_t vl)
{
    vssseg2e32_v_i32mf2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*19,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e32_v_i32mf2(int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,size_t vl)
{
    vssseg2e32_v_i32mf2(base, bstride, v0, v1, 19);
}

/*
** test0_vssseg2e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e32_v_i32mf2_m(vbool64_t mask,int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,size_t vl)
{
    vssseg2e32_v_i32mf2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e32_v_i32mf2_m(vbool64_t mask,int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,size_t vl)
{
    vssseg2e32_v_i32mf2_m(mask, base, bstride, v0, v1, 29);
}

/*
** test0_vssseg2e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e32_v_u32m1(uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,size_t vl)
{
    vssseg2e32_v_u32m1(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e32_v_u32m1(uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,size_t vl)
{
    vssseg2e32_v_u32m1(base, bstride, v0, v1, 18);
}

/*
** test0_vssseg2e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e32_v_u32m1_m(vbool32_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,size_t vl)
{
    vssseg2e32_v_u32m1_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e32_v_u32m1_m(vbool32_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,size_t vl)
{
    vssseg2e32_v_u32m1_m(mask, base, bstride, v0, v1, 30);
}

/*
** test0_vssseg2e32_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e32_v_u32m2(uint32_t *base,ptrdiff_t bstride,vuint32m2_t v0,vuint32m2_t v1,size_t vl)
{
    vssseg2e32_v_u32m2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_u32m2:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e32_v_u32m2(uint32_t *base,ptrdiff_t bstride,vuint32m2_t v0,vuint32m2_t v1,size_t vl)
{
    vssseg2e32_v_u32m2(base, bstride, v0, v1, 4);
}

/*
** test0_vssseg2e32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e32_v_u32m2_m(vbool16_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m2_t v0,vuint32m2_t v1,size_t vl)
{
    vssseg2e32_v_u32m2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_u32m2_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e32_v_u32m2_m(vbool16_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m2_t v0,vuint32m2_t v1,size_t vl)
{
    vssseg2e32_v_u32m2_m(mask, base, bstride, v0, v1, 23);
}

/*
** test0_vssseg2e32_v_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e32_v_u32m4(uint32_t *base,ptrdiff_t bstride,vuint32m4_t v0,vuint32m4_t v1,size_t vl)
{
    vssseg2e32_v_u32m4(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_u32m4:
**  ...
**	vsetivli\s+zero,\s*22,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e32_v_u32m4(uint32_t *base,ptrdiff_t bstride,vuint32m4_t v0,vuint32m4_t v1,size_t vl)
{
    vssseg2e32_v_u32m4(base, bstride, v0, v1, 22);
}

/*
** test0_vssseg2e32_v_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e32_v_u32m4_m(vbool8_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m4_t v0,vuint32m4_t v1,size_t vl)
{
    vssseg2e32_v_u32m4_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_u32m4_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e32_v_u32m4_m(vbool8_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m4_t v0,vuint32m4_t v1,size_t vl)
{
    vssseg2e32_v_u32m4_m(mask, base, bstride, v0, v1, 4);
}

/*
** test0_vssseg2e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e32_v_u32mf2(uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,size_t vl)
{
    vssseg2e32_v_u32mf2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e32_v_u32mf2(uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,size_t vl)
{
    vssseg2e32_v_u32mf2(base, bstride, v0, v1, 4);
}

/*
** test0_vssseg2e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,size_t vl)
{
    vssseg2e32_v_u32mf2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,size_t vl)
{
    vssseg2e32_v_u32mf2_m(mask, base, bstride, v0, v1, 11);
}

/*
** test0_vssseg2e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e64_v_f64m1(float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,size_t vl)
{
    vssseg2e64_v_f64m1(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*15,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e64_v_f64m1(float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,size_t vl)
{
    vssseg2e64_v_f64m1(base, bstride, v0, v1, 15);
}

/*
** test0_vssseg2e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e64_v_f64m1_m(vbool64_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,size_t vl)
{
    vssseg2e64_v_f64m1_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e64_v_f64m1_m(vbool64_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,size_t vl)
{
    vssseg2e64_v_f64m1_m(mask, base, bstride, v0, v1, 15);
}

/*
** test0_vssseg2e64_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e64_v_f64m2(float64_t *base,ptrdiff_t bstride,vfloat64m2_t v0,vfloat64m2_t v1,size_t vl)
{
    vssseg2e64_v_f64m2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_f64m2:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e64_v_f64m2(float64_t *base,ptrdiff_t bstride,vfloat64m2_t v0,vfloat64m2_t v1,size_t vl)
{
    vssseg2e64_v_f64m2(base, bstride, v0, v1, 31);
}

/*
** test0_vssseg2e64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e64_v_f64m2_m(vbool32_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m2_t v0,vfloat64m2_t v1,size_t vl)
{
    vssseg2e64_v_f64m2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_f64m2_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e64_v_f64m2_m(vbool32_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m2_t v0,vfloat64m2_t v1,size_t vl)
{
    vssseg2e64_v_f64m2_m(mask, base, bstride, v0, v1, 20);
}

/*
** test0_vssseg2e64_v_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e64_v_f64m4(float64_t *base,ptrdiff_t bstride,vfloat64m4_t v0,vfloat64m4_t v1,size_t vl)
{
    vssseg2e64_v_f64m4(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_f64m4:
**  ...
**	vsetivli\s+zero,\s*20,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e64_v_f64m4(float64_t *base,ptrdiff_t bstride,vfloat64m4_t v0,vfloat64m4_t v1,size_t vl)
{
    vssseg2e64_v_f64m4(base, bstride, v0, v1, 20);
}

/*
** test0_vssseg2e64_v_f64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e64_v_f64m4_m(vbool16_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m4_t v0,vfloat64m4_t v1,size_t vl)
{
    vssseg2e64_v_f64m4_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_f64m4_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e64_v_f64m4_m(vbool16_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m4_t v0,vfloat64m4_t v1,size_t vl)
{
    vssseg2e64_v_f64m4_m(mask, base, bstride, v0, v1, 0);
}

/*
** test0_vssseg2e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e64_v_i64m1(int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,size_t vl)
{
    vssseg2e64_v_i64m1(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*24,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e64_v_i64m1(int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,size_t vl)
{
    vssseg2e64_v_i64m1(base, bstride, v0, v1, 24);
}

/*
** test0_vssseg2e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e64_v_i64m1_m(vbool64_t mask,int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,size_t vl)
{
    vssseg2e64_v_i64m1_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e64_v_i64m1_m(vbool64_t mask,int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,size_t vl)
{
    vssseg2e64_v_i64m1_m(mask, base, bstride, v0, v1, 22);
}

/*
** test0_vssseg2e64_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e64_v_i64m2(int64_t *base,ptrdiff_t bstride,vint64m2_t v0,vint64m2_t v1,size_t vl)
{
    vssseg2e64_v_i64m2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_i64m2:
**  ...
**	vsetivli\s+zero,\s*20,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e64_v_i64m2(int64_t *base,ptrdiff_t bstride,vint64m2_t v0,vint64m2_t v1,size_t vl)
{
    vssseg2e64_v_i64m2(base, bstride, v0, v1, 20);
}

/*
** test0_vssseg2e64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e64_v_i64m2_m(vbool32_t mask,int64_t *base,ptrdiff_t bstride,vint64m2_t v0,vint64m2_t v1,size_t vl)
{
    vssseg2e64_v_i64m2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_i64m2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e64_v_i64m2_m(vbool32_t mask,int64_t *base,ptrdiff_t bstride,vint64m2_t v0,vint64m2_t v1,size_t vl)
{
    vssseg2e64_v_i64m2_m(mask, base, bstride, v0, v1, 29);
}

/*
** test0_vssseg2e64_v_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e64_v_i64m4(int64_t *base,ptrdiff_t bstride,vint64m4_t v0,vint64m4_t v1,size_t vl)
{
    vssseg2e64_v_i64m4(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_i64m4:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e64_v_i64m4(int64_t *base,ptrdiff_t bstride,vint64m4_t v0,vint64m4_t v1,size_t vl)
{
    vssseg2e64_v_i64m4(base, bstride, v0, v1, 31);
}

/*
** test0_vssseg2e64_v_i64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e64_v_i64m4_m(vbool16_t mask,int64_t *base,ptrdiff_t bstride,vint64m4_t v0,vint64m4_t v1,size_t vl)
{
    vssseg2e64_v_i64m4_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_i64m4_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e64_v_i64m4_m(vbool16_t mask,int64_t *base,ptrdiff_t bstride,vint64m4_t v0,vint64m4_t v1,size_t vl)
{
    vssseg2e64_v_i64m4_m(mask, base, bstride, v0, v1, 0);
}

/*
** test0_vssseg2e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e64_v_u64m1(uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,size_t vl)
{
    vssseg2e64_v_u64m1(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*23,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e64_v_u64m1(uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,size_t vl)
{
    vssseg2e64_v_u64m1(base, bstride, v0, v1, 23);
}

/*
** test0_vssseg2e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e64_v_u64m1_m(vbool64_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,size_t vl)
{
    vssseg2e64_v_u64m1_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e64_v_u64m1_m(vbool64_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,size_t vl)
{
    vssseg2e64_v_u64m1_m(mask, base, bstride, v0, v1, 29);
}

/*
** test0_vssseg2e64_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e64_v_u64m2(uint64_t *base,ptrdiff_t bstride,vuint64m2_t v0,vuint64m2_t v1,size_t vl)
{
    vssseg2e64_v_u64m2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_u64m2:
**  ...
**	vsetivli\s+zero,\s*5,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e64_v_u64m2(uint64_t *base,ptrdiff_t bstride,vuint64m2_t v0,vuint64m2_t v1,size_t vl)
{
    vssseg2e64_v_u64m2(base, bstride, v0, v1, 5);
}

/*
** test0_vssseg2e64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e64_v_u64m2_m(vbool32_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m2_t v0,vuint64m2_t v1,size_t vl)
{
    vssseg2e64_v_u64m2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_u64m2_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e64_v_u64m2_m(vbool32_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m2_t v0,vuint64m2_t v1,size_t vl)
{
    vssseg2e64_v_u64m2_m(mask, base, bstride, v0, v1, 24);
}

/*
** test0_vssseg2e64_v_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e64_v_u64m4(uint64_t *base,ptrdiff_t bstride,vuint64m4_t v0,vuint64m4_t v1,size_t vl)
{
    vssseg2e64_v_u64m4(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_u64m4:
**  ...
**	vsetivli\s+zero,\s*13,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e64_v_u64m4(uint64_t *base,ptrdiff_t bstride,vuint64m4_t v0,vuint64m4_t v1,size_t vl)
{
    vssseg2e64_v_u64m4(base, bstride, v0, v1, 13);
}

/*
** test0_vssseg2e64_v_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e64_v_u64m4_m(vbool16_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m4_t v0,vuint64m4_t v1,size_t vl)
{
    vssseg2e64_v_u64m4_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e64_v_u64m4_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e64_v_u64m4_m(vbool16_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m4_t v0,vuint64m4_t v1,size_t vl)
{
    vssseg2e64_v_u64m4_m(mask, base, bstride, v0, v1, 1);
}

/*
** test0_vssseg2e8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e8_v_i8m1(int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,size_t vl)
{
    vssseg2e8_v_i8m1(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*5,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e8_v_i8m1(int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,size_t vl)
{
    vssseg2e8_v_i8m1(base, bstride, v0, v1, 5);
}

/*
** test0_vssseg2e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e8_v_i8m1_m(vbool8_t mask,int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,size_t vl)
{
    vssseg2e8_v_i8m1_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e8_v_i8m1_m(vbool8_t mask,int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,size_t vl)
{
    vssseg2e8_v_i8m1_m(mask, base, bstride, v0, v1, 9);
}

/*
** test0_vssseg2e8_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e8_v_i8m2(int8_t *base,ptrdiff_t bstride,vint8m2_t v0,vint8m2_t v1,size_t vl)
{
    vssseg2e8_v_i8m2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_i8m2:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e8_v_i8m2(int8_t *base,ptrdiff_t bstride,vint8m2_t v0,vint8m2_t v1,size_t vl)
{
    vssseg2e8_v_i8m2(base, bstride, v0, v1, 25);
}

/*
** test0_vssseg2e8_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e8_v_i8m2_m(vbool4_t mask,int8_t *base,ptrdiff_t bstride,vint8m2_t v0,vint8m2_t v1,size_t vl)
{
    vssseg2e8_v_i8m2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_i8m2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e8_v_i8m2_m(vbool4_t mask,int8_t *base,ptrdiff_t bstride,vint8m2_t v0,vint8m2_t v1,size_t vl)
{
    vssseg2e8_v_i8m2_m(mask, base, bstride, v0, v1, 5);
}

/*
** test0_vssseg2e8_v_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e8_v_i8m4(int8_t *base,ptrdiff_t bstride,vint8m4_t v0,vint8m4_t v1,size_t vl)
{
    vssseg2e8_v_i8m4(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_i8m4:
**  ...
**	vsetivli\s+zero,\s*1,\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e8_v_i8m4(int8_t *base,ptrdiff_t bstride,vint8m4_t v0,vint8m4_t v1,size_t vl)
{
    vssseg2e8_v_i8m4(base, bstride, v0, v1, 1);
}

/*
** test0_vssseg2e8_v_i8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e8_v_i8m4_m(vbool2_t mask,int8_t *base,ptrdiff_t bstride,vint8m4_t v0,vint8m4_t v1,size_t vl)
{
    vssseg2e8_v_i8m4_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_i8m4_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e8_v_i8m4_m(vbool2_t mask,int8_t *base,ptrdiff_t bstride,vint8m4_t v0,vint8m4_t v1,size_t vl)
{
    vssseg2e8_v_i8m4_m(mask, base, bstride, v0, v1, 30);
}

/*
** test0_vssseg2e8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e8_v_i8mf2(int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,size_t vl)
{
    vssseg2e8_v_i8mf2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e8_v_i8mf2(int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,size_t vl)
{
    vssseg2e8_v_i8mf2(base, bstride, v0, v1, 12);
}

/*
** test0_vssseg2e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e8_v_i8mf2_m(vbool16_t mask,int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,size_t vl)
{
    vssseg2e8_v_i8mf2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e8_v_i8mf2_m(vbool16_t mask,int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,size_t vl)
{
    vssseg2e8_v_i8mf2_m(mask, base, bstride, v0, v1, 3);
}

/*
** test0_vssseg2e8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e8_v_i8mf4(int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,size_t vl)
{
    vssseg2e8_v_i8mf4(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*27,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e8_v_i8mf4(int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,size_t vl)
{
    vssseg2e8_v_i8mf4(base, bstride, v0, v1, 27);
}

/*
** test0_vssseg2e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e8_v_i8mf4_m(vbool32_t mask,int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,size_t vl)
{
    vssseg2e8_v_i8mf4_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e8_v_i8mf4_m(vbool32_t mask,int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,size_t vl)
{
    vssseg2e8_v_i8mf4_m(mask, base, bstride, v0, v1, 19);
}

/*
** test0_vssseg2e8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e8_v_i8mf8(int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,size_t vl)
{
    vssseg2e8_v_i8mf8(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e8_v_i8mf8(int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,size_t vl)
{
    vssseg2e8_v_i8mf8(base, bstride, v0, v1, 16);
}

/*
** test0_vssseg2e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e8_v_i8mf8_m(vbool64_t mask,int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,size_t vl)
{
    vssseg2e8_v_i8mf8_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e8_v_i8mf8_m(vbool64_t mask,int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,size_t vl)
{
    vssseg2e8_v_i8mf8_m(mask, base, bstride, v0, v1, 15);
}

/*
** test0_vssseg2e8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e8_v_u8m1(uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,size_t vl)
{
    vssseg2e8_v_u8m1(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*9,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e8_v_u8m1(uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,size_t vl)
{
    vssseg2e8_v_u8m1(base, bstride, v0, v1, 9);
}

/*
** test0_vssseg2e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e8_v_u8m1_m(vbool8_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,size_t vl)
{
    vssseg2e8_v_u8m1_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e8_v_u8m1_m(vbool8_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,size_t vl)
{
    vssseg2e8_v_u8m1_m(mask, base, bstride, v0, v1, 28);
}

/*
** test0_vssseg2e8_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e8_v_u8m2(uint8_t *base,ptrdiff_t bstride,vuint8m2_t v0,vuint8m2_t v1,size_t vl)
{
    vssseg2e8_v_u8m2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_u8m2:
**  ...
**	vsetivli\s+zero,\s*28,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e8_v_u8m2(uint8_t *base,ptrdiff_t bstride,vuint8m2_t v0,vuint8m2_t v1,size_t vl)
{
    vssseg2e8_v_u8m2(base, bstride, v0, v1, 28);
}

/*
** test0_vssseg2e8_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e8_v_u8m2_m(vbool4_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m2_t v0,vuint8m2_t v1,size_t vl)
{
    vssseg2e8_v_u8m2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_u8m2_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e8_v_u8m2_m(vbool4_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m2_t v0,vuint8m2_t v1,size_t vl)
{
    vssseg2e8_v_u8m2_m(mask, base, bstride, v0, v1, 16);
}

/*
** test0_vssseg2e8_v_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e8_v_u8m4(uint8_t *base,ptrdiff_t bstride,vuint8m4_t v0,vuint8m4_t v1,size_t vl)
{
    vssseg2e8_v_u8m4(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_u8m4:
**  ...
**	vsetivli\s+zero,\s*21,\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e8_v_u8m4(uint8_t *base,ptrdiff_t bstride,vuint8m4_t v0,vuint8m4_t v1,size_t vl)
{
    vssseg2e8_v_u8m4(base, bstride, v0, v1, 21);
}

/*
** test0_vssseg2e8_v_u8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e8_v_u8m4_m(vbool2_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m4_t v0,vuint8m4_t v1,size_t vl)
{
    vssseg2e8_v_u8m4_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_u8m4_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e8_v_u8m4_m(vbool2_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m4_t v0,vuint8m4_t v1,size_t vl)
{
    vssseg2e8_v_u8m4_m(mask, base, bstride, v0, v1, 19);
}

/*
** test0_vssseg2e8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e8_v_u8mf2(uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,size_t vl)
{
    vssseg2e8_v_u8mf2(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e8_v_u8mf2(uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,size_t vl)
{
    vssseg2e8_v_u8mf2(base, bstride, v0, v1, 18);
}

/*
** test0_vssseg2e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,size_t vl)
{
    vssseg2e8_v_u8mf2_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,size_t vl)
{
    vssseg2e8_v_u8mf2_m(mask, base, bstride, v0, v1, 11);
}

/*
** test0_vssseg2e8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e8_v_u8mf4(uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vssseg2e8_v_u8mf4(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e8_v_u8mf4(uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vssseg2e8_v_u8mf4(base, bstride, v0, v1, 14);
}

/*
** test0_vssseg2e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vssseg2e8_v_u8mf4_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vssseg2e8_v_u8mf4_m(mask, base, bstride, v0, v1, 8);
}

/*
** test0_vssseg2e8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg2e8_v_u8mf8(uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,size_t vl)
{
    vssseg2e8_v_u8mf8(base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg2e8_v_u8mf8(uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,size_t vl)
{
    vssseg2e8_v_u8mf8(base, bstride, v0, v1, 16);
}

/*
** test0_vssseg2e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg2e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,size_t vl)
{
    vssseg2e8_v_u8mf8_m(mask, base, bstride, v0, v1, vl);
}

/*
** test1_vssseg2e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg2e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,size_t vl)
{
    vssseg2e8_v_u8mf8_m(mask, base, bstride, v0, v1, 27);
}

/*
** test0_vssseg3e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e16_v_f16m1(float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,size_t vl)
{
    vssseg3e16_v_f16m1(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e16_v_f16m1(float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,size_t vl)
{
    vssseg3e16_v_f16m1(base, bstride, v0, v1, v2, 16);
}

/*
** test0_vssseg3e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e16_v_f16m1_m(vbool16_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,size_t vl)
{
    vssseg3e16_v_f16m1_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e16_v_f16m1_m(vbool16_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,size_t vl)
{
    vssseg3e16_v_f16m1_m(mask, base, bstride, v0, v1, v2, 4);
}

/*
** test0_vssseg3e16_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e16_v_f16m2(float16_t *base,ptrdiff_t bstride,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,size_t vl)
{
    vssseg3e16_v_f16m2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_f16m2:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e16_v_f16m2(float16_t *base,ptrdiff_t bstride,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,size_t vl)
{
    vssseg3e16_v_f16m2(base, bstride, v0, v1, v2, 9);
}

/*
** test0_vssseg3e16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e16_v_f16m2_m(vbool8_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,size_t vl)
{
    vssseg3e16_v_f16m2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_f16m2_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e16_v_f16m2_m(vbool8_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,size_t vl)
{
    vssseg3e16_v_f16m2_m(mask, base, bstride, v0, v1, v2, 19);
}

/*
** test0_vssseg3e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e16_v_f16mf2(float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,size_t vl)
{
    vssseg3e16_v_f16mf2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e16_v_f16mf2(float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,size_t vl)
{
    vssseg3e16_v_f16mf2(base, bstride, v0, v1, v2, 5);
}

/*
** test0_vssseg3e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e16_v_f16mf2_m(vbool32_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,size_t vl)
{
    vssseg3e16_v_f16mf2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e16_v_f16mf2_m(vbool32_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,size_t vl)
{
    vssseg3e16_v_f16mf2_m(mask, base, bstride, v0, v1, v2, 29);
}

/*
** test0_vssseg3e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e16_v_f16mf4(float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vssseg3e16_v_f16mf4(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e16_v_f16mf4(float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vssseg3e16_v_f16mf4(base, bstride, v0, v1, v2, 2);
}

/*
** test0_vssseg3e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e16_v_f16mf4_m(vbool64_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vssseg3e16_v_f16mf4_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e16_v_f16mf4_m(vbool64_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vssseg3e16_v_f16mf4_m(mask, base, bstride, v0, v1, v2, 4);
}

/*
** test0_vssseg3e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e16_v_i16m1(int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,size_t vl)
{
    vssseg3e16_v_i16m1(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e16_v_i16m1(int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,size_t vl)
{
    vssseg3e16_v_i16m1(base, bstride, v0, v1, v2, 29);
}

/*
** test0_vssseg3e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e16_v_i16m1_m(vbool16_t mask,int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,size_t vl)
{
    vssseg3e16_v_i16m1_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e16_v_i16m1_m(vbool16_t mask,int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,size_t vl)
{
    vssseg3e16_v_i16m1_m(mask, base, bstride, v0, v1, v2, 30);
}

/*
** test0_vssseg3e16_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e16_v_i16m2(int16_t *base,ptrdiff_t bstride,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,size_t vl)
{
    vssseg3e16_v_i16m2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_i16m2:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e16_v_i16m2(int16_t *base,ptrdiff_t bstride,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,size_t vl)
{
    vssseg3e16_v_i16m2(base, bstride, v0, v1, v2, 28);
}

/*
** test0_vssseg3e16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e16_v_i16m2_m(vbool8_t mask,int16_t *base,ptrdiff_t bstride,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,size_t vl)
{
    vssseg3e16_v_i16m2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_i16m2_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e16_v_i16m2_m(vbool8_t mask,int16_t *base,ptrdiff_t bstride,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,size_t vl)
{
    vssseg3e16_v_i16m2_m(mask, base, bstride, v0, v1, v2, 19);
}

/*
** test0_vssseg3e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e16_v_i16mf2(int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vssseg3e16_v_i16mf2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e16_v_i16mf2(int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vssseg3e16_v_i16mf2(base, bstride, v0, v1, v2, 3);
}

/*
** test0_vssseg3e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e16_v_i16mf2_m(vbool32_t mask,int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vssseg3e16_v_i16mf2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e16_v_i16mf2_m(vbool32_t mask,int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vssseg3e16_v_i16mf2_m(mask, base, bstride, v0, v1, v2, 23);
}

/*
** test0_vssseg3e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e16_v_i16mf4(int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,size_t vl)
{
    vssseg3e16_v_i16mf4(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e16_v_i16mf4(int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,size_t vl)
{
    vssseg3e16_v_i16mf4(base, bstride, v0, v1, v2, 16);
}

/*
** test0_vssseg3e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e16_v_i16mf4_m(vbool64_t mask,int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,size_t vl)
{
    vssseg3e16_v_i16mf4_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e16_v_i16mf4_m(vbool64_t mask,int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,size_t vl)
{
    vssseg3e16_v_i16mf4_m(mask, base, bstride, v0, v1, v2, 31);
}

/*
** test0_vssseg3e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e16_v_u16m1(uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,size_t vl)
{
    vssseg3e16_v_u16m1(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e16_v_u16m1(uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,size_t vl)
{
    vssseg3e16_v_u16m1(base, bstride, v0, v1, v2, 21);
}

/*
** test0_vssseg3e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e16_v_u16m1_m(vbool16_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,size_t vl)
{
    vssseg3e16_v_u16m1_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e16_v_u16m1_m(vbool16_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,size_t vl)
{
    vssseg3e16_v_u16m1_m(mask, base, bstride, v0, v1, v2, 7);
}

/*
** test0_vssseg3e16_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e16_v_u16m2(uint16_t *base,ptrdiff_t bstride,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,size_t vl)
{
    vssseg3e16_v_u16m2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_u16m2:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e16_v_u16m2(uint16_t *base,ptrdiff_t bstride,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,size_t vl)
{
    vssseg3e16_v_u16m2(base, bstride, v0, v1, v2, 16);
}

/*
** test0_vssseg3e16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e16_v_u16m2_m(vbool8_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,size_t vl)
{
    vssseg3e16_v_u16m2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_u16m2_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e16_v_u16m2_m(vbool8_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,size_t vl)
{
    vssseg3e16_v_u16m2_m(mask, base, bstride, v0, v1, v2, 8);
}

/*
** test0_vssseg3e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e16_v_u16mf2(uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vssseg3e16_v_u16mf2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e16_v_u16mf2(uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vssseg3e16_v_u16mf2(base, bstride, v0, v1, v2, 15);
}

/*
** test0_vssseg3e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vssseg3e16_v_u16mf2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vssseg3e16_v_u16mf2_m(mask, base, bstride, v0, v1, v2, 3);
}

/*
** test0_vssseg3e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e16_v_u16mf4(uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vssseg3e16_v_u16mf4(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e16_v_u16mf4(uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vssseg3e16_v_u16mf4(base, bstride, v0, v1, v2, 2);
}

/*
** test0_vssseg3e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vssseg3e16_v_u16mf4_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vssseg3e16_v_u16mf4_m(mask, base, bstride, v0, v1, v2, 31);
}

/*
** test0_vssseg3e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e32_v_f32m1(float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,size_t vl)
{
    vssseg3e32_v_f32m1(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e32_v_f32m1(float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,size_t vl)
{
    vssseg3e32_v_f32m1(base, bstride, v0, v1, v2, 7);
}

/*
** test0_vssseg3e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e32_v_f32m1_m(vbool32_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,size_t vl)
{
    vssseg3e32_v_f32m1_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e32_v_f32m1_m(vbool32_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,size_t vl)
{
    vssseg3e32_v_f32m1_m(mask, base, bstride, v0, v1, v2, 21);
}

/*
** test0_vssseg3e32_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e32_v_f32m2(float32_t *base,ptrdiff_t bstride,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,size_t vl)
{
    vssseg3e32_v_f32m2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_f32m2:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e32_v_f32m2(float32_t *base,ptrdiff_t bstride,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,size_t vl)
{
    vssseg3e32_v_f32m2(base, bstride, v0, v1, v2, 13);
}

/*
** test0_vssseg3e32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e32_v_f32m2_m(vbool16_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,size_t vl)
{
    vssseg3e32_v_f32m2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_f32m2_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e32_v_f32m2_m(vbool16_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,size_t vl)
{
    vssseg3e32_v_f32m2_m(mask, base, bstride, v0, v1, v2, 12);
}

/*
** test0_vssseg3e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e32_v_f32mf2(float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,size_t vl)
{
    vssseg3e32_v_f32mf2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*22,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e32_v_f32mf2(float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,size_t vl)
{
    vssseg3e32_v_f32mf2(base, bstride, v0, v1, v2, 22);
}

/*
** test0_vssseg3e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e32_v_f32mf2_m(vbool64_t mask,float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,size_t vl)
{
    vssseg3e32_v_f32mf2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e32_v_f32mf2_m(vbool64_t mask,float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,size_t vl)
{
    vssseg3e32_v_f32mf2_m(mask, base, bstride, v0, v1, v2, 7);
}

/*
** test0_vssseg3e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e32_v_i32m1(int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,size_t vl)
{
    vssseg3e32_v_i32m1(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*22,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e32_v_i32m1(int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,size_t vl)
{
    vssseg3e32_v_i32m1(base, bstride, v0, v1, v2, 22);
}

/*
** test0_vssseg3e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e32_v_i32m1_m(vbool32_t mask,int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,size_t vl)
{
    vssseg3e32_v_i32m1_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e32_v_i32m1_m(vbool32_t mask,int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,size_t vl)
{
    vssseg3e32_v_i32m1_m(mask, base, bstride, v0, v1, v2, 0);
}

/*
** test0_vssseg3e32_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e32_v_i32m2(int32_t *base,ptrdiff_t bstride,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,size_t vl)
{
    vssseg3e32_v_i32m2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_i32m2:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e32_v_i32m2(int32_t *base,ptrdiff_t bstride,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,size_t vl)
{
    vssseg3e32_v_i32m2(base, bstride, v0, v1, v2, 7);
}

/*
** test0_vssseg3e32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e32_v_i32m2_m(vbool16_t mask,int32_t *base,ptrdiff_t bstride,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,size_t vl)
{
    vssseg3e32_v_i32m2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_i32m2_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e32_v_i32m2_m(vbool16_t mask,int32_t *base,ptrdiff_t bstride,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,size_t vl)
{
    vssseg3e32_v_i32m2_m(mask, base, bstride, v0, v1, v2, 3);
}

/*
** test0_vssseg3e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e32_v_i32mf2(int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vssseg3e32_v_i32mf2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*24,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e32_v_i32mf2(int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vssseg3e32_v_i32mf2(base, bstride, v0, v1, v2, 24);
}

/*
** test0_vssseg3e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e32_v_i32mf2_m(vbool64_t mask,int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vssseg3e32_v_i32mf2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e32_v_i32mf2_m(vbool64_t mask,int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vssseg3e32_v_i32mf2_m(mask, base, bstride, v0, v1, v2, 23);
}

/*
** test0_vssseg3e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e32_v_u32m1(uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,size_t vl)
{
    vssseg3e32_v_u32m1(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*19,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e32_v_u32m1(uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,size_t vl)
{
    vssseg3e32_v_u32m1(base, bstride, v0, v1, v2, 19);
}

/*
** test0_vssseg3e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e32_v_u32m1_m(vbool32_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,size_t vl)
{
    vssseg3e32_v_u32m1_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e32_v_u32m1_m(vbool32_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,size_t vl)
{
    vssseg3e32_v_u32m1_m(mask, base, bstride, v0, v1, v2, 19);
}

/*
** test0_vssseg3e32_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e32_v_u32m2(uint32_t *base,ptrdiff_t bstride,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,size_t vl)
{
    vssseg3e32_v_u32m2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_u32m2:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e32_v_u32m2(uint32_t *base,ptrdiff_t bstride,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,size_t vl)
{
    vssseg3e32_v_u32m2(base, bstride, v0, v1, v2, 13);
}

/*
** test0_vssseg3e32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e32_v_u32m2_m(vbool16_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,size_t vl)
{
    vssseg3e32_v_u32m2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_u32m2_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e32_v_u32m2_m(vbool16_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,size_t vl)
{
    vssseg3e32_v_u32m2_m(mask, base, bstride, v0, v1, v2, 7);
}

/*
** test0_vssseg3e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e32_v_u32mf2(uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,size_t vl)
{
    vssseg3e32_v_u32mf2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e32_v_u32mf2(uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,size_t vl)
{
    vssseg3e32_v_u32mf2(base, bstride, v0, v1, v2, 16);
}

/*
** test0_vssseg3e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,size_t vl)
{
    vssseg3e32_v_u32mf2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,size_t vl)
{
    vssseg3e32_v_u32mf2_m(mask, base, bstride, v0, v1, v2, 25);
}

/*
** test0_vssseg3e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e64_v_f64m1(float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,size_t vl)
{
    vssseg3e64_v_f64m1(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*23,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e64_v_f64m1(float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,size_t vl)
{
    vssseg3e64_v_f64m1(base, bstride, v0, v1, v2, 23);
}

/*
** test0_vssseg3e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e64_v_f64m1_m(vbool64_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,size_t vl)
{
    vssseg3e64_v_f64m1_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e64_v_f64m1_m(vbool64_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,size_t vl)
{
    vssseg3e64_v_f64m1_m(mask, base, bstride, v0, v1, v2, 9);
}

/*
** test0_vssseg3e64_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e64_v_f64m2(float64_t *base,ptrdiff_t bstride,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,size_t vl)
{
    vssseg3e64_v_f64m2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e64_v_f64m2:
**  ...
**	vsetivli\s+zero,\s*4,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e64_v_f64m2(float64_t *base,ptrdiff_t bstride,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,size_t vl)
{
    vssseg3e64_v_f64m2(base, bstride, v0, v1, v2, 4);
}

/*
** test0_vssseg3e64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e64_v_f64m2_m(vbool32_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,size_t vl)
{
    vssseg3e64_v_f64m2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e64_v_f64m2_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e64_v_f64m2_m(vbool32_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,size_t vl)
{
    vssseg3e64_v_f64m2_m(mask, base, bstride, v0, v1, v2, 25);
}

/*
** test0_vssseg3e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e64_v_i64m1(int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,size_t vl)
{
    vssseg3e64_v_i64m1(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*10,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e64_v_i64m1(int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,size_t vl)
{
    vssseg3e64_v_i64m1(base, bstride, v0, v1, v2, 10);
}

/*
** test0_vssseg3e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e64_v_i64m1_m(vbool64_t mask,int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,size_t vl)
{
    vssseg3e64_v_i64m1_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e64_v_i64m1_m(vbool64_t mask,int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,size_t vl)
{
    vssseg3e64_v_i64m1_m(mask, base, bstride, v0, v1, v2, 23);
}

/*
** test0_vssseg3e64_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e64_v_i64m2(int64_t *base,ptrdiff_t bstride,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,size_t vl)
{
    vssseg3e64_v_i64m2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e64_v_i64m2:
**  ...
**	vsetivli\s+zero,\s*8,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e64_v_i64m2(int64_t *base,ptrdiff_t bstride,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,size_t vl)
{
    vssseg3e64_v_i64m2(base, bstride, v0, v1, v2, 8);
}

/*
** test0_vssseg3e64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e64_v_i64m2_m(vbool32_t mask,int64_t *base,ptrdiff_t bstride,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,size_t vl)
{
    vssseg3e64_v_i64m2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e64_v_i64m2_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e64_v_i64m2_m(vbool32_t mask,int64_t *base,ptrdiff_t bstride,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,size_t vl)
{
    vssseg3e64_v_i64m2_m(mask, base, bstride, v0, v1, v2, 4);
}

/*
** test0_vssseg3e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e64_v_u64m1(uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,size_t vl)
{
    vssseg3e64_v_u64m1(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*2,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e64_v_u64m1(uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,size_t vl)
{
    vssseg3e64_v_u64m1(base, bstride, v0, v1, v2, 2);
}

/*
** test0_vssseg3e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e64_v_u64m1_m(vbool64_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,size_t vl)
{
    vssseg3e64_v_u64m1_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e64_v_u64m1_m(vbool64_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,size_t vl)
{
    vssseg3e64_v_u64m1_m(mask, base, bstride, v0, v1, v2, 18);
}

/*
** test0_vssseg3e64_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e64_v_u64m2(uint64_t *base,ptrdiff_t bstride,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,size_t vl)
{
    vssseg3e64_v_u64m2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e64_v_u64m2:
**  ...
**	vsetivli\s+zero,\s*11,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e64_v_u64m2(uint64_t *base,ptrdiff_t bstride,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,size_t vl)
{
    vssseg3e64_v_u64m2(base, bstride, v0, v1, v2, 11);
}

/*
** test0_vssseg3e64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e64_v_u64m2_m(vbool32_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,size_t vl)
{
    vssseg3e64_v_u64m2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e64_v_u64m2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e64_v_u64m2_m(vbool32_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,size_t vl)
{
    vssseg3e64_v_u64m2_m(mask, base, bstride, v0, v1, v2, 14);
}

/*
** test0_vssseg3e8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e8_v_i8m1(int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,size_t vl)
{
    vssseg3e8_v_i8m1(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*6,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e8_v_i8m1(int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,size_t vl)
{
    vssseg3e8_v_i8m1(base, bstride, v0, v1, v2, 6);
}

/*
** test0_vssseg3e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e8_v_i8m1_m(vbool8_t mask,int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,size_t vl)
{
    vssseg3e8_v_i8m1_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e8_v_i8m1_m(vbool8_t mask,int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,size_t vl)
{
    vssseg3e8_v_i8m1_m(mask, base, bstride, v0, v1, v2, 18);
}

/*
** test0_vssseg3e8_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e8_v_i8m2(int8_t *base,ptrdiff_t bstride,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,size_t vl)
{
    vssseg3e8_v_i8m2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_i8m2:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e8_v_i8m2(int8_t *base,ptrdiff_t bstride,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,size_t vl)
{
    vssseg3e8_v_i8m2(base, bstride, v0, v1, v2, 20);
}

/*
** test0_vssseg3e8_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e8_v_i8m2_m(vbool4_t mask,int8_t *base,ptrdiff_t bstride,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,size_t vl)
{
    vssseg3e8_v_i8m2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_i8m2_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e8_v_i8m2_m(vbool4_t mask,int8_t *base,ptrdiff_t bstride,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,size_t vl)
{
    vssseg3e8_v_i8m2_m(mask, base, bstride, v0, v1, v2, 16);
}

/*
** test0_vssseg3e8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e8_v_i8mf2(int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,size_t vl)
{
    vssseg3e8_v_i8mf2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e8_v_i8mf2(int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,size_t vl)
{
    vssseg3e8_v_i8mf2(base, bstride, v0, v1, v2, 22);
}

/*
** test0_vssseg3e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e8_v_i8mf2_m(vbool16_t mask,int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,size_t vl)
{
    vssseg3e8_v_i8mf2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e8_v_i8mf2_m(vbool16_t mask,int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,size_t vl)
{
    vssseg3e8_v_i8mf2_m(mask, base, bstride, v0, v1, v2, 2);
}

/*
** test0_vssseg3e8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e8_v_i8mf4(int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,size_t vl)
{
    vssseg3e8_v_i8mf4(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*5,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e8_v_i8mf4(int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,size_t vl)
{
    vssseg3e8_v_i8mf4(base, bstride, v0, v1, v2, 5);
}

/*
** test0_vssseg3e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e8_v_i8mf4_m(vbool32_t mask,int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,size_t vl)
{
    vssseg3e8_v_i8mf4_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e8_v_i8mf4_m(vbool32_t mask,int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,size_t vl)
{
    vssseg3e8_v_i8mf4_m(mask, base, bstride, v0, v1, v2, 27);
}

/*
** test0_vssseg3e8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e8_v_i8mf8(int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,size_t vl)
{
    vssseg3e8_v_i8mf8(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*8,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e8_v_i8mf8(int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,size_t vl)
{
    vssseg3e8_v_i8mf8(base, bstride, v0, v1, v2, 8);
}

/*
** test0_vssseg3e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e8_v_i8mf8_m(vbool64_t mask,int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,size_t vl)
{
    vssseg3e8_v_i8mf8_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e8_v_i8mf8_m(vbool64_t mask,int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,size_t vl)
{
    vssseg3e8_v_i8mf8_m(mask, base, bstride, v0, v1, v2, 1);
}

/*
** test0_vssseg3e8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e8_v_u8m1(uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,size_t vl)
{
    vssseg3e8_v_u8m1(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e8_v_u8m1(uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,size_t vl)
{
    vssseg3e8_v_u8m1(base, bstride, v0, v1, v2, 2);
}

/*
** test0_vssseg3e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e8_v_u8m1_m(vbool8_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,size_t vl)
{
    vssseg3e8_v_u8m1_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e8_v_u8m1_m(vbool8_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,size_t vl)
{
    vssseg3e8_v_u8m1_m(mask, base, bstride, v0, v1, v2, 6);
}

/*
** test0_vssseg3e8_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e8_v_u8m2(uint8_t *base,ptrdiff_t bstride,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,size_t vl)
{
    vssseg3e8_v_u8m2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_u8m2:
**  ...
**	vsetivli\s+zero,\s*23,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e8_v_u8m2(uint8_t *base,ptrdiff_t bstride,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,size_t vl)
{
    vssseg3e8_v_u8m2(base, bstride, v0, v1, v2, 23);
}

/*
** test0_vssseg3e8_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e8_v_u8m2_m(vbool4_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,size_t vl)
{
    vssseg3e8_v_u8m2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_u8m2_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e8_v_u8m2_m(vbool4_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,size_t vl)
{
    vssseg3e8_v_u8m2_m(mask, base, bstride, v0, v1, v2, 0);
}

/*
** test0_vssseg3e8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e8_v_u8mf2(uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,size_t vl)
{
    vssseg3e8_v_u8mf2(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e8_v_u8mf2(uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,size_t vl)
{
    vssseg3e8_v_u8mf2(base, bstride, v0, v1, v2, 20);
}

/*
** test0_vssseg3e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,size_t vl)
{
    vssseg3e8_v_u8mf2_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,size_t vl)
{
    vssseg3e8_v_u8mf2_m(mask, base, bstride, v0, v1, v2, 16);
}

/*
** test0_vssseg3e8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e8_v_u8mf4(uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,size_t vl)
{
    vssseg3e8_v_u8mf4(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*9,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e8_v_u8mf4(uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,size_t vl)
{
    vssseg3e8_v_u8mf4(base, bstride, v0, v1, v2, 9);
}

/*
** test0_vssseg3e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,size_t vl)
{
    vssseg3e8_v_u8mf4_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,size_t vl)
{
    vssseg3e8_v_u8mf4_m(mask, base, bstride, v0, v1, v2, 14);
}

/*
** test0_vssseg3e8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg3e8_v_u8mf8(uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,size_t vl)
{
    vssseg3e8_v_u8mf8(base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg3e8_v_u8mf8(uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,size_t vl)
{
    vssseg3e8_v_u8mf8(base, bstride, v0, v1, v2, 14);
}

/*
** test0_vssseg3e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg3e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,size_t vl)
{
    vssseg3e8_v_u8mf8_m(mask, base, bstride, v0, v1, v2, vl);
}

/*
** test1_vssseg3e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg3e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,size_t vl)
{
    vssseg3e8_v_u8mf8_m(mask, base, bstride, v0, v1, v2, 9);
}

/*
** test0_vssseg4e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e16_v_f16m1(float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,size_t vl)
{
    vssseg4e16_v_f16m1(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e16_v_f16m1(float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,size_t vl)
{
    vssseg4e16_v_f16m1(base, bstride, v0, v1, v2, v3, 1);
}

/*
** test0_vssseg4e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e16_v_f16m1_m(vbool16_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,size_t vl)
{
    vssseg4e16_v_f16m1_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e16_v_f16m1_m(vbool16_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,size_t vl)
{
    vssseg4e16_v_f16m1_m(mask, base, bstride, v0, v1, v2, v3, 29);
}

/*
** test0_vssseg4e16_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e16_v_f16m2(float16_t *base,ptrdiff_t bstride,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,vfloat16m2_t v3,size_t vl)
{
    vssseg4e16_v_f16m2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_f16m2:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e16_v_f16m2(float16_t *base,ptrdiff_t bstride,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,vfloat16m2_t v3,size_t vl)
{
    vssseg4e16_v_f16m2(base, bstride, v0, v1, v2, v3, 15);
}

/*
** test0_vssseg4e16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e16_v_f16m2_m(vbool8_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,vfloat16m2_t v3,size_t vl)
{
    vssseg4e16_v_f16m2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_f16m2_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e16_v_f16m2_m(vbool8_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,vfloat16m2_t v3,size_t vl)
{
    vssseg4e16_v_f16m2_m(mask, base, bstride, v0, v1, v2, v3, 16);
}

/*
** test0_vssseg4e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e16_v_f16mf2(float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,size_t vl)
{
    vssseg4e16_v_f16mf2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e16_v_f16mf2(float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,size_t vl)
{
    vssseg4e16_v_f16mf2(base, bstride, v0, v1, v2, v3, 12);
}

/*
** test0_vssseg4e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e16_v_f16mf2_m(vbool32_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,size_t vl)
{
    vssseg4e16_v_f16mf2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e16_v_f16mf2_m(vbool32_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,size_t vl)
{
    vssseg4e16_v_f16mf2_m(mask, base, bstride, v0, v1, v2, v3, 23);
}

/*
** test0_vssseg4e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e16_v_f16mf4(float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vssseg4e16_v_f16mf4(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e16_v_f16mf4(float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vssseg4e16_v_f16mf4(base, bstride, v0, v1, v2, v3, 18);
}

/*
** test0_vssseg4e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e16_v_f16mf4_m(vbool64_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vssseg4e16_v_f16mf4_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e16_v_f16mf4_m(vbool64_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vssseg4e16_v_f16mf4_m(mask, base, bstride, v0, v1, v2, v3, 18);
}

/*
** test0_vssseg4e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e16_v_i16m1(int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,size_t vl)
{
    vssseg4e16_v_i16m1(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e16_v_i16m1(int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,size_t vl)
{
    vssseg4e16_v_i16m1(base, bstride, v0, v1, v2, v3, 16);
}

/*
** test0_vssseg4e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e16_v_i16m1_m(vbool16_t mask,int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,size_t vl)
{
    vssseg4e16_v_i16m1_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e16_v_i16m1_m(vbool16_t mask,int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,size_t vl)
{
    vssseg4e16_v_i16m1_m(mask, base, bstride, v0, v1, v2, v3, 30);
}

/*
** test0_vssseg4e16_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e16_v_i16m2(int16_t *base,ptrdiff_t bstride,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,vint16m2_t v3,size_t vl)
{
    vssseg4e16_v_i16m2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_i16m2:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e16_v_i16m2(int16_t *base,ptrdiff_t bstride,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,vint16m2_t v3,size_t vl)
{
    vssseg4e16_v_i16m2(base, bstride, v0, v1, v2, v3, 4);
}

/*
** test0_vssseg4e16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e16_v_i16m2_m(vbool8_t mask,int16_t *base,ptrdiff_t bstride,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,vint16m2_t v3,size_t vl)
{
    vssseg4e16_v_i16m2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_i16m2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e16_v_i16m2_m(vbool8_t mask,int16_t *base,ptrdiff_t bstride,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,vint16m2_t v3,size_t vl)
{
    vssseg4e16_v_i16m2_m(mask, base, bstride, v0, v1, v2, v3, 5);
}

/*
** test0_vssseg4e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e16_v_i16mf2(int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,size_t vl)
{
    vssseg4e16_v_i16mf2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e16_v_i16mf2(int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,size_t vl)
{
    vssseg4e16_v_i16mf2(base, bstride, v0, v1, v2, v3, 27);
}

/*
** test0_vssseg4e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e16_v_i16mf2_m(vbool32_t mask,int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,size_t vl)
{
    vssseg4e16_v_i16mf2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e16_v_i16mf2_m(vbool32_t mask,int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,size_t vl)
{
    vssseg4e16_v_i16mf2_m(mask, base, bstride, v0, v1, v2, v3, 27);
}

/*
** test0_vssseg4e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e16_v_i16mf4(int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,size_t vl)
{
    vssseg4e16_v_i16mf4(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e16_v_i16mf4(int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,size_t vl)
{
    vssseg4e16_v_i16mf4(base, bstride, v0, v1, v2, v3, 22);
}

/*
** test0_vssseg4e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e16_v_i16mf4_m(vbool64_t mask,int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,size_t vl)
{
    vssseg4e16_v_i16mf4_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e16_v_i16mf4_m(vbool64_t mask,int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,size_t vl)
{
    vssseg4e16_v_i16mf4_m(mask, base, bstride, v0, v1, v2, v3, 6);
}

/*
** test0_vssseg4e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e16_v_u16m1(uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,size_t vl)
{
    vssseg4e16_v_u16m1(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e16_v_u16m1(uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,size_t vl)
{
    vssseg4e16_v_u16m1(base, bstride, v0, v1, v2, v3, 9);
}

/*
** test0_vssseg4e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e16_v_u16m1_m(vbool16_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,size_t vl)
{
    vssseg4e16_v_u16m1_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e16_v_u16m1_m(vbool16_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,size_t vl)
{
    vssseg4e16_v_u16m1_m(mask, base, bstride, v0, v1, v2, v3, 28);
}

/*
** test0_vssseg4e16_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e16_v_u16m2(uint16_t *base,ptrdiff_t bstride,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,vuint16m2_t v3,size_t vl)
{
    vssseg4e16_v_u16m2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_u16m2:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e16_v_u16m2(uint16_t *base,ptrdiff_t bstride,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,vuint16m2_t v3,size_t vl)
{
    vssseg4e16_v_u16m2(base, bstride, v0, v1, v2, v3, 23);
}

/*
** test0_vssseg4e16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e16_v_u16m2_m(vbool8_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,vuint16m2_t v3,size_t vl)
{
    vssseg4e16_v_u16m2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_u16m2_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e16_v_u16m2_m(vbool8_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,vuint16m2_t v3,size_t vl)
{
    vssseg4e16_v_u16m2_m(mask, base, bstride, v0, v1, v2, v3, 22);
}

/*
** test0_vssseg4e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e16_v_u16mf2(uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,size_t vl)
{
    vssseg4e16_v_u16mf2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e16_v_u16mf2(uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,size_t vl)
{
    vssseg4e16_v_u16mf2(base, bstride, v0, v1, v2, v3, 25);
}

/*
** test0_vssseg4e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,size_t vl)
{
    vssseg4e16_v_u16mf2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,size_t vl)
{
    vssseg4e16_v_u16mf2_m(mask, base, bstride, v0, v1, v2, v3, 14);
}

/*
** test0_vssseg4e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e16_v_u16mf4(uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,size_t vl)
{
    vssseg4e16_v_u16mf4(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e16_v_u16mf4(uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,size_t vl)
{
    vssseg4e16_v_u16mf4(base, bstride, v0, v1, v2, v3, 4);
}

/*
** test0_vssseg4e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,size_t vl)
{
    vssseg4e16_v_u16mf4_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,size_t vl)
{
    vssseg4e16_v_u16mf4_m(mask, base, bstride, v0, v1, v2, v3, 27);
}

/*
** test0_vssseg4e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e32_v_f32m1(float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,size_t vl)
{
    vssseg4e32_v_f32m1(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e32_v_f32m1(float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,size_t vl)
{
    vssseg4e32_v_f32m1(base, bstride, v0, v1, v2, v3, 30);
}

/*
** test0_vssseg4e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e32_v_f32m1_m(vbool32_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,size_t vl)
{
    vssseg4e32_v_f32m1_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e32_v_f32m1_m(vbool32_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,size_t vl)
{
    vssseg4e32_v_f32m1_m(mask, base, bstride, v0, v1, v2, v3, 4);
}

/*
** test0_vssseg4e32_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e32_v_f32m2(float32_t *base,ptrdiff_t bstride,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,vfloat32m2_t v3,size_t vl)
{
    vssseg4e32_v_f32m2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_f32m2:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e32_v_f32m2(float32_t *base,ptrdiff_t bstride,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,vfloat32m2_t v3,size_t vl)
{
    vssseg4e32_v_f32m2(base, bstride, v0, v1, v2, v3, 9);
}

/*
** test0_vssseg4e32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e32_v_f32m2_m(vbool16_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,vfloat32m2_t v3,size_t vl)
{
    vssseg4e32_v_f32m2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_f32m2_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e32_v_f32m2_m(vbool16_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,vfloat32m2_t v3,size_t vl)
{
    vssseg4e32_v_f32m2_m(mask, base, bstride, v0, v1, v2, v3, 16);
}

/*
** test0_vssseg4e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e32_v_f32mf2(float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,size_t vl)
{
    vssseg4e32_v_f32mf2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e32_v_f32mf2(float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,size_t vl)
{
    vssseg4e32_v_f32mf2(base, bstride, v0, v1, v2, v3, 9);
}

/*
** test0_vssseg4e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e32_v_f32mf2_m(vbool64_t mask,float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,size_t vl)
{
    vssseg4e32_v_f32mf2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e32_v_f32mf2_m(vbool64_t mask,float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,size_t vl)
{
    vssseg4e32_v_f32mf2_m(mask, base, bstride, v0, v1, v2, v3, 19);
}

/*
** test0_vssseg4e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e32_v_i32m1(int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,size_t vl)
{
    vssseg4e32_v_i32m1(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e32_v_i32m1(int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,size_t vl)
{
    vssseg4e32_v_i32m1(base, bstride, v0, v1, v2, v3, 9);
}

/*
** test0_vssseg4e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e32_v_i32m1_m(vbool32_t mask,int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,size_t vl)
{
    vssseg4e32_v_i32m1_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e32_v_i32m1_m(vbool32_t mask,int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,size_t vl)
{
    vssseg4e32_v_i32m1_m(mask, base, bstride, v0, v1, v2, v3, 19);
}

/*
** test0_vssseg4e32_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e32_v_i32m2(int32_t *base,ptrdiff_t bstride,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,vint32m2_t v3,size_t vl)
{
    vssseg4e32_v_i32m2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_i32m2:
**  ...
**	vsetivli\s+zero,\s*10,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e32_v_i32m2(int32_t *base,ptrdiff_t bstride,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,vint32m2_t v3,size_t vl)
{
    vssseg4e32_v_i32m2(base, bstride, v0, v1, v2, v3, 10);
}

/*
** test0_vssseg4e32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e32_v_i32m2_m(vbool16_t mask,int32_t *base,ptrdiff_t bstride,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,vint32m2_t v3,size_t vl)
{
    vssseg4e32_v_i32m2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_i32m2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e32_v_i32m2_m(vbool16_t mask,int32_t *base,ptrdiff_t bstride,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,vint32m2_t v3,size_t vl)
{
    vssseg4e32_v_i32m2_m(mask, base, bstride, v0, v1, v2, v3, 29);
}

/*
** test0_vssseg4e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e32_v_i32mf2(int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,size_t vl)
{
    vssseg4e32_v_i32mf2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*24,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e32_v_i32mf2(int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,size_t vl)
{
    vssseg4e32_v_i32mf2(base, bstride, v0, v1, v2, v3, 24);
}

/*
** test0_vssseg4e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e32_v_i32mf2_m(vbool64_t mask,int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,size_t vl)
{
    vssseg4e32_v_i32mf2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e32_v_i32mf2_m(vbool64_t mask,int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,size_t vl)
{
    vssseg4e32_v_i32mf2_m(mask, base, bstride, v0, v1, v2, v3, 3);
}

/*
** test0_vssseg4e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e32_v_u32m1(uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,size_t vl)
{
    vssseg4e32_v_u32m1(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e32_v_u32m1(uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,size_t vl)
{
    vssseg4e32_v_u32m1(base, bstride, v0, v1, v2, v3, 27);
}

/*
** test0_vssseg4e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e32_v_u32m1_m(vbool32_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,size_t vl)
{
    vssseg4e32_v_u32m1_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e32_v_u32m1_m(vbool32_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,size_t vl)
{
    vssseg4e32_v_u32m1_m(mask, base, bstride, v0, v1, v2, v3, 22);
}

/*
** test0_vssseg4e32_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e32_v_u32m2(uint32_t *base,ptrdiff_t bstride,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,vuint32m2_t v3,size_t vl)
{
    vssseg4e32_v_u32m2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_u32m2:
**  ...
**	vsetivli\s+zero,\s*24,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e32_v_u32m2(uint32_t *base,ptrdiff_t bstride,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,vuint32m2_t v3,size_t vl)
{
    vssseg4e32_v_u32m2(base, bstride, v0, v1, v2, v3, 24);
}

/*
** test0_vssseg4e32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e32_v_u32m2_m(vbool16_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,vuint32m2_t v3,size_t vl)
{
    vssseg4e32_v_u32m2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_u32m2_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e32_v_u32m2_m(vbool16_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,vuint32m2_t v3,size_t vl)
{
    vssseg4e32_v_u32m2_m(mask, base, bstride, v0, v1, v2, v3, 6);
}

/*
** test0_vssseg4e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e32_v_u32mf2(uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vssseg4e32_v_u32mf2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*3,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e32_v_u32mf2(uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vssseg4e32_v_u32mf2(base, bstride, v0, v1, v2, v3, 3);
}

/*
** test0_vssseg4e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vssseg4e32_v_u32mf2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vssseg4e32_v_u32mf2_m(mask, base, bstride, v0, v1, v2, v3, 2);
}

/*
** test0_vssseg4e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e64_v_f64m1(float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,size_t vl)
{
    vssseg4e64_v_f64m1(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*3,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e64_v_f64m1(float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,size_t vl)
{
    vssseg4e64_v_f64m1(base, bstride, v0, v1, v2, v3, 3);
}

/*
** test0_vssseg4e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e64_v_f64m1_m(vbool64_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,size_t vl)
{
    vssseg4e64_v_f64m1_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e64_v_f64m1_m(vbool64_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,size_t vl)
{
    vssseg4e64_v_f64m1_m(mask, base, bstride, v0, v1, v2, v3, 19);
}

/*
** test0_vssseg4e64_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e64_v_f64m2(float64_t *base,ptrdiff_t bstride,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,vfloat64m2_t v3,size_t vl)
{
    vssseg4e64_v_f64m2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e64_v_f64m2:
**  ...
**	vsetivli\s+zero,\s*6,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e64_v_f64m2(float64_t *base,ptrdiff_t bstride,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,vfloat64m2_t v3,size_t vl)
{
    vssseg4e64_v_f64m2(base, bstride, v0, v1, v2, v3, 6);
}

/*
** test0_vssseg4e64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e64_v_f64m2_m(vbool32_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,vfloat64m2_t v3,size_t vl)
{
    vssseg4e64_v_f64m2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e64_v_f64m2_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e64_v_f64m2_m(vbool32_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,vfloat64m2_t v3,size_t vl)
{
    vssseg4e64_v_f64m2_m(mask, base, bstride, v0, v1, v2, v3, 25);
}

/*
** test0_vssseg4e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e64_v_i64m1(int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,size_t vl)
{
    vssseg4e64_v_i64m1(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e64_v_i64m1(int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,size_t vl)
{
    vssseg4e64_v_i64m1(base, bstride, v0, v1, v2, v3, 31);
}

/*
** test0_vssseg4e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e64_v_i64m1_m(vbool64_t mask,int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,size_t vl)
{
    vssseg4e64_v_i64m1_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e64_v_i64m1_m(vbool64_t mask,int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,size_t vl)
{
    vssseg4e64_v_i64m1_m(mask, base, bstride, v0, v1, v2, v3, 22);
}

/*
** test0_vssseg4e64_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e64_v_i64m2(int64_t *base,ptrdiff_t bstride,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,vint64m2_t v3,size_t vl)
{
    vssseg4e64_v_i64m2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e64_v_i64m2:
**  ...
**	vsetivli\s+zero,\s*30,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e64_v_i64m2(int64_t *base,ptrdiff_t bstride,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,vint64m2_t v3,size_t vl)
{
    vssseg4e64_v_i64m2(base, bstride, v0, v1, v2, v3, 30);
}

/*
** test0_vssseg4e64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e64_v_i64m2_m(vbool32_t mask,int64_t *base,ptrdiff_t bstride,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,vint64m2_t v3,size_t vl)
{
    vssseg4e64_v_i64m2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e64_v_i64m2_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e64_v_i64m2_m(vbool32_t mask,int64_t *base,ptrdiff_t bstride,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,vint64m2_t v3,size_t vl)
{
    vssseg4e64_v_i64m2_m(mask, base, bstride, v0, v1, v2, v3, 26);
}

/*
** test0_vssseg4e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e64_v_u64m1(uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,size_t vl)
{
    vssseg4e64_v_u64m1(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*28,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e64_v_u64m1(uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,size_t vl)
{
    vssseg4e64_v_u64m1(base, bstride, v0, v1, v2, v3, 28);
}

/*
** test0_vssseg4e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e64_v_u64m1_m(vbool64_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,size_t vl)
{
    vssseg4e64_v_u64m1_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e64_v_u64m1_m(vbool64_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,size_t vl)
{
    vssseg4e64_v_u64m1_m(mask, base, bstride, v0, v1, v2, v3, 19);
}

/*
** test0_vssseg4e64_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e64_v_u64m2(uint64_t *base,ptrdiff_t bstride,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,vuint64m2_t v3,size_t vl)
{
    vssseg4e64_v_u64m2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e64_v_u64m2:
**  ...
**	vsetivli\s+zero,\s*14,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e64_v_u64m2(uint64_t *base,ptrdiff_t bstride,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,vuint64m2_t v3,size_t vl)
{
    vssseg4e64_v_u64m2(base, bstride, v0, v1, v2, v3, 14);
}

/*
** test0_vssseg4e64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e64_v_u64m2_m(vbool32_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,vuint64m2_t v3,size_t vl)
{
    vssseg4e64_v_u64m2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e64_v_u64m2_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e64_v_u64m2_m(vbool32_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,vuint64m2_t v3,size_t vl)
{
    vssseg4e64_v_u64m2_m(mask, base, bstride, v0, v1, v2, v3, 21);
}

/*
** test0_vssseg4e8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e8_v_i8m1(int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,size_t vl)
{
    vssseg4e8_v_i8m1(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e8_v_i8m1(int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,size_t vl)
{
    vssseg4e8_v_i8m1(base, bstride, v0, v1, v2, v3, 11);
}

/*
** test0_vssseg4e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e8_v_i8m1_m(vbool8_t mask,int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,size_t vl)
{
    vssseg4e8_v_i8m1_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e8_v_i8m1_m(vbool8_t mask,int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,size_t vl)
{
    vssseg4e8_v_i8m1_m(mask, base, bstride, v0, v1, v2, v3, 24);
}

/*
** test0_vssseg4e8_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e8_v_i8m2(int8_t *base,ptrdiff_t bstride,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,vint8m2_t v3,size_t vl)
{
    vssseg4e8_v_i8m2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_i8m2:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e8_v_i8m2(int8_t *base,ptrdiff_t bstride,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,vint8m2_t v3,size_t vl)
{
    vssseg4e8_v_i8m2(base, bstride, v0, v1, v2, v3, 19);
}

/*
** test0_vssseg4e8_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e8_v_i8m2_m(vbool4_t mask,int8_t *base,ptrdiff_t bstride,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,vint8m2_t v3,size_t vl)
{
    vssseg4e8_v_i8m2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_i8m2_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e8_v_i8m2_m(vbool4_t mask,int8_t *base,ptrdiff_t bstride,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,vint8m2_t v3,size_t vl)
{
    vssseg4e8_v_i8m2_m(mask, base, bstride, v0, v1, v2, v3, 6);
}

/*
** test0_vssseg4e8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e8_v_i8mf2(int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,size_t vl)
{
    vssseg4e8_v_i8mf2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e8_v_i8mf2(int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,size_t vl)
{
    vssseg4e8_v_i8mf2(base, bstride, v0, v1, v2, v3, 30);
}

/*
** test0_vssseg4e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e8_v_i8mf2_m(vbool16_t mask,int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,size_t vl)
{
    vssseg4e8_v_i8mf2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e8_v_i8mf2_m(vbool16_t mask,int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,size_t vl)
{
    vssseg4e8_v_i8mf2_m(mask, base, bstride, v0, v1, v2, v3, 14);
}

/*
** test0_vssseg4e8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e8_v_i8mf4(int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,size_t vl)
{
    vssseg4e8_v_i8mf4(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e8_v_i8mf4(int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,size_t vl)
{
    vssseg4e8_v_i8mf4(base, bstride, v0, v1, v2, v3, 7);
}

/*
** test0_vssseg4e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e8_v_i8mf4_m(vbool32_t mask,int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,size_t vl)
{
    vssseg4e8_v_i8mf4_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e8_v_i8mf4_m(vbool32_t mask,int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,size_t vl)
{
    vssseg4e8_v_i8mf4_m(mask, base, bstride, v0, v1, v2, v3, 24);
}

/*
** test0_vssseg4e8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e8_v_i8mf8(int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,size_t vl)
{
    vssseg4e8_v_i8mf8(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*17,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e8_v_i8mf8(int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,size_t vl)
{
    vssseg4e8_v_i8mf8(base, bstride, v0, v1, v2, v3, 17);
}

/*
** test0_vssseg4e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e8_v_i8mf8_m(vbool64_t mask,int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,size_t vl)
{
    vssseg4e8_v_i8mf8_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e8_v_i8mf8_m(vbool64_t mask,int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,size_t vl)
{
    vssseg4e8_v_i8mf8_m(mask, base, bstride, v0, v1, v2, v3, 5);
}

/*
** test0_vssseg4e8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e8_v_u8m1(uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,size_t vl)
{
    vssseg4e8_v_u8m1(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e8_v_u8m1(uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,size_t vl)
{
    vssseg4e8_v_u8m1(base, bstride, v0, v1, v2, v3, 15);
}

/*
** test0_vssseg4e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e8_v_u8m1_m(vbool8_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,size_t vl)
{
    vssseg4e8_v_u8m1_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e8_v_u8m1_m(vbool8_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,size_t vl)
{
    vssseg4e8_v_u8m1_m(mask, base, bstride, v0, v1, v2, v3, 18);
}

/*
** test0_vssseg4e8_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e8_v_u8m2(uint8_t *base,ptrdiff_t bstride,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,vuint8m2_t v3,size_t vl)
{
    vssseg4e8_v_u8m2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_u8m2:
**  ...
**	vsetivli\s+zero,\s*17,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e8_v_u8m2(uint8_t *base,ptrdiff_t bstride,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,vuint8m2_t v3,size_t vl)
{
    vssseg4e8_v_u8m2(base, bstride, v0, v1, v2, v3, 17);
}

/*
** test0_vssseg4e8_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e8_v_u8m2_m(vbool4_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,vuint8m2_t v3,size_t vl)
{
    vssseg4e8_v_u8m2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_u8m2_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e8_v_u8m2_m(vbool4_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,vuint8m2_t v3,size_t vl)
{
    vssseg4e8_v_u8m2_m(mask, base, bstride, v0, v1, v2, v3, 22);
}

/*
** test0_vssseg4e8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e8_v_u8mf2(uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,size_t vl)
{
    vssseg4e8_v_u8mf2(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e8_v_u8mf2(uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,size_t vl)
{
    vssseg4e8_v_u8mf2(base, bstride, v0, v1, v2, v3, 25);
}

/*
** test0_vssseg4e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,size_t vl)
{
    vssseg4e8_v_u8mf2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,size_t vl)
{
    vssseg4e8_v_u8mf2_m(mask, base, bstride, v0, v1, v2, v3, 0);
}

/*
** test0_vssseg4e8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e8_v_u8mf4(uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,size_t vl)
{
    vssseg4e8_v_u8mf4(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e8_v_u8mf4(uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,size_t vl)
{
    vssseg4e8_v_u8mf4(base, bstride, v0, v1, v2, v3, 16);
}

/*
** test0_vssseg4e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,size_t vl)
{
    vssseg4e8_v_u8mf4_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,size_t vl)
{
    vssseg4e8_v_u8mf4_m(mask, base, bstride, v0, v1, v2, v3, 26);
}

/*
** test0_vssseg4e8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg4e8_v_u8mf8(uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,size_t vl)
{
    vssseg4e8_v_u8mf8(base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg4e8_v_u8mf8(uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,size_t vl)
{
    vssseg4e8_v_u8mf8(base, bstride, v0, v1, v2, v3, 16);
}

/*
** test0_vssseg4e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg4e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,size_t vl)
{
    vssseg4e8_v_u8mf8_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/*
** test1_vssseg4e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg4e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,size_t vl)
{
    vssseg4e8_v_u8mf8_m(mask, base, bstride, v0, v1, v2, v3, 16);
}

/*
** test0_vssseg5e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e16_v_f16m1(float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,size_t vl)
{
    vssseg5e16_v_f16m1(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e16_v_f16m1(float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,size_t vl)
{
    vssseg5e16_v_f16m1(base, bstride, v0, v1, v2, v3, v4, 25);
}

/*
** test0_vssseg5e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e16_v_f16m1_m(vbool16_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,size_t vl)
{
    vssseg5e16_v_f16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e16_v_f16m1_m(vbool16_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,size_t vl)
{
    vssseg5e16_v_f16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, 31);
}

/*
** test0_vssseg5e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e16_v_f16mf2(float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vssseg5e16_v_f16mf2(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e16_v_f16mf2(float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vssseg5e16_v_f16mf2(base, bstride, v0, v1, v2, v3, v4, 24);
}

/*
** test0_vssseg5e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e16_v_f16mf2_m(vbool32_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vssseg5e16_v_f16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e16_v_f16mf2_m(vbool32_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vssseg5e16_v_f16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, 9);
}

/*
** test0_vssseg5e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e16_v_f16mf4(float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,size_t vl)
{
    vssseg5e16_v_f16mf4(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e16_v_f16mf4(float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,size_t vl)
{
    vssseg5e16_v_f16mf4(base, bstride, v0, v1, v2, v3, v4, 7);
}

/*
** test0_vssseg5e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e16_v_f16mf4_m(vbool64_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,size_t vl)
{
    vssseg5e16_v_f16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e16_v_f16mf4_m(vbool64_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,size_t vl)
{
    vssseg5e16_v_f16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, 11);
}

/*
** test0_vssseg5e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e16_v_i16m1(int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,size_t vl)
{
    vssseg5e16_v_i16m1(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e16_v_i16m1(int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,size_t vl)
{
    vssseg5e16_v_i16m1(base, bstride, v0, v1, v2, v3, v4, 25);
}

/*
** test0_vssseg5e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e16_v_i16m1_m(vbool16_t mask,int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,size_t vl)
{
    vssseg5e16_v_i16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e16_v_i16m1_m(vbool16_t mask,int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,size_t vl)
{
    vssseg5e16_v_i16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, 14);
}

/*
** test0_vssseg5e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e16_v_i16mf2(int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,size_t vl)
{
    vssseg5e16_v_i16mf2(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e16_v_i16mf2(int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,size_t vl)
{
    vssseg5e16_v_i16mf2(base, bstride, v0, v1, v2, v3, v4, 12);
}

/*
** test0_vssseg5e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e16_v_i16mf2_m(vbool32_t mask,int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,size_t vl)
{
    vssseg5e16_v_i16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e16_v_i16mf2_m(vbool32_t mask,int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,size_t vl)
{
    vssseg5e16_v_i16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, 2);
}

/*
** test0_vssseg5e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e16_v_i16mf4(int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,size_t vl)
{
    vssseg5e16_v_i16mf4(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e16_v_i16mf4(int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,size_t vl)
{
    vssseg5e16_v_i16mf4(base, bstride, v0, v1, v2, v3, v4, 24);
}

/*
** test0_vssseg5e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e16_v_i16mf4_m(vbool64_t mask,int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,size_t vl)
{
    vssseg5e16_v_i16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e16_v_i16mf4_m(vbool64_t mask,int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,size_t vl)
{
    vssseg5e16_v_i16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, 21);
}

/*
** test0_vssseg5e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e16_v_u16m1(uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,size_t vl)
{
    vssseg5e16_v_u16m1(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e16_v_u16m1(uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,size_t vl)
{
    vssseg5e16_v_u16m1(base, bstride, v0, v1, v2, v3, v4, 15);
}

/*
** test0_vssseg5e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e16_v_u16m1_m(vbool16_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,size_t vl)
{
    vssseg5e16_v_u16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e16_v_u16m1_m(vbool16_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,size_t vl)
{
    vssseg5e16_v_u16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, 25);
}

/*
** test0_vssseg5e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e16_v_u16mf2(uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,size_t vl)
{
    vssseg5e16_v_u16mf2(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e16_v_u16mf2(uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,size_t vl)
{
    vssseg5e16_v_u16mf2(base, bstride, v0, v1, v2, v3, v4, 22);
}

/*
** test0_vssseg5e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,size_t vl)
{
    vssseg5e16_v_u16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,size_t vl)
{
    vssseg5e16_v_u16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, 21);
}

/*
** test0_vssseg5e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e16_v_u16mf4(uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vssseg5e16_v_u16mf4(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e16_v_u16mf4(uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vssseg5e16_v_u16mf4(base, bstride, v0, v1, v2, v3, v4, 7);
}

/*
** test0_vssseg5e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vssseg5e16_v_u16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vssseg5e16_v_u16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, 17);
}

/*
** test0_vssseg5e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e32_v_f32m1(float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,size_t vl)
{
    vssseg5e32_v_f32m1(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*22,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e32_v_f32m1(float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,size_t vl)
{
    vssseg5e32_v_f32m1(base, bstride, v0, v1, v2, v3, v4, 22);
}

/*
** test0_vssseg5e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e32_v_f32m1_m(vbool32_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,size_t vl)
{
    vssseg5e32_v_f32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e32_v_f32m1_m(vbool32_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,size_t vl)
{
    vssseg5e32_v_f32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, 20);
}

/*
** test0_vssseg5e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e32_v_f32mf2(float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,size_t vl)
{
    vssseg5e32_v_f32mf2(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*15,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e32_v_f32mf2(float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,size_t vl)
{
    vssseg5e32_v_f32mf2(base, bstride, v0, v1, v2, v3, v4, 15);
}

/*
** test0_vssseg5e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e32_v_f32mf2_m(vbool64_t mask,float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,size_t vl)
{
    vssseg5e32_v_f32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e32_v_f32mf2_m(vbool64_t mask,float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,size_t vl)
{
    vssseg5e32_v_f32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, 23);
}

/*
** test0_vssseg5e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e32_v_i32m1(int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,size_t vl)
{
    vssseg5e32_v_i32m1(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*24,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e32_v_i32m1(int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,size_t vl)
{
    vssseg5e32_v_i32m1(base, bstride, v0, v1, v2, v3, v4, 24);
}

/*
** test0_vssseg5e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e32_v_i32m1_m(vbool32_t mask,int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,size_t vl)
{
    vssseg5e32_v_i32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e32_v_i32m1_m(vbool32_t mask,int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,size_t vl)
{
    vssseg5e32_v_i32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, 24);
}

/*
** test0_vssseg5e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e32_v_i32mf2(int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,size_t vl)
{
    vssseg5e32_v_i32mf2(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e32_v_i32mf2(int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,size_t vl)
{
    vssseg5e32_v_i32mf2(base, bstride, v0, v1, v2, v3, v4, 5);
}

/*
** test0_vssseg5e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e32_v_i32mf2_m(vbool64_t mask,int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,size_t vl)
{
    vssseg5e32_v_i32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e32_v_i32mf2_m(vbool64_t mask,int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,size_t vl)
{
    vssseg5e32_v_i32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, 13);
}

/*
** test0_vssseg5e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e32_v_u32m1(uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,size_t vl)
{
    vssseg5e32_v_u32m1(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e32_v_u32m1(uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,size_t vl)
{
    vssseg5e32_v_u32m1(base, bstride, v0, v1, v2, v3, v4, 1);
}

/*
** test0_vssseg5e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e32_v_u32m1_m(vbool32_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,size_t vl)
{
    vssseg5e32_v_u32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e32_v_u32m1_m(vbool32_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,size_t vl)
{
    vssseg5e32_v_u32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, 21);
}

/*
** test0_vssseg5e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e32_v_u32mf2(uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,size_t vl)
{
    vssseg5e32_v_u32mf2(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e32_v_u32mf2(uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,size_t vl)
{
    vssseg5e32_v_u32mf2(base, bstride, v0, v1, v2, v3, v4, 9);
}

/*
** test0_vssseg5e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,size_t vl)
{
    vssseg5e32_v_u32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,size_t vl)
{
    vssseg5e32_v_u32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, 16);
}

/*
** test0_vssseg5e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e64_v_f64m1(float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,size_t vl)
{
    vssseg5e64_v_f64m1(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e64_v_f64m1(float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,size_t vl)
{
    vssseg5e64_v_f64m1(base, bstride, v0, v1, v2, v3, v4, 0);
}

/*
** test0_vssseg5e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e64_v_f64m1_m(vbool64_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,size_t vl)
{
    vssseg5e64_v_f64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e64_v_f64m1_m(vbool64_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,size_t vl)
{
    vssseg5e64_v_f64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, 26);
}

/*
** test0_vssseg5e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e64_v_i64m1(int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,size_t vl)
{
    vssseg5e64_v_i64m1(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*22,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e64_v_i64m1(int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,size_t vl)
{
    vssseg5e64_v_i64m1(base, bstride, v0, v1, v2, v3, v4, 22);
}

/*
** test0_vssseg5e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e64_v_i64m1_m(vbool64_t mask,int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,size_t vl)
{
    vssseg5e64_v_i64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e64_v_i64m1_m(vbool64_t mask,int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,size_t vl)
{
    vssseg5e64_v_i64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, 5);
}

/*
** test0_vssseg5e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e64_v_u64m1(uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,size_t vl)
{
    vssseg5e64_v_u64m1(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*26,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e64_v_u64m1(uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,size_t vl)
{
    vssseg5e64_v_u64m1(base, bstride, v0, v1, v2, v3, v4, 26);
}

/*
** test0_vssseg5e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e64_v_u64m1_m(vbool64_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,size_t vl)
{
    vssseg5e64_v_u64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e64_v_u64m1_m(vbool64_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,size_t vl)
{
    vssseg5e64_v_u64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, 27);
}

/*
** test0_vssseg5e8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e8_v_i8m1(int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,size_t vl)
{
    vssseg5e8_v_i8m1(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e8_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e8_v_i8m1(int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,size_t vl)
{
    vssseg5e8_v_i8m1(base, bstride, v0, v1, v2, v3, v4, 31);
}

/*
** test0_vssseg5e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e8_v_i8m1_m(vbool8_t mask,int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,size_t vl)
{
    vssseg5e8_v_i8m1_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e8_v_i8m1_m(vbool8_t mask,int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,size_t vl)
{
    vssseg5e8_v_i8m1_m(mask, base, bstride, v0, v1, v2, v3, v4, 6);
}

/*
** test0_vssseg5e8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e8_v_i8mf2(int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,size_t vl)
{
    vssseg5e8_v_i8mf2(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e8_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*9,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e8_v_i8mf2(int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,size_t vl)
{
    vssseg5e8_v_i8mf2(base, bstride, v0, v1, v2, v3, v4, 9);
}

/*
** test0_vssseg5e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e8_v_i8mf2_m(vbool16_t mask,int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,size_t vl)
{
    vssseg5e8_v_i8mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e8_v_i8mf2_m(vbool16_t mask,int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,size_t vl)
{
    vssseg5e8_v_i8mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, 1);
}

/*
** test0_vssseg5e8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e8_v_i8mf4(int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,size_t vl)
{
    vssseg5e8_v_i8mf4(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e8_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*17,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e8_v_i8mf4(int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,size_t vl)
{
    vssseg5e8_v_i8mf4(base, bstride, v0, v1, v2, v3, v4, 17);
}

/*
** test0_vssseg5e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e8_v_i8mf4_m(vbool32_t mask,int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,size_t vl)
{
    vssseg5e8_v_i8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e8_v_i8mf4_m(vbool32_t mask,int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,size_t vl)
{
    vssseg5e8_v_i8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, 26);
}

/*
** test0_vssseg5e8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e8_v_i8mf8(int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,size_t vl)
{
    vssseg5e8_v_i8mf8(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e8_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*5,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e8_v_i8mf8(int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,size_t vl)
{
    vssseg5e8_v_i8mf8(base, bstride, v0, v1, v2, v3, v4, 5);
}

/*
** test0_vssseg5e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e8_v_i8mf8_m(vbool64_t mask,int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,size_t vl)
{
    vssseg5e8_v_i8mf8_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e8_v_i8mf8_m(vbool64_t mask,int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,size_t vl)
{
    vssseg5e8_v_i8mf8_m(mask, base, bstride, v0, v1, v2, v3, v4, 18);
}

/*
** test0_vssseg5e8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e8_v_u8m1(uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,size_t vl)
{
    vssseg5e8_v_u8m1(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e8_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e8_v_u8m1(uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,size_t vl)
{
    vssseg5e8_v_u8m1(base, bstride, v0, v1, v2, v3, v4, 24);
}

/*
** test0_vssseg5e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e8_v_u8m1_m(vbool8_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,size_t vl)
{
    vssseg5e8_v_u8m1_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e8_v_u8m1_m(vbool8_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,size_t vl)
{
    vssseg5e8_v_u8m1_m(mask, base, bstride, v0, v1, v2, v3, v4, 22);
}

/*
** test0_vssseg5e8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e8_v_u8mf2(uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,size_t vl)
{
    vssseg5e8_v_u8mf2(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e8_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e8_v_u8mf2(uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,size_t vl)
{
    vssseg5e8_v_u8mf2(base, bstride, v0, v1, v2, v3, v4, 15);
}

/*
** test0_vssseg5e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,size_t vl)
{
    vssseg5e8_v_u8mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,size_t vl)
{
    vssseg5e8_v_u8mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, 8);
}

/*
** test0_vssseg5e8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e8_v_u8mf4(uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,size_t vl)
{
    vssseg5e8_v_u8mf4(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e8_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*4,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e8_v_u8mf4(uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,size_t vl)
{
    vssseg5e8_v_u8mf4(base, bstride, v0, v1, v2, v3, v4, 4);
}

/*
** test0_vssseg5e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,size_t vl)
{
    vssseg5e8_v_u8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,size_t vl)
{
    vssseg5e8_v_u8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, 16);
}

/*
** test0_vssseg5e8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg5e8_v_u8mf8(uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,size_t vl)
{
    vssseg5e8_v_u8mf8(base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e8_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg5e8_v_u8mf8(uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,size_t vl)
{
    vssseg5e8_v_u8mf8(base, bstride, v0, v1, v2, v3, v4, 20);
}

/*
** test0_vssseg5e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg5e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,size_t vl)
{
    vssseg5e8_v_u8mf8_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vssseg5e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg5e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,size_t vl)
{
    vssseg5e8_v_u8mf8_m(mask, base, bstride, v0, v1, v2, v3, v4, 3);
}

/*
** test0_vssseg6e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e16_v_f16m1(float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,size_t vl)
{
    vssseg6e16_v_f16m1(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e16_v_f16m1(float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,size_t vl)
{
    vssseg6e16_v_f16m1(base, bstride, v0, v1, v2, v3, v4, v5, 8);
}

/*
** test0_vssseg6e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e16_v_f16m1_m(vbool16_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,size_t vl)
{
    vssseg6e16_v_f16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e16_v_f16m1_m(vbool16_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,size_t vl)
{
    vssseg6e16_v_f16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 21);
}

/*
** test0_vssseg6e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e16_v_f16mf2(float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,size_t vl)
{
    vssseg6e16_v_f16mf2(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e16_v_f16mf2(float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,size_t vl)
{
    vssseg6e16_v_f16mf2(base, bstride, v0, v1, v2, v3, v4, v5, 31);
}

/*
** test0_vssseg6e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e16_v_f16mf2_m(vbool32_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,size_t vl)
{
    vssseg6e16_v_f16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e16_v_f16mf2_m(vbool32_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,size_t vl)
{
    vssseg6e16_v_f16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 23);
}

/*
** test0_vssseg6e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e16_v_f16mf4(float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,size_t vl)
{
    vssseg6e16_v_f16mf4(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e16_v_f16mf4(float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,size_t vl)
{
    vssseg6e16_v_f16mf4(base, bstride, v0, v1, v2, v3, v4, v5, 25);
}

/*
** test0_vssseg6e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e16_v_f16mf4_m(vbool64_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,size_t vl)
{
    vssseg6e16_v_f16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e16_v_f16mf4_m(vbool64_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,size_t vl)
{
    vssseg6e16_v_f16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 26);
}

/*
** test0_vssseg6e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e16_v_i16m1(int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,size_t vl)
{
    vssseg6e16_v_i16m1(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*14,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e16_v_i16m1(int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,size_t vl)
{
    vssseg6e16_v_i16m1(base, bstride, v0, v1, v2, v3, v4, v5, 14);
}

/*
** test0_vssseg6e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e16_v_i16m1_m(vbool16_t mask,int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,size_t vl)
{
    vssseg6e16_v_i16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e16_v_i16m1_m(vbool16_t mask,int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,size_t vl)
{
    vssseg6e16_v_i16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 10);
}

/*
** test0_vssseg6e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e16_v_i16mf2(int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,size_t vl)
{
    vssseg6e16_v_i16mf2(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e16_v_i16mf2(int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,size_t vl)
{
    vssseg6e16_v_i16mf2(base, bstride, v0, v1, v2, v3, v4, v5, 1);
}

/*
** test0_vssseg6e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e16_v_i16mf2_m(vbool32_t mask,int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,size_t vl)
{
    vssseg6e16_v_i16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e16_v_i16mf2_m(vbool32_t mask,int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,size_t vl)
{
    vssseg6e16_v_i16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 16);
}

/*
** test0_vssseg6e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e16_v_i16mf4(int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vssseg6e16_v_i16mf4(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e16_v_i16mf4(int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vssseg6e16_v_i16mf4(base, bstride, v0, v1, v2, v3, v4, v5, 24);
}

/*
** test0_vssseg6e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e16_v_i16mf4_m(vbool64_t mask,int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vssseg6e16_v_i16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e16_v_i16mf4_m(vbool64_t mask,int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vssseg6e16_v_i16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 4);
}

/*
** test0_vssseg6e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e16_v_u16m1(uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,size_t vl)
{
    vssseg6e16_v_u16m1(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e16_v_u16m1(uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,size_t vl)
{
    vssseg6e16_v_u16m1(base, bstride, v0, v1, v2, v3, v4, v5, 0);
}

/*
** test0_vssseg6e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e16_v_u16m1_m(vbool16_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,size_t vl)
{
    vssseg6e16_v_u16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e16_v_u16m1_m(vbool16_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,size_t vl)
{
    vssseg6e16_v_u16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 23);
}

/*
** test0_vssseg6e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e16_v_u16mf2(uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,size_t vl)
{
    vssseg6e16_v_u16mf2(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e16_v_u16mf2(uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,size_t vl)
{
    vssseg6e16_v_u16mf2(base, bstride, v0, v1, v2, v3, v4, v5, 17);
}

/*
** test0_vssseg6e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,size_t vl)
{
    vssseg6e16_v_u16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,size_t vl)
{
    vssseg6e16_v_u16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 6);
}

/*
** test0_vssseg6e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e16_v_u16mf4(uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,size_t vl)
{
    vssseg6e16_v_u16mf4(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e16_v_u16mf4(uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,size_t vl)
{
    vssseg6e16_v_u16mf4(base, bstride, v0, v1, v2, v3, v4, v5, 27);
}

/*
** test0_vssseg6e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,size_t vl)
{
    vssseg6e16_v_u16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,size_t vl)
{
    vssseg6e16_v_u16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 29);
}

/*
** test0_vssseg6e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e32_v_f32m1(float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,size_t vl)
{
    vssseg6e32_v_f32m1(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*19,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e32_v_f32m1(float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,size_t vl)
{
    vssseg6e32_v_f32m1(base, bstride, v0, v1, v2, v3, v4, v5, 19);
}

/*
** test0_vssseg6e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e32_v_f32m1_m(vbool32_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,size_t vl)
{
    vssseg6e32_v_f32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e32_v_f32m1_m(vbool32_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,size_t vl)
{
    vssseg6e32_v_f32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 22);
}

/*
** test0_vssseg6e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e32_v_f32mf2(float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vssseg6e32_v_f32mf2(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e32_v_f32mf2(float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vssseg6e32_v_f32mf2(base, bstride, v0, v1, v2, v3, v4, v5, 9);
}

/*
** test0_vssseg6e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e32_v_f32mf2_m(vbool64_t mask,float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vssseg6e32_v_f32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e32_v_f32mf2_m(vbool64_t mask,float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vssseg6e32_v_f32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 18);
}

/*
** test0_vssseg6e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e32_v_i32m1(int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,size_t vl)
{
    vssseg6e32_v_i32m1(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*24,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e32_v_i32m1(int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,size_t vl)
{
    vssseg6e32_v_i32m1(base, bstride, v0, v1, v2, v3, v4, v5, 24);
}

/*
** test0_vssseg6e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e32_v_i32m1_m(vbool32_t mask,int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,size_t vl)
{
    vssseg6e32_v_i32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e32_v_i32m1_m(vbool32_t mask,int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,size_t vl)
{
    vssseg6e32_v_i32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 16);
}

/*
** test0_vssseg6e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e32_v_i32mf2(int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,size_t vl)
{
    vssseg6e32_v_i32mf2(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e32_v_i32mf2(int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,size_t vl)
{
    vssseg6e32_v_i32mf2(base, bstride, v0, v1, v2, v3, v4, v5, 0);
}

/*
** test0_vssseg6e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e32_v_i32mf2_m(vbool64_t mask,int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,size_t vl)
{
    vssseg6e32_v_i32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e32_v_i32mf2_m(vbool64_t mask,int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,size_t vl)
{
    vssseg6e32_v_i32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 31);
}

/*
** test0_vssseg6e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e32_v_u32m1(uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,size_t vl)
{
    vssseg6e32_v_u32m1(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e32_v_u32m1(uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,size_t vl)
{
    vssseg6e32_v_u32m1(base, bstride, v0, v1, v2, v3, v4, v5, 4);
}

/*
** test0_vssseg6e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e32_v_u32m1_m(vbool32_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,size_t vl)
{
    vssseg6e32_v_u32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e32_v_u32m1_m(vbool32_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,size_t vl)
{
    vssseg6e32_v_u32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 4);
}

/*
** test0_vssseg6e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e32_v_u32mf2(uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vssseg6e32_v_u32mf2(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e32_v_u32mf2(uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vssseg6e32_v_u32mf2(base, bstride, v0, v1, v2, v3, v4, v5, 16);
}

/*
** test0_vssseg6e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vssseg6e32_v_u32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vssseg6e32_v_u32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 5);
}

/*
** test0_vssseg6e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e64_v_f64m1(float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,size_t vl)
{
    vssseg6e64_v_f64m1(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*8,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e64_v_f64m1(float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,size_t vl)
{
    vssseg6e64_v_f64m1(base, bstride, v0, v1, v2, v3, v4, v5, 8);
}

/*
** test0_vssseg6e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e64_v_f64m1_m(vbool64_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,size_t vl)
{
    vssseg6e64_v_f64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e64_v_f64m1_m(vbool64_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,size_t vl)
{
    vssseg6e64_v_f64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 28);
}

/*
** test0_vssseg6e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e64_v_i64m1(int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,size_t vl)
{
    vssseg6e64_v_i64m1(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*10,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e64_v_i64m1(int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,size_t vl)
{
    vssseg6e64_v_i64m1(base, bstride, v0, v1, v2, v3, v4, v5, 10);
}

/*
** test0_vssseg6e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e64_v_i64m1_m(vbool64_t mask,int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,size_t vl)
{
    vssseg6e64_v_i64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e64_v_i64m1_m(vbool64_t mask,int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,size_t vl)
{
    vssseg6e64_v_i64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 18);
}

/*
** test0_vssseg6e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e64_v_u64m1(uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,size_t vl)
{
    vssseg6e64_v_u64m1(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*19,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e64_v_u64m1(uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,size_t vl)
{
    vssseg6e64_v_u64m1(base, bstride, v0, v1, v2, v3, v4, v5, 19);
}

/*
** test0_vssseg6e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e64_v_u64m1_m(vbool64_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,size_t vl)
{
    vssseg6e64_v_u64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e64_v_u64m1_m(vbool64_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,size_t vl)
{
    vssseg6e64_v_u64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 5);
}

/*
** test0_vssseg6e8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e8_v_i8m1(int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,size_t vl)
{
    vssseg6e8_v_i8m1(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e8_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e8_v_i8m1(int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,size_t vl)
{
    vssseg6e8_v_i8m1(base, bstride, v0, v1, v2, v3, v4, v5, 24);
}

/*
** test0_vssseg6e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e8_v_i8m1_m(vbool8_t mask,int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,size_t vl)
{
    vssseg6e8_v_i8m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e8_v_i8m1_m(vbool8_t mask,int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,size_t vl)
{
    vssseg6e8_v_i8m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 3);
}

/*
** test0_vssseg6e8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e8_v_i8mf2(int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,size_t vl)
{
    vssseg6e8_v_i8mf2(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e8_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*28,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e8_v_i8mf2(int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,size_t vl)
{
    vssseg6e8_v_i8mf2(base, bstride, v0, v1, v2, v3, v4, v5, 28);
}

/*
** test0_vssseg6e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e8_v_i8mf2_m(vbool16_t mask,int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,size_t vl)
{
    vssseg6e8_v_i8mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e8_v_i8mf2_m(vbool16_t mask,int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,size_t vl)
{
    vssseg6e8_v_i8mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 2);
}

/*
** test0_vssseg6e8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e8_v_i8mf4(int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,size_t vl)
{
    vssseg6e8_v_i8mf4(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e8_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*27,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e8_v_i8mf4(int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,size_t vl)
{
    vssseg6e8_v_i8mf4(base, bstride, v0, v1, v2, v3, v4, v5, 27);
}

/*
** test0_vssseg6e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e8_v_i8mf4_m(vbool32_t mask,int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,size_t vl)
{
    vssseg6e8_v_i8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e8_v_i8mf4_m(vbool32_t mask,int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,size_t vl)
{
    vssseg6e8_v_i8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 0);
}

/*
** test0_vssseg6e8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e8_v_i8mf8(int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,size_t vl)
{
    vssseg6e8_v_i8mf8(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e8_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e8_v_i8mf8(int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,size_t vl)
{
    vssseg6e8_v_i8mf8(base, bstride, v0, v1, v2, v3, v4, v5, 26);
}

/*
** test0_vssseg6e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e8_v_i8mf8_m(vbool64_t mask,int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,size_t vl)
{
    vssseg6e8_v_i8mf8_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e8_v_i8mf8_m(vbool64_t mask,int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,size_t vl)
{
    vssseg6e8_v_i8mf8_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 26);
}

/*
** test0_vssseg6e8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e8_v_u8m1(uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,size_t vl)
{
    vssseg6e8_v_u8m1(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e8_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e8_v_u8m1(uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,size_t vl)
{
    vssseg6e8_v_u8m1(base, bstride, v0, v1, v2, v3, v4, v5, 30);
}

/*
** test0_vssseg6e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e8_v_u8m1_m(vbool8_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,size_t vl)
{
    vssseg6e8_v_u8m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e8_v_u8m1_m(vbool8_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,size_t vl)
{
    vssseg6e8_v_u8m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 7);
}

/*
** test0_vssseg6e8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e8_v_u8mf2(uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,size_t vl)
{
    vssseg6e8_v_u8mf2(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e8_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*4,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e8_v_u8mf2(uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,size_t vl)
{
    vssseg6e8_v_u8mf2(base, bstride, v0, v1, v2, v3, v4, v5, 4);
}

/*
** test0_vssseg6e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,size_t vl)
{
    vssseg6e8_v_u8mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,size_t vl)
{
    vssseg6e8_v_u8mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 19);
}

/*
** test0_vssseg6e8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e8_v_u8mf4(uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,size_t vl)
{
    vssseg6e8_v_u8mf4(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e8_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*23,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e8_v_u8mf4(uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,size_t vl)
{
    vssseg6e8_v_u8mf4(base, bstride, v0, v1, v2, v3, v4, v5, 23);
}

/*
** test0_vssseg6e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,size_t vl)
{
    vssseg6e8_v_u8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,size_t vl)
{
    vssseg6e8_v_u8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 6);
}

/*
** test0_vssseg6e8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg6e8_v_u8mf8(uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,size_t vl)
{
    vssseg6e8_v_u8mf8(base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e8_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*5,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg6e8_v_u8mf8(uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,size_t vl)
{
    vssseg6e8_v_u8mf8(base, bstride, v0, v1, v2, v3, v4, v5, 5);
}

/*
** test0_vssseg6e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg6e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,size_t vl)
{
    vssseg6e8_v_u8mf8_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vssseg6e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg6e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,size_t vl)
{
    vssseg6e8_v_u8mf8_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, 3);
}

/*
** test0_vssseg7e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e16_v_f16m1(float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,size_t vl)
{
    vssseg7e16_v_f16m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e16_v_f16m1(float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,size_t vl)
{
    vssseg7e16_v_f16m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, 5);
}

/*
** test0_vssseg7e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e16_v_f16m1_m(vbool16_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,size_t vl)
{
    vssseg7e16_v_f16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e16_v_f16m1_m(vbool16_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,size_t vl)
{
    vssseg7e16_v_f16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 25);
}

/*
** test0_vssseg7e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e16_v_f16mf2(float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,size_t vl)
{
    vssseg7e16_v_f16mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e16_v_f16mf2(float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,size_t vl)
{
    vssseg7e16_v_f16mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, 23);
}

/*
** test0_vssseg7e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e16_v_f16mf2_m(vbool32_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,size_t vl)
{
    vssseg7e16_v_f16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e16_v_f16mf2_m(vbool32_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,size_t vl)
{
    vssseg7e16_v_f16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 31);
}

/*
** test0_vssseg7e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e16_v_f16mf4(float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,size_t vl)
{
    vssseg7e16_v_f16mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e16_v_f16mf4(float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,size_t vl)
{
    vssseg7e16_v_f16mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, 2);
}

/*
** test0_vssseg7e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e16_v_f16mf4_m(vbool64_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,size_t vl)
{
    vssseg7e16_v_f16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e16_v_f16mf4_m(vbool64_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,size_t vl)
{
    vssseg7e16_v_f16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 11);
}

/*
** test0_vssseg7e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e16_v_i16m1(int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,size_t vl)
{
    vssseg7e16_v_i16m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e16_v_i16m1(int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,size_t vl)
{
    vssseg7e16_v_i16m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, 10);
}

/*
** test0_vssseg7e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e16_v_i16m1_m(vbool16_t mask,int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,size_t vl)
{
    vssseg7e16_v_i16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e16_v_i16m1_m(vbool16_t mask,int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,size_t vl)
{
    vssseg7e16_v_i16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 27);
}

/*
** test0_vssseg7e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e16_v_i16mf2(int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,size_t vl)
{
    vssseg7e16_v_i16mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e16_v_i16mf2(int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,size_t vl)
{
    vssseg7e16_v_i16mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, 8);
}

/*
** test0_vssseg7e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e16_v_i16mf2_m(vbool32_t mask,int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,size_t vl)
{
    vssseg7e16_v_i16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e16_v_i16mf2_m(vbool32_t mask,int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,size_t vl)
{
    vssseg7e16_v_i16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 29);
}

/*
** test0_vssseg7e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e16_v_i16mf4(int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,size_t vl)
{
    vssseg7e16_v_i16mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e16_v_i16mf4(int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,size_t vl)
{
    vssseg7e16_v_i16mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, 15);
}

/*
** test0_vssseg7e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e16_v_i16mf4_m(vbool64_t mask,int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,size_t vl)
{
    vssseg7e16_v_i16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e16_v_i16mf4_m(vbool64_t mask,int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,size_t vl)
{
    vssseg7e16_v_i16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 1);
}

/*
** test0_vssseg7e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e16_v_u16m1(uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,size_t vl)
{
    vssseg7e16_v_u16m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e16_v_u16m1(uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,size_t vl)
{
    vssseg7e16_v_u16m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, 21);
}

/*
** test0_vssseg7e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e16_v_u16m1_m(vbool16_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,size_t vl)
{
    vssseg7e16_v_u16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e16_v_u16m1_m(vbool16_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,size_t vl)
{
    vssseg7e16_v_u16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 5);
}

/*
** test0_vssseg7e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e16_v_u16mf2(uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,size_t vl)
{
    vssseg7e16_v_u16mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e16_v_u16mf2(uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,size_t vl)
{
    vssseg7e16_v_u16mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, 19);
}

/*
** test0_vssseg7e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,size_t vl)
{
    vssseg7e16_v_u16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,size_t vl)
{
    vssseg7e16_v_u16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 19);
}

/*
** test0_vssseg7e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e16_v_u16mf4(uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,size_t vl)
{
    vssseg7e16_v_u16mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e16_v_u16mf4(uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,size_t vl)
{
    vssseg7e16_v_u16mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, 16);
}

/*
** test0_vssseg7e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,size_t vl)
{
    vssseg7e16_v_u16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,size_t vl)
{
    vssseg7e16_v_u16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 29);
}

/*
** test0_vssseg7e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e32_v_f32m1(float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,size_t vl)
{
    vssseg7e32_v_f32m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*24,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e32_v_f32m1(float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,size_t vl)
{
    vssseg7e32_v_f32m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, 24);
}

/*
** test0_vssseg7e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e32_v_f32m1_m(vbool32_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,size_t vl)
{
    vssseg7e32_v_f32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e32_v_f32m1_m(vbool32_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,size_t vl)
{
    vssseg7e32_v_f32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 28);
}

/*
** test0_vssseg7e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e32_v_f32mf2(float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,size_t vl)
{
    vssseg7e32_v_f32mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e32_v_f32mf2(float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,size_t vl)
{
    vssseg7e32_v_f32mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, 21);
}

/*
** test0_vssseg7e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e32_v_f32mf2_m(vbool64_t mask,float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,size_t vl)
{
    vssseg7e32_v_f32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e32_v_f32mf2_m(vbool64_t mask,float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,size_t vl)
{
    vssseg7e32_v_f32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 13);
}

/*
** test0_vssseg7e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e32_v_i32m1(int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,size_t vl)
{
    vssseg7e32_v_i32m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e32_v_i32m1(int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,size_t vl)
{
    vssseg7e32_v_i32m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, 23);
}

/*
** test0_vssseg7e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e32_v_i32m1_m(vbool32_t mask,int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,size_t vl)
{
    vssseg7e32_v_i32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e32_v_i32m1_m(vbool32_t mask,int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,size_t vl)
{
    vssseg7e32_v_i32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 29);
}

/*
** test0_vssseg7e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e32_v_i32mf2(int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,size_t vl)
{
    vssseg7e32_v_i32mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*17,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e32_v_i32mf2(int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,size_t vl)
{
    vssseg7e32_v_i32mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, 17);
}

/*
** test0_vssseg7e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e32_v_i32mf2_m(vbool64_t mask,int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,size_t vl)
{
    vssseg7e32_v_i32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e32_v_i32mf2_m(vbool64_t mask,int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,size_t vl)
{
    vssseg7e32_v_i32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 31);
}

/*
** test0_vssseg7e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e32_v_u32m1(uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,size_t vl)
{
    vssseg7e32_v_u32m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*26,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e32_v_u32m1(uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,size_t vl)
{
    vssseg7e32_v_u32m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, 26);
}

/*
** test0_vssseg7e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e32_v_u32m1_m(vbool32_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,size_t vl)
{
    vssseg7e32_v_u32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e32_v_u32m1_m(vbool32_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,size_t vl)
{
    vssseg7e32_v_u32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 6);
}

/*
** test0_vssseg7e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e32_v_u32mf2(uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,size_t vl)
{
    vssseg7e32_v_u32mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e32_v_u32mf2(uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,size_t vl)
{
    vssseg7e32_v_u32mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, 18);
}

/*
** test0_vssseg7e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,size_t vl)
{
    vssseg7e32_v_u32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,size_t vl)
{
    vssseg7e32_v_u32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 9);
}

/*
** test0_vssseg7e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e64_v_f64m1(float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,size_t vl)
{
    vssseg7e64_v_f64m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e64_v_f64m1(float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,size_t vl)
{
    vssseg7e64_v_f64m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, 0);
}

/*
** test0_vssseg7e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e64_v_f64m1_m(vbool64_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,size_t vl)
{
    vssseg7e64_v_f64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e64_v_f64m1_m(vbool64_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,size_t vl)
{
    vssseg7e64_v_f64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 11);
}

/*
** test0_vssseg7e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e64_v_i64m1(int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,size_t vl)
{
    vssseg7e64_v_i64m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*20,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e64_v_i64m1(int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,size_t vl)
{
    vssseg7e64_v_i64m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, 20);
}

/*
** test0_vssseg7e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e64_v_i64m1_m(vbool64_t mask,int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,size_t vl)
{
    vssseg7e64_v_i64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e64_v_i64m1_m(vbool64_t mask,int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,size_t vl)
{
    vssseg7e64_v_i64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 8);
}

/*
** test0_vssseg7e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e64_v_u64m1(uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,size_t vl)
{
    vssseg7e64_v_u64m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*23,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e64_v_u64m1(uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,size_t vl)
{
    vssseg7e64_v_u64m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, 23);
}

/*
** test0_vssseg7e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e64_v_u64m1_m(vbool64_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,size_t vl)
{
    vssseg7e64_v_u64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e64_v_u64m1_m(vbool64_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,size_t vl)
{
    vssseg7e64_v_u64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 15);
}

/*
** test0_vssseg7e8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e8_v_i8m1(int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,size_t vl)
{
    vssseg7e8_v_i8m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e8_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e8_v_i8m1(int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,size_t vl)
{
    vssseg7e8_v_i8m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, 18);
}

/*
** test0_vssseg7e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e8_v_i8m1_m(vbool8_t mask,int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,size_t vl)
{
    vssseg7e8_v_i8m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e8_v_i8m1_m(vbool8_t mask,int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,size_t vl)
{
    vssseg7e8_v_i8m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 23);
}

/*
** test0_vssseg7e8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e8_v_i8mf2(int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,size_t vl)
{
    vssseg7e8_v_i8mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e8_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e8_v_i8mf2(int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,size_t vl)
{
    vssseg7e8_v_i8mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, 26);
}

/*
** test0_vssseg7e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e8_v_i8mf2_m(vbool16_t mask,int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,size_t vl)
{
    vssseg7e8_v_i8mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e8_v_i8mf2_m(vbool16_t mask,int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,size_t vl)
{
    vssseg7e8_v_i8mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 6);
}

/*
** test0_vssseg7e8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e8_v_i8mf4(int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,size_t vl)
{
    vssseg7e8_v_i8mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e8_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*28,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e8_v_i8mf4(int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,size_t vl)
{
    vssseg7e8_v_i8mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, 28);
}

/*
** test0_vssseg7e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e8_v_i8mf4_m(vbool32_t mask,int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,size_t vl)
{
    vssseg7e8_v_i8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e8_v_i8mf4_m(vbool32_t mask,int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,size_t vl)
{
    vssseg7e8_v_i8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 14);
}

/*
** test0_vssseg7e8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e8_v_i8mf8(int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,size_t vl)
{
    vssseg7e8_v_i8mf8(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e8_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e8_v_i8mf8(int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,size_t vl)
{
    vssseg7e8_v_i8mf8(base, bstride, v0, v1, v2, v3, v4, v5, v6, 0);
}

/*
** test0_vssseg7e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e8_v_i8mf8_m(vbool64_t mask,int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,size_t vl)
{
    vssseg7e8_v_i8mf8_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e8_v_i8mf8_m(vbool64_t mask,int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,size_t vl)
{
    vssseg7e8_v_i8mf8_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 15);
}

/*
** test0_vssseg7e8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e8_v_u8m1(uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,size_t vl)
{
    vssseg7e8_v_u8m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e8_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*10,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e8_v_u8m1(uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,size_t vl)
{
    vssseg7e8_v_u8m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, 10);
}

/*
** test0_vssseg7e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e8_v_u8m1_m(vbool8_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,size_t vl)
{
    vssseg7e8_v_u8m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e8_v_u8m1_m(vbool8_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,size_t vl)
{
    vssseg7e8_v_u8m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 31);
}

/*
** test0_vssseg7e8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e8_v_u8mf2(uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,size_t vl)
{
    vssseg7e8_v_u8mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e8_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e8_v_u8mf2(uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,size_t vl)
{
    vssseg7e8_v_u8mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, 2);
}

/*
** test0_vssseg7e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,size_t vl)
{
    vssseg7e8_v_u8mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,size_t vl)
{
    vssseg7e8_v_u8mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 2);
}

/*
** test0_vssseg7e8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e8_v_u8mf4(uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,size_t vl)
{
    vssseg7e8_v_u8mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e8_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e8_v_u8mf4(uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,size_t vl)
{
    vssseg7e8_v_u8mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, 25);
}

/*
** test0_vssseg7e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,size_t vl)
{
    vssseg7e8_v_u8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,size_t vl)
{
    vssseg7e8_v_u8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 16);
}

/*
** test0_vssseg7e8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg7e8_v_u8mf8(uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,size_t vl)
{
    vssseg7e8_v_u8mf8(base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e8_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg7e8_v_u8mf8(uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,size_t vl)
{
    vssseg7e8_v_u8mf8(base, bstride, v0, v1, v2, v3, v4, v5, v6, 14);
}

/*
** test0_vssseg7e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg7e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,size_t vl)
{
    vssseg7e8_v_u8mf8_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vssseg7e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg7e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,size_t vl)
{
    vssseg7e8_v_u8mf8_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, 14);
}

/*
** test0_vssseg8e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e16_v_f16m1(float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,vfloat16m1_t v7,size_t vl)
{
    vssseg8e16_v_f16m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e16_v_f16m1(float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,vfloat16m1_t v7,size_t vl)
{
    vssseg8e16_v_f16m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 24);
}

/*
** test0_vssseg8e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e16_v_f16m1_m(vbool16_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,vfloat16m1_t v7,size_t vl)
{
    vssseg8e16_v_f16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e16_v_f16m1_m(vbool16_t mask,float16_t *base,ptrdiff_t bstride,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,vfloat16m1_t v7,size_t vl)
{
    vssseg8e16_v_f16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 13);
}

/*
** test0_vssseg8e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e16_v_f16mf2(float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vssseg8e16_v_f16mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e16_v_f16mf2(float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vssseg8e16_v_f16mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 17);
}

/*
** test0_vssseg8e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e16_v_f16mf2_m(vbool32_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vssseg8e16_v_f16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e16_v_f16mf2_m(vbool32_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vssseg8e16_v_f16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 4);
}

/*
** test0_vssseg8e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e16_v_f16mf4(float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,vfloat16mf4_t v7,size_t vl)
{
    vssseg8e16_v_f16mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e16_v_f16mf4(float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,vfloat16mf4_t v7,size_t vl)
{
    vssseg8e16_v_f16mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 21);
}

/*
** test0_vssseg8e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e16_v_f16mf4_m(vbool64_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,vfloat16mf4_t v7,size_t vl)
{
    vssseg8e16_v_f16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e16_v_f16mf4_m(vbool64_t mask,float16_t *base,ptrdiff_t bstride,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,vfloat16mf4_t v7,size_t vl)
{
    vssseg8e16_v_f16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 24);
}

/*
** test0_vssseg8e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e16_v_i16m1(int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,vint16m1_t v7,size_t vl)
{
    vssseg8e16_v_i16m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*14,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e16_v_i16m1(int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,vint16m1_t v7,size_t vl)
{
    vssseg8e16_v_i16m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 14);
}

/*
** test0_vssseg8e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e16_v_i16m1_m(vbool16_t mask,int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,vint16m1_t v7,size_t vl)
{
    vssseg8e16_v_i16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e16_v_i16m1_m(vbool16_t mask,int16_t *base,ptrdiff_t bstride,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,vint16m1_t v7,size_t vl)
{
    vssseg8e16_v_i16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 2);
}

/*
** test0_vssseg8e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e16_v_i16mf2(int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,vint16mf2_t v7,size_t vl)
{
    vssseg8e16_v_i16mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e16_v_i16mf2(int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,vint16mf2_t v7,size_t vl)
{
    vssseg8e16_v_i16mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 20);
}

/*
** test0_vssseg8e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e16_v_i16mf2_m(vbool32_t mask,int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,vint16mf2_t v7,size_t vl)
{
    vssseg8e16_v_i16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e16_v_i16mf2_m(vbool32_t mask,int16_t *base,ptrdiff_t bstride,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,vint16mf2_t v7,size_t vl)
{
    vssseg8e16_v_i16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 18);
}

/*
** test0_vssseg8e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e16_v_i16mf4(int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,vint16mf4_t v7,size_t vl)
{
    vssseg8e16_v_i16mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e16_v_i16mf4(int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,vint16mf4_t v7,size_t vl)
{
    vssseg8e16_v_i16mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 10);
}

/*
** test0_vssseg8e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e16_v_i16mf4_m(vbool64_t mask,int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,vint16mf4_t v7,size_t vl)
{
    vssseg8e16_v_i16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e16_v_i16mf4_m(vbool64_t mask,int16_t *base,ptrdiff_t bstride,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,vint16mf4_t v7,size_t vl)
{
    vssseg8e16_v_i16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 7);
}

/*
** test0_vssseg8e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e16_v_u16m1(uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,vuint16m1_t v7,size_t vl)
{
    vssseg8e16_v_u16m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e16_v_u16m1(uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,vuint16m1_t v7,size_t vl)
{
    vssseg8e16_v_u16m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 12);
}

/*
** test0_vssseg8e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e16_v_u16m1_m(vbool16_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,vuint16m1_t v7,size_t vl)
{
    vssseg8e16_v_u16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e16_v_u16m1_m(vbool16_t mask,uint16_t *base,ptrdiff_t bstride,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,vuint16m1_t v7,size_t vl)
{
    vssseg8e16_v_u16m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 4);
}

/*
** test0_vssseg8e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e16_v_u16mf2(uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,vuint16mf2_t v7,size_t vl)
{
    vssseg8e16_v_u16mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e16_v_u16mf2(uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,vuint16mf2_t v7,size_t vl)
{
    vssseg8e16_v_u16mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 26);
}

/*
** test0_vssseg8e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,vuint16mf2_t v7,size_t vl)
{
    vssseg8e16_v_u16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,vuint16mf2_t v7,size_t vl)
{
    vssseg8e16_v_u16mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 29);
}

/*
** test0_vssseg8e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e16_v_u16mf4(uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,vuint16mf4_t v7,size_t vl)
{
    vssseg8e16_v_u16mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e16_v_u16mf4(uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,vuint16mf4_t v7,size_t vl)
{
    vssseg8e16_v_u16mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 6);
}

/*
** test0_vssseg8e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,vuint16mf4_t v7,size_t vl)
{
    vssseg8e16_v_u16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,vuint16mf4_t v7,size_t vl)
{
    vssseg8e16_v_u16mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 17);
}

/*
** test0_vssseg8e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e32_v_f32m1(float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,vfloat32m1_t v7,size_t vl)
{
    vssseg8e32_v_f32m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*26,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e32_v_f32m1(float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,vfloat32m1_t v7,size_t vl)
{
    vssseg8e32_v_f32m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 26);
}

/*
** test0_vssseg8e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e32_v_f32m1_m(vbool32_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,vfloat32m1_t v7,size_t vl)
{
    vssseg8e32_v_f32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e32_v_f32m1_m(vbool32_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,vfloat32m1_t v7,size_t vl)
{
    vssseg8e32_v_f32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 7);
}

/*
** test0_vssseg8e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e32_v_f32mf2(float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,vfloat32mf2_t v7,size_t vl)
{
    vssseg8e32_v_f32mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*26,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e32_v_f32mf2(float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,vfloat32mf2_t v7,size_t vl)
{
    vssseg8e32_v_f32mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 26);
}

/*
** test0_vssseg8e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e32_v_f32mf2_m(vbool64_t mask,float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,vfloat32mf2_t v7,size_t vl)
{
    vssseg8e32_v_f32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e32_v_f32mf2_m(vbool64_t mask,float32_t *base,ptrdiff_t bstride,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,vfloat32mf2_t v7,size_t vl)
{
    vssseg8e32_v_f32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 2);
}

/*
** test0_vssseg8e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e32_v_i32m1(int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,vint32m1_t v7,size_t vl)
{
    vssseg8e32_v_i32m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*26,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e32_v_i32m1(int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,vint32m1_t v7,size_t vl)
{
    vssseg8e32_v_i32m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 26);
}

/*
** test0_vssseg8e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e32_v_i32m1_m(vbool32_t mask,int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,vint32m1_t v7,size_t vl)
{
    vssseg8e32_v_i32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e32_v_i32m1_m(vbool32_t mask,int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,vint32m1_t v7,size_t vl)
{
    vssseg8e32_v_i32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 9);
}

/*
** test0_vssseg8e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e32_v_i32mf2(int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,vint32mf2_t v7,size_t vl)
{
    vssseg8e32_v_i32mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e32_v_i32mf2(int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,vint32mf2_t v7,size_t vl)
{
    vssseg8e32_v_i32mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 13);
}

/*
** test0_vssseg8e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e32_v_i32mf2_m(vbool64_t mask,int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,vint32mf2_t v7,size_t vl)
{
    vssseg8e32_v_i32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e32_v_i32mf2_m(vbool64_t mask,int32_t *base,ptrdiff_t bstride,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,vint32mf2_t v7,size_t vl)
{
    vssseg8e32_v_i32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 12);
}

/*
** test0_vssseg8e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e32_v_u32m1(uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,vuint32m1_t v7,size_t vl)
{
    vssseg8e32_v_u32m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e32_v_u32m1(uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,vuint32m1_t v7,size_t vl)
{
    vssseg8e32_v_u32m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 2);
}

/*
** test0_vssseg8e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e32_v_u32m1_m(vbool32_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,vuint32m1_t v7,size_t vl)
{
    vssseg8e32_v_u32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e32_v_u32m1_m(vbool32_t mask,uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,vuint32m1_t v7,size_t vl)
{
    vssseg8e32_v_u32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 9);
}

/*
** test0_vssseg8e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e32_v_u32mf2(uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,vuint32mf2_t v7,size_t vl)
{
    vssseg8e32_v_u32mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*25,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e32_v_u32mf2(uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,vuint32mf2_t v7,size_t vl)
{
    vssseg8e32_v_u32mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 25);
}

/*
** test0_vssseg8e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,vuint32mf2_t v7,size_t vl)
{
    vssseg8e32_v_u32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,ptrdiff_t bstride,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,vuint32mf2_t v7,size_t vl)
{
    vssseg8e32_v_u32mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 0);
}

/*
** test0_vssseg8e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e64_v_f64m1(float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,vfloat64m1_t v7,size_t vl)
{
    vssseg8e64_v_f64m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*4,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e64_v_f64m1(float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,vfloat64m1_t v7,size_t vl)
{
    vssseg8e64_v_f64m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 4);
}

/*
** test0_vssseg8e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e64_v_f64m1_m(vbool64_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,vfloat64m1_t v7,size_t vl)
{
    vssseg8e64_v_f64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e64_v_f64m1_m(vbool64_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,vfloat64m1_t v7,size_t vl)
{
    vssseg8e64_v_f64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 17);
}

/*
** test0_vssseg8e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e64_v_i64m1(int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,vint64m1_t v7,size_t vl)
{
    vssseg8e64_v_i64m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*29,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e64_v_i64m1(int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,vint64m1_t v7,size_t vl)
{
    vssseg8e64_v_i64m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 29);
}

/*
** test0_vssseg8e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e64_v_i64m1_m(vbool64_t mask,int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,vint64m1_t v7,size_t vl)
{
    vssseg8e64_v_i64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e64_v_i64m1_m(vbool64_t mask,int64_t *base,ptrdiff_t bstride,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,vint64m1_t v7,size_t vl)
{
    vssseg8e64_v_i64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 1);
}

/*
** test0_vssseg8e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e64_v_u64m1(uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,vuint64m1_t v7,size_t vl)
{
    vssseg8e64_v_u64m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*30,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e64_v_u64m1(uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,vuint64m1_t v7,size_t vl)
{
    vssseg8e64_v_u64m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 30);
}

/*
** test0_vssseg8e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e64_v_u64m1_m(vbool64_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,vuint64m1_t v7,size_t vl)
{
    vssseg8e64_v_u64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e64_v_u64m1_m(vbool64_t mask,uint64_t *base,ptrdiff_t bstride,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,vuint64m1_t v7,size_t vl)
{
    vssseg8e64_v_u64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 28);
}

/*
** test0_vssseg8e8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e8_v_i8m1(int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,vint8m1_t v7,size_t vl)
{
    vssseg8e8_v_i8m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e8_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e8_v_i8m1(int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,vint8m1_t v7,size_t vl)
{
    vssseg8e8_v_i8m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 14);
}

/*
** test0_vssseg8e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e8_v_i8m1_m(vbool8_t mask,int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,vint8m1_t v7,size_t vl)
{
    vssseg8e8_v_i8m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e8_v_i8m1_m(vbool8_t mask,int8_t *base,ptrdiff_t bstride,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,vint8m1_t v7,size_t vl)
{
    vssseg8e8_v_i8m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 12);
}

/*
** test0_vssseg8e8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e8_v_i8mf2(int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,vint8mf2_t v7,size_t vl)
{
    vssseg8e8_v_i8mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e8_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*13,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e8_v_i8mf2(int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,vint8mf2_t v7,size_t vl)
{
    vssseg8e8_v_i8mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 13);
}

/*
** test0_vssseg8e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e8_v_i8mf2_m(vbool16_t mask,int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,vint8mf2_t v7,size_t vl)
{
    vssseg8e8_v_i8mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e8_v_i8mf2_m(vbool16_t mask,int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,vint8mf2_t v7,size_t vl)
{
    vssseg8e8_v_i8mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 4);
}

/*
** test0_vssseg8e8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e8_v_i8mf4(int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,vint8mf4_t v7,size_t vl)
{
    vssseg8e8_v_i8mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e8_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e8_v_i8mf4(int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,vint8mf4_t v7,size_t vl)
{
    vssseg8e8_v_i8mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 26);
}

/*
** test0_vssseg8e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e8_v_i8mf4_m(vbool32_t mask,int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,vint8mf4_t v7,size_t vl)
{
    vssseg8e8_v_i8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e8_v_i8mf4_m(vbool32_t mask,int8_t *base,ptrdiff_t bstride,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,vint8mf4_t v7,size_t vl)
{
    vssseg8e8_v_i8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 6);
}

/*
** test0_vssseg8e8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e8_v_i8mf8(int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,vint8mf8_t v7,size_t vl)
{
    vssseg8e8_v_i8mf8(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e8_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e8_v_i8mf8(int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,vint8mf8_t v7,size_t vl)
{
    vssseg8e8_v_i8mf8(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 15);
}

/*
** test0_vssseg8e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e8_v_i8mf8_m(vbool64_t mask,int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,vint8mf8_t v7,size_t vl)
{
    vssseg8e8_v_i8mf8_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e8_v_i8mf8_m(vbool64_t mask,int8_t *base,ptrdiff_t bstride,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,vint8mf8_t v7,size_t vl)
{
    vssseg8e8_v_i8mf8_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 18);
}

/*
** test0_vssseg8e8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e8_v_u8m1(uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,vuint8m1_t v7,size_t vl)
{
    vssseg8e8_v_u8m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e8_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e8_v_u8m1(uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,vuint8m1_t v7,size_t vl)
{
    vssseg8e8_v_u8m1(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 25);
}

/*
** test0_vssseg8e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e8_v_u8m1_m(vbool8_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,vuint8m1_t v7,size_t vl)
{
    vssseg8e8_v_u8m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e8_v_u8m1_m(vbool8_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,vuint8m1_t v7,size_t vl)
{
    vssseg8e8_v_u8m1_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 8);
}

/*
** test0_vssseg8e8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e8_v_u8mf2(uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,vuint8mf2_t v7,size_t vl)
{
    vssseg8e8_v_u8mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e8_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e8_v_u8mf2(uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,vuint8mf2_t v7,size_t vl)
{
    vssseg8e8_v_u8mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 20);
}

/*
** test0_vssseg8e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,vuint8mf2_t v7,size_t vl)
{
    vssseg8e8_v_u8mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,vuint8mf2_t v7,size_t vl)
{
    vssseg8e8_v_u8mf2_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 15);
}

/*
** test0_vssseg8e8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e8_v_u8mf4(uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,vuint8mf4_t v7,size_t vl)
{
    vssseg8e8_v_u8mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e8_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*12,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e8_v_u8mf4(uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,vuint8mf4_t v7,size_t vl)
{
    vssseg8e8_v_u8mf4(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 12);
}

/*
** test0_vssseg8e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,vuint8mf4_t v7,size_t vl)
{
    vssseg8e8_v_u8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,vuint8mf4_t v7,size_t vl)
{
    vssseg8e8_v_u8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 15);
}

/*
** test0_vssseg8e8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test0_vssseg8e8_v_u8mf8(uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,vuint8mf8_t v7,size_t vl)
{
    vssseg8e8_v_u8mf8(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e8_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test1_vssseg8e8_v_u8mf8(uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,vuint8mf8_t v7,size_t vl)
{
    vssseg8e8_v_u8mf8(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 2);
}

/*
** test0_vssseg8e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test0_vssseg8e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,vuint8mf8_t v7,size_t vl)
{
    vssseg8e8_v_u8mf8_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vssseg8e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vssseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test1_vssseg8e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,vuint8mf8_t v7,size_t vl)
{
    vssseg8e8_v_u8mf8_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 25);
}

