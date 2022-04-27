/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test0_vsuxseg2ei16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f16m1(float16_t *base,vuint16m1_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f16m1_m(vbool16_t mask,float16_t *base,vuint16m1_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f16m2(float16_t *base,vuint16m2_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f16m2_m(vbool8_t mask,float16_t *base,vuint16m2_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f16m4(float16_t *base,vuint16m4_t bindex,vfloat16m4_t v0,vfloat16m4_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f16m4_m(vbool4_t mask,float16_t *base,vuint16m4_t bindex,vfloat16m4_t v0,vfloat16m4_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f16mf2(float16_t *base,vuint16mf2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint16mf2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f16mf4(float16_t *base,vuint16mf4_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint16mf4_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f32m1(float32_t *base,vuint16mf2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f32m1_m(vbool32_t mask,float32_t *base,vuint16mf2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f32m2(float32_t *base,vuint16m1_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f32m2_m(vbool16_t mask,float32_t *base,vuint16m1_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f32m4(float32_t *base,vuint16m2_t bindex,vfloat32m4_t v0,vfloat32m4_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f32m4_m(vbool8_t mask,float32_t *base,vuint16m2_t bindex,vfloat32m4_t v0,vfloat32m4_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f32mf2(float32_t *base,vuint16mf4_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint16mf4_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f64m1(float64_t *base,vuint16mf4_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f64m1_m(vbool64_t mask,float64_t *base,vuint16mf4_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f64m2(float64_t *base,vuint16mf2_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f64m2_m(vbool32_t mask,float64_t *base,vuint16mf2_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f64m4(float64_t *base,vuint16m1_t bindex,vfloat64m4_t v0,vfloat64m4_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_f64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_f64m4_m(vbool16_t mask,float64_t *base,vuint16m1_t bindex,vfloat64m4_t v0,vfloat64m4_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i16m1(int16_t *base,vuint16m1_t bindex,vint16m1_t v0,vint16m1_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i16m1_m(vbool16_t mask,int16_t *base,vuint16m1_t bindex,vint16m1_t v0,vint16m1_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i16m2(int16_t *base,vuint16m2_t bindex,vint16m2_t v0,vint16m2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i16m2_m(vbool8_t mask,int16_t *base,vuint16m2_t bindex,vint16m2_t v0,vint16m2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i16m4(int16_t *base,vuint16m4_t bindex,vint16m4_t v0,vint16m4_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i16m4_m(vbool4_t mask,int16_t *base,vuint16m4_t bindex,vint16m4_t v0,vint16m4_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i16mf2(int16_t *base,vuint16mf2_t bindex,vint16mf2_t v0,vint16mf2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint16mf2_t bindex,vint16mf2_t v0,vint16mf2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i16mf4(int16_t *base,vuint16mf4_t bindex,vint16mf4_t v0,vint16mf4_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint16mf4_t bindex,vint16mf4_t v0,vint16mf4_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i32m1(int32_t *base,vuint16mf2_t bindex,vint32m1_t v0,vint32m1_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i32m1_m(vbool32_t mask,int32_t *base,vuint16mf2_t bindex,vint32m1_t v0,vint32m1_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i32m2(int32_t *base,vuint16m1_t bindex,vint32m2_t v0,vint32m2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i32m2_m(vbool16_t mask,int32_t *base,vuint16m1_t bindex,vint32m2_t v0,vint32m2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i32m4(int32_t *base,vuint16m2_t bindex,vint32m4_t v0,vint32m4_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i32m4_m(vbool8_t mask,int32_t *base,vuint16m2_t bindex,vint32m4_t v0,vint32m4_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i32mf2(int32_t *base,vuint16mf4_t bindex,vint32mf2_t v0,vint32mf2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint16mf4_t bindex,vint32mf2_t v0,vint32mf2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i64m1(int64_t *base,vuint16mf4_t bindex,vint64m1_t v0,vint64m1_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i64m1_m(vbool64_t mask,int64_t *base,vuint16mf4_t bindex,vint64m1_t v0,vint64m1_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i64m2(int64_t *base,vuint16mf2_t bindex,vint64m2_t v0,vint64m2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i64m2_m(vbool32_t mask,int64_t *base,vuint16mf2_t bindex,vint64m2_t v0,vint64m2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i64m4(int64_t *base,vuint16m1_t bindex,vint64m4_t v0,vint64m4_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i64m4_m(vbool16_t mask,int64_t *base,vuint16m1_t bindex,vint64m4_t v0,vint64m4_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i8m1(int8_t *base,vuint16m2_t bindex,vint8m1_t v0,vint8m1_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i8m1_m(vbool8_t mask,int8_t *base,vuint16m2_t bindex,vint8m1_t v0,vint8m1_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i8m2(int8_t *base,vuint16m4_t bindex,vint8m2_t v0,vint8m2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i8m2_m(vbool4_t mask,int8_t *base,vuint16m4_t bindex,vint8m2_t v0,vint8m2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i8m4(int8_t *base,vuint16m8_t bindex,vint8m4_t v0,vint8m4_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i8m4_m(vbool2_t mask,int8_t *base,vuint16m8_t bindex,vint8m4_t v0,vint8m4_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i8mf2(int8_t *base,vuint16m1_t bindex,vint8mf2_t v0,vint8mf2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint16m1_t bindex,vint8mf2_t v0,vint8mf2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i8mf4(int8_t *base,vuint16mf2_t bindex,vint8mf4_t v0,vint8mf4_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint16mf2_t bindex,vint8mf4_t v0,vint8mf4_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i8mf8(int8_t *base,vuint16mf4_t bindex,vint8mf8_t v0,vint8mf8_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint16mf4_t bindex,vint8mf8_t v0,vint8mf8_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u16m1(uint16_t *base,vuint16m1_t bindex,vuint16m1_t v0,vuint16m1_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t bindex,vuint16m1_t v0,vuint16m1_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u16m2(uint16_t *base,vuint16m2_t bindex,vuint16m2_t v0,vuint16m2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint16m2_t bindex,vuint16m2_t v0,vuint16m2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u16m4(uint16_t *base,vuint16m4_t bindex,vuint16m4_t v0,vuint16m4_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u16m4_m(vbool4_t mask,uint16_t *base,vuint16m4_t bindex,vuint16m4_t v0,vuint16m4_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u16mf2(uint16_t *base,vuint16mf2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u16mf4(uint16_t *base,vuint16mf4_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u32m1(uint32_t *base,vuint16mf2_t bindex,vuint32m1_t v0,vuint32m1_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint16mf2_t bindex,vuint32m1_t v0,vuint32m1_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u32m2(uint32_t *base,vuint16m1_t bindex,vuint32m2_t v0,vuint32m2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint16m1_t bindex,vuint32m2_t v0,vuint32m2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u32m4(uint32_t *base,vuint16m2_t bindex,vuint32m4_t v0,vuint32m4_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u32m4_m(vbool8_t mask,uint32_t *base,vuint16m2_t bindex,vuint32m4_t v0,vuint32m4_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u32mf2(uint32_t *base,vuint16mf4_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint16mf4_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u64m1(uint64_t *base,vuint16mf4_t bindex,vuint64m1_t v0,vuint64m1_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint16mf4_t bindex,vuint64m1_t v0,vuint64m1_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u64m2(uint64_t *base,vuint16mf2_t bindex,vuint64m2_t v0,vuint64m2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint16mf2_t bindex,vuint64m2_t v0,vuint64m2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u64m4(uint64_t *base,vuint16m1_t bindex,vuint64m4_t v0,vuint64m4_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u64m4_m(vbool16_t mask,uint64_t *base,vuint16m1_t bindex,vuint64m4_t v0,vuint64m4_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u8m1(uint8_t *base,vuint16m2_t bindex,vuint8m1_t v0,vuint8m1_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint16m2_t bindex,vuint8m1_t v0,vuint8m1_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u8m2(uint8_t *base,vuint16m4_t bindex,vuint8m2_t v0,vuint8m2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u8m2_m(vbool4_t mask,uint8_t *base,vuint16m4_t bindex,vuint8m2_t v0,vuint8m2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u8m4(uint8_t *base,vuint16m8_t bindex,vuint8m4_t v0,vuint8m4_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u8m4_m(vbool2_t mask,uint8_t *base,vuint16m8_t bindex,vuint8m4_t v0,vuint8m4_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u8mf2(uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u8mf4(uint8_t *base,vuint16mf2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint16mf2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u8mf8(uint8_t *base,vuint16mf4_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,size_t vl)
{
    vsuxseg2ei16(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei16_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei16_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint16mf4_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,size_t vl)
{
    vsuxseg2ei16(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f16m1(float16_t *base,vuint32m2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f16m1_m(vbool16_t mask,float16_t *base,vuint32m2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f16m2(float16_t *base,vuint32m4_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f16m2_m(vbool8_t mask,float16_t *base,vuint32m4_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f16m4(float16_t *base,vuint32m8_t bindex,vfloat16m4_t v0,vfloat16m4_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f16m4_m(vbool4_t mask,float16_t *base,vuint32m8_t bindex,vfloat16m4_t v0,vfloat16m4_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f16mf2(float16_t *base,vuint32m1_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint32m1_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f16mf4(float16_t *base,vuint32mf2_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint32mf2_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f32m1(float32_t *base,vuint32m1_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f32m1_m(vbool32_t mask,float32_t *base,vuint32m1_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f32m2(float32_t *base,vuint32m2_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f32m2_m(vbool16_t mask,float32_t *base,vuint32m2_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f32m4(float32_t *base,vuint32m4_t bindex,vfloat32m4_t v0,vfloat32m4_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f32m4_m(vbool8_t mask,float32_t *base,vuint32m4_t bindex,vfloat32m4_t v0,vfloat32m4_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f32mf2(float32_t *base,vuint32mf2_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint32mf2_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f64m1(float64_t *base,vuint32mf2_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f64m1_m(vbool64_t mask,float64_t *base,vuint32mf2_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f64m2(float64_t *base,vuint32m1_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f64m2_m(vbool32_t mask,float64_t *base,vuint32m1_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f64m4(float64_t *base,vuint32m2_t bindex,vfloat64m4_t v0,vfloat64m4_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_f64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_f64m4_m(vbool16_t mask,float64_t *base,vuint32m2_t bindex,vfloat64m4_t v0,vfloat64m4_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i16m1(int16_t *base,vuint32m2_t bindex,vint16m1_t v0,vint16m1_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i16m1_m(vbool16_t mask,int16_t *base,vuint32m2_t bindex,vint16m1_t v0,vint16m1_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i16m2(int16_t *base,vuint32m4_t bindex,vint16m2_t v0,vint16m2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i16m2_m(vbool8_t mask,int16_t *base,vuint32m4_t bindex,vint16m2_t v0,vint16m2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i16m4(int16_t *base,vuint32m8_t bindex,vint16m4_t v0,vint16m4_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i16m4_m(vbool4_t mask,int16_t *base,vuint32m8_t bindex,vint16m4_t v0,vint16m4_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i16mf2(int16_t *base,vuint32m1_t bindex,vint16mf2_t v0,vint16mf2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint32m1_t bindex,vint16mf2_t v0,vint16mf2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i16mf4(int16_t *base,vuint32mf2_t bindex,vint16mf4_t v0,vint16mf4_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint32mf2_t bindex,vint16mf4_t v0,vint16mf4_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i32m1(int32_t *base,vuint32m1_t bindex,vint32m1_t v0,vint32m1_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i32m1_m(vbool32_t mask,int32_t *base,vuint32m1_t bindex,vint32m1_t v0,vint32m1_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i32m2(int32_t *base,vuint32m2_t bindex,vint32m2_t v0,vint32m2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i32m2_m(vbool16_t mask,int32_t *base,vuint32m2_t bindex,vint32m2_t v0,vint32m2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i32m4(int32_t *base,vuint32m4_t bindex,vint32m4_t v0,vint32m4_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i32m4_m(vbool8_t mask,int32_t *base,vuint32m4_t bindex,vint32m4_t v0,vint32m4_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i32mf2(int32_t *base,vuint32mf2_t bindex,vint32mf2_t v0,vint32mf2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint32mf2_t bindex,vint32mf2_t v0,vint32mf2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i64m1(int64_t *base,vuint32mf2_t bindex,vint64m1_t v0,vint64m1_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i64m1_m(vbool64_t mask,int64_t *base,vuint32mf2_t bindex,vint64m1_t v0,vint64m1_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i64m2(int64_t *base,vuint32m1_t bindex,vint64m2_t v0,vint64m2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i64m2_m(vbool32_t mask,int64_t *base,vuint32m1_t bindex,vint64m2_t v0,vint64m2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i64m4(int64_t *base,vuint32m2_t bindex,vint64m4_t v0,vint64m4_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i64m4_m(vbool16_t mask,int64_t *base,vuint32m2_t bindex,vint64m4_t v0,vint64m4_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i8m1(int8_t *base,vuint32m4_t bindex,vint8m1_t v0,vint8m1_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i8m1_m(vbool8_t mask,int8_t *base,vuint32m4_t bindex,vint8m1_t v0,vint8m1_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i8m2(int8_t *base,vuint32m8_t bindex,vint8m2_t v0,vint8m2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i8m2_m(vbool4_t mask,int8_t *base,vuint32m8_t bindex,vint8m2_t v0,vint8m2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i8mf2(int8_t *base,vuint32m2_t bindex,vint8mf2_t v0,vint8mf2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint32m2_t bindex,vint8mf2_t v0,vint8mf2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i8mf4(int8_t *base,vuint32m1_t bindex,vint8mf4_t v0,vint8mf4_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint32m1_t bindex,vint8mf4_t v0,vint8mf4_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i8mf8(int8_t *base,vuint32mf2_t bindex,vint8mf8_t v0,vint8mf8_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint32mf2_t bindex,vint8mf8_t v0,vint8mf8_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u16m1(uint16_t *base,vuint32m2_t bindex,vuint16m1_t v0,vuint16m1_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint32m2_t bindex,vuint16m1_t v0,vuint16m1_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u16m2(uint16_t *base,vuint32m4_t bindex,vuint16m2_t v0,vuint16m2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint32m4_t bindex,vuint16m2_t v0,vuint16m2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u16m4(uint16_t *base,vuint32m8_t bindex,vuint16m4_t v0,vuint16m4_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u16m4_m(vbool4_t mask,uint16_t *base,vuint32m8_t bindex,vuint16m4_t v0,vuint16m4_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u16mf2(uint16_t *base,vuint32m1_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint32m1_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u16mf4(uint16_t *base,vuint32mf2_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint32mf2_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u32m1(uint32_t *base,vuint32m1_t bindex,vuint32m1_t v0,vuint32m1_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t bindex,vuint32m1_t v0,vuint32m1_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u32m2(uint32_t *base,vuint32m2_t bindex,vuint32m2_t v0,vuint32m2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint32m2_t bindex,vuint32m2_t v0,vuint32m2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u32m4(uint32_t *base,vuint32m4_t bindex,vuint32m4_t v0,vuint32m4_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u32m4_m(vbool8_t mask,uint32_t *base,vuint32m4_t bindex,vuint32m4_t v0,vuint32m4_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u32mf2(uint32_t *base,vuint32mf2_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u64m1(uint64_t *base,vuint32mf2_t bindex,vuint64m1_t v0,vuint64m1_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint32mf2_t bindex,vuint64m1_t v0,vuint64m1_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u64m2(uint64_t *base,vuint32m1_t bindex,vuint64m2_t v0,vuint64m2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint32m1_t bindex,vuint64m2_t v0,vuint64m2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u64m4(uint64_t *base,vuint32m2_t bindex,vuint64m4_t v0,vuint64m4_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u64m4_m(vbool16_t mask,uint64_t *base,vuint32m2_t bindex,vuint64m4_t v0,vuint64m4_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u8m1(uint8_t *base,vuint32m4_t bindex,vuint8m1_t v0,vuint8m1_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint32m4_t bindex,vuint8m1_t v0,vuint8m1_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u8m2(uint8_t *base,vuint32m8_t bindex,vuint8m2_t v0,vuint8m2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u8m2_m(vbool4_t mask,uint8_t *base,vuint32m8_t bindex,vuint8m2_t v0,vuint8m2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u8mf2(uint8_t *base,vuint32m2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint32m2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u8mf4(uint8_t *base,vuint32m1_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint32m1_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u8mf8(uint8_t *base,vuint32mf2_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,size_t vl)
{
    vsuxseg2ei32(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei32_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei32_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint32mf2_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,size_t vl)
{
    vsuxseg2ei32(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f16m1(float16_t *base,vuint64m4_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f16m1_m(vbool16_t mask,float16_t *base,vuint64m4_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f16m2(float16_t *base,vuint64m8_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f16m2_m(vbool8_t mask,float16_t *base,vuint64m8_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f16mf2(float16_t *base,vuint64m2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint64m2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f16mf4(float16_t *base,vuint64m1_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint64m1_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f32m1(float32_t *base,vuint64m2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f32m1_m(vbool32_t mask,float32_t *base,vuint64m2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f32m2(float32_t *base,vuint64m4_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f32m2_m(vbool16_t mask,float32_t *base,vuint64m4_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f32m4(float32_t *base,vuint64m8_t bindex,vfloat32m4_t v0,vfloat32m4_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f32m4_m(vbool8_t mask,float32_t *base,vuint64m8_t bindex,vfloat32m4_t v0,vfloat32m4_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f32mf2(float32_t *base,vuint64m1_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint64m1_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f64m1(float64_t *base,vuint64m1_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f64m1_m(vbool64_t mask,float64_t *base,vuint64m1_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f64m2(float64_t *base,vuint64m2_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f64m2_m(vbool32_t mask,float64_t *base,vuint64m2_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f64m4(float64_t *base,vuint64m4_t bindex,vfloat64m4_t v0,vfloat64m4_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_f64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_f64m4_m(vbool16_t mask,float64_t *base,vuint64m4_t bindex,vfloat64m4_t v0,vfloat64m4_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i16m1(int16_t *base,vuint64m4_t bindex,vint16m1_t v0,vint16m1_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i16m1_m(vbool16_t mask,int16_t *base,vuint64m4_t bindex,vint16m1_t v0,vint16m1_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i16m2(int16_t *base,vuint64m8_t bindex,vint16m2_t v0,vint16m2_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i16m2_m(vbool8_t mask,int16_t *base,vuint64m8_t bindex,vint16m2_t v0,vint16m2_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i16mf2(int16_t *base,vuint64m2_t bindex,vint16mf2_t v0,vint16mf2_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint64m2_t bindex,vint16mf2_t v0,vint16mf2_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i16mf4(int16_t *base,vuint64m1_t bindex,vint16mf4_t v0,vint16mf4_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint64m1_t bindex,vint16mf4_t v0,vint16mf4_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i32m1(int32_t *base,vuint64m2_t bindex,vint32m1_t v0,vint32m1_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i32m1_m(vbool32_t mask,int32_t *base,vuint64m2_t bindex,vint32m1_t v0,vint32m1_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i32m2(int32_t *base,vuint64m4_t bindex,vint32m2_t v0,vint32m2_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i32m2_m(vbool16_t mask,int32_t *base,vuint64m4_t bindex,vint32m2_t v0,vint32m2_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i32m4(int32_t *base,vuint64m8_t bindex,vint32m4_t v0,vint32m4_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i32m4_m(vbool8_t mask,int32_t *base,vuint64m8_t bindex,vint32m4_t v0,vint32m4_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i32mf2(int32_t *base,vuint64m1_t bindex,vint32mf2_t v0,vint32mf2_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint64m1_t bindex,vint32mf2_t v0,vint32mf2_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i64m1(int64_t *base,vuint64m1_t bindex,vint64m1_t v0,vint64m1_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i64m1_m(vbool64_t mask,int64_t *base,vuint64m1_t bindex,vint64m1_t v0,vint64m1_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i64m2(int64_t *base,vuint64m2_t bindex,vint64m2_t v0,vint64m2_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i64m2_m(vbool32_t mask,int64_t *base,vuint64m2_t bindex,vint64m2_t v0,vint64m2_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i64m4(int64_t *base,vuint64m4_t bindex,vint64m4_t v0,vint64m4_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i64m4_m(vbool16_t mask,int64_t *base,vuint64m4_t bindex,vint64m4_t v0,vint64m4_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i8m1(int8_t *base,vuint64m8_t bindex,vint8m1_t v0,vint8m1_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i8m1_m(vbool8_t mask,int8_t *base,vuint64m8_t bindex,vint8m1_t v0,vint8m1_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i8mf2(int8_t *base,vuint64m4_t bindex,vint8mf2_t v0,vint8mf2_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint64m4_t bindex,vint8mf2_t v0,vint8mf2_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i8mf4(int8_t *base,vuint64m2_t bindex,vint8mf4_t v0,vint8mf4_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint64m2_t bindex,vint8mf4_t v0,vint8mf4_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i8mf8(int8_t *base,vuint64m1_t bindex,vint8mf8_t v0,vint8mf8_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint64m1_t bindex,vint8mf8_t v0,vint8mf8_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u16m1(uint16_t *base,vuint64m4_t bindex,vuint16m1_t v0,vuint16m1_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint64m4_t bindex,vuint16m1_t v0,vuint16m1_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u16m2(uint16_t *base,vuint64m8_t bindex,vuint16m2_t v0,vuint16m2_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint64m8_t bindex,vuint16m2_t v0,vuint16m2_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u16mf2(uint16_t *base,vuint64m2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint64m2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u16mf4(uint16_t *base,vuint64m1_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint64m1_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u32m1(uint32_t *base,vuint64m2_t bindex,vuint32m1_t v0,vuint32m1_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint64m2_t bindex,vuint32m1_t v0,vuint32m1_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u32m2(uint32_t *base,vuint64m4_t bindex,vuint32m2_t v0,vuint32m2_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint64m4_t bindex,vuint32m2_t v0,vuint32m2_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u32m4(uint32_t *base,vuint64m8_t bindex,vuint32m4_t v0,vuint32m4_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u32m4_m(vbool8_t mask,uint32_t *base,vuint64m8_t bindex,vuint32m4_t v0,vuint32m4_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u32mf2(uint32_t *base,vuint64m1_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint64m1_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u64m1(uint64_t *base,vuint64m1_t bindex,vuint64m1_t v0,vuint64m1_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t bindex,vuint64m1_t v0,vuint64m1_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u64m2(uint64_t *base,vuint64m2_t bindex,vuint64m2_t v0,vuint64m2_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint64m2_t bindex,vuint64m2_t v0,vuint64m2_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u64m4(uint64_t *base,vuint64m4_t bindex,vuint64m4_t v0,vuint64m4_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u64m4_m(vbool16_t mask,uint64_t *base,vuint64m4_t bindex,vuint64m4_t v0,vuint64m4_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u8m1(uint8_t *base,vuint64m8_t bindex,vuint8m1_t v0,vuint8m1_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint64m8_t bindex,vuint8m1_t v0,vuint8m1_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u8mf2(uint8_t *base,vuint64m4_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint64m4_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u8mf4(uint8_t *base,vuint64m2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint64m2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u8mf8(uint8_t *base,vuint64m1_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,size_t vl)
{
    vsuxseg2ei64(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei64_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei64_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint64m1_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,size_t vl)
{
    vsuxseg2ei64(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f16m1(float16_t *base,vuint8mf2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f16m1_m(vbool16_t mask,float16_t *base,vuint8mf2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f16m2(float16_t *base,vuint8m1_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f16m2_m(vbool8_t mask,float16_t *base,vuint8m1_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f16m4(float16_t *base,vuint8m2_t bindex,vfloat16m4_t v0,vfloat16m4_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f16m4_m(vbool4_t mask,float16_t *base,vuint8m2_t bindex,vfloat16m4_t v0,vfloat16m4_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f16mf2(float16_t *base,vuint8mf4_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint8mf4_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f16mf4(float16_t *base,vuint8mf8_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint8mf8_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f32m1(float32_t *base,vuint8mf4_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f32m1_m(vbool32_t mask,float32_t *base,vuint8mf4_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f32m2(float32_t *base,vuint8mf2_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f32m2_m(vbool16_t mask,float32_t *base,vuint8mf2_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f32m4(float32_t *base,vuint8m1_t bindex,vfloat32m4_t v0,vfloat32m4_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f32m4_m(vbool8_t mask,float32_t *base,vuint8m1_t bindex,vfloat32m4_t v0,vfloat32m4_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f32mf2(float32_t *base,vuint8mf8_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint8mf8_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f64m1(float64_t *base,vuint8mf8_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f64m1_m(vbool64_t mask,float64_t *base,vuint8mf8_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f64m2(float64_t *base,vuint8mf4_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f64m2_m(vbool32_t mask,float64_t *base,vuint8mf4_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f64m4(float64_t *base,vuint8mf2_t bindex,vfloat64m4_t v0,vfloat64m4_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_f64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_f64m4_m(vbool16_t mask,float64_t *base,vuint8mf2_t bindex,vfloat64m4_t v0,vfloat64m4_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i16m1(int16_t *base,vuint8mf2_t bindex,vint16m1_t v0,vint16m1_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i16m1_m(vbool16_t mask,int16_t *base,vuint8mf2_t bindex,vint16m1_t v0,vint16m1_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i16m2(int16_t *base,vuint8m1_t bindex,vint16m2_t v0,vint16m2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i16m2_m(vbool8_t mask,int16_t *base,vuint8m1_t bindex,vint16m2_t v0,vint16m2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i16m4(int16_t *base,vuint8m2_t bindex,vint16m4_t v0,vint16m4_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i16m4_m(vbool4_t mask,int16_t *base,vuint8m2_t bindex,vint16m4_t v0,vint16m4_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i16mf2(int16_t *base,vuint8mf4_t bindex,vint16mf2_t v0,vint16mf2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint8mf4_t bindex,vint16mf2_t v0,vint16mf2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i16mf4(int16_t *base,vuint8mf8_t bindex,vint16mf4_t v0,vint16mf4_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint8mf8_t bindex,vint16mf4_t v0,vint16mf4_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i32m1(int32_t *base,vuint8mf4_t bindex,vint32m1_t v0,vint32m1_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i32m1_m(vbool32_t mask,int32_t *base,vuint8mf4_t bindex,vint32m1_t v0,vint32m1_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i32m2(int32_t *base,vuint8mf2_t bindex,vint32m2_t v0,vint32m2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i32m2_m(vbool16_t mask,int32_t *base,vuint8mf2_t bindex,vint32m2_t v0,vint32m2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i32m4(int32_t *base,vuint8m1_t bindex,vint32m4_t v0,vint32m4_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i32m4_m(vbool8_t mask,int32_t *base,vuint8m1_t bindex,vint32m4_t v0,vint32m4_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i32mf2(int32_t *base,vuint8mf8_t bindex,vint32mf2_t v0,vint32mf2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint8mf8_t bindex,vint32mf2_t v0,vint32mf2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i64m1(int64_t *base,vuint8mf8_t bindex,vint64m1_t v0,vint64m1_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i64m1_m(vbool64_t mask,int64_t *base,vuint8mf8_t bindex,vint64m1_t v0,vint64m1_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i64m2(int64_t *base,vuint8mf4_t bindex,vint64m2_t v0,vint64m2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i64m2_m(vbool32_t mask,int64_t *base,vuint8mf4_t bindex,vint64m2_t v0,vint64m2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i64m4(int64_t *base,vuint8mf2_t bindex,vint64m4_t v0,vint64m4_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i64m4_m(vbool16_t mask,int64_t *base,vuint8mf2_t bindex,vint64m4_t v0,vint64m4_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i8m1(int8_t *base,vuint8m1_t bindex,vint8m1_t v0,vint8m1_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i8m1_m(vbool8_t mask,int8_t *base,vuint8m1_t bindex,vint8m1_t v0,vint8m1_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i8m2(int8_t *base,vuint8m2_t bindex,vint8m2_t v0,vint8m2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i8m2_m(vbool4_t mask,int8_t *base,vuint8m2_t bindex,vint8m2_t v0,vint8m2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i8m4(int8_t *base,vuint8m4_t bindex,vint8m4_t v0,vint8m4_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i8m4_m(vbool2_t mask,int8_t *base,vuint8m4_t bindex,vint8m4_t v0,vint8m4_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i8mf2(int8_t *base,vuint8mf2_t bindex,vint8mf2_t v0,vint8mf2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint8mf2_t bindex,vint8mf2_t v0,vint8mf2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i8mf4(int8_t *base,vuint8mf4_t bindex,vint8mf4_t v0,vint8mf4_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint8mf4_t bindex,vint8mf4_t v0,vint8mf4_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i8mf8(int8_t *base,vuint8mf8_t bindex,vint8mf8_t v0,vint8mf8_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint8mf8_t bindex,vint8mf8_t v0,vint8mf8_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u16m1(uint16_t *base,vuint8mf2_t bindex,vuint16m1_t v0,vuint16m1_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint8mf2_t bindex,vuint16m1_t v0,vuint16m1_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u16m2(uint16_t *base,vuint8m1_t bindex,vuint16m2_t v0,vuint16m2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint8m1_t bindex,vuint16m2_t v0,vuint16m2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u16m4(uint16_t *base,vuint8m2_t bindex,vuint16m4_t v0,vuint16m4_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u16m4_m(vbool4_t mask,uint16_t *base,vuint8m2_t bindex,vuint16m4_t v0,vuint16m4_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u16mf2(uint16_t *base,vuint8mf4_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint8mf4_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u16mf4(uint16_t *base,vuint8mf8_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint8mf8_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u32m1(uint32_t *base,vuint8mf4_t bindex,vuint32m1_t v0,vuint32m1_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint8mf4_t bindex,vuint32m1_t v0,vuint32m1_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u32m2(uint32_t *base,vuint8mf2_t bindex,vuint32m2_t v0,vuint32m2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint8mf2_t bindex,vuint32m2_t v0,vuint32m2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u32m4(uint32_t *base,vuint8m1_t bindex,vuint32m4_t v0,vuint32m4_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u32m4_m(vbool8_t mask,uint32_t *base,vuint8m1_t bindex,vuint32m4_t v0,vuint32m4_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u32mf2(uint32_t *base,vuint8mf8_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint8mf8_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u64m1(uint64_t *base,vuint8mf8_t bindex,vuint64m1_t v0,vuint64m1_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint8mf8_t bindex,vuint64m1_t v0,vuint64m1_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u64m2(uint64_t *base,vuint8mf4_t bindex,vuint64m2_t v0,vuint64m2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint8mf4_t bindex,vuint64m2_t v0,vuint64m2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u64m4(uint64_t *base,vuint8mf2_t bindex,vuint64m4_t v0,vuint64m4_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u64m4_m(vbool16_t mask,uint64_t *base,vuint8mf2_t bindex,vuint64m4_t v0,vuint64m4_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u8m1(uint8_t *base,vuint8m1_t bindex,vuint8m1_t v0,vuint8m1_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint8m1_t bindex,vuint8m1_t v0,vuint8m1_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u8m2(uint8_t *base,vuint8m2_t bindex,vuint8m2_t v0,vuint8m2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u8m2_m(vbool4_t mask,uint8_t *base,vuint8m2_t bindex,vuint8m2_t v0,vuint8m2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u8m4(uint8_t *base,vuint8m4_t bindex,vuint8m4_t v0,vuint8m4_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u8m4_m(vbool2_t mask,uint8_t *base,vuint8m4_t bindex,vuint8m4_t v0,vuint8m4_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u8mf2(uint8_t *base,vuint8mf2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u8mf4(uint8_t *base,vuint8mf4_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u8mf8(uint8_t *base,vuint8mf8_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,size_t vl)
{
    vsuxseg2ei8(base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg2ei8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg2ei8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,size_t vl)
{
    vsuxseg2ei8(mask, base, bindex, v0, v1, vl);
}


/*
** test0_vsuxseg3ei16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f16m1(float16_t *base,vuint16m1_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f16m1_m(vbool16_t mask,float16_t *base,vuint16m1_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f16m2(float16_t *base,vuint16m2_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f16m2_m(vbool8_t mask,float16_t *base,vuint16m2_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f16mf2(float16_t *base,vuint16mf2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint16mf2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f16mf4(float16_t *base,vuint16mf4_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint16mf4_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f32m1(float32_t *base,vuint16mf2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f32m1_m(vbool32_t mask,float32_t *base,vuint16mf2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f32m2(float32_t *base,vuint16m1_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f32m2_m(vbool16_t mask,float32_t *base,vuint16m1_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f32mf2(float32_t *base,vuint16mf4_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint16mf4_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f64m1(float64_t *base,vuint16mf4_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f64m1_m(vbool64_t mask,float64_t *base,vuint16mf4_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f64m2(float64_t *base,vuint16mf2_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_f64m2_m(vbool32_t mask,float64_t *base,vuint16mf2_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i16m1(int16_t *base,vuint16m1_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i16m1_m(vbool16_t mask,int16_t *base,vuint16m1_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i16m2(int16_t *base,vuint16m2_t bindex,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i16m2_m(vbool8_t mask,int16_t *base,vuint16m2_t bindex,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i16mf2(int16_t *base,vuint16mf2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint16mf2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i16mf4(int16_t *base,vuint16mf4_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint16mf4_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i32m1(int32_t *base,vuint16mf2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i32m1_m(vbool32_t mask,int32_t *base,vuint16mf2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i32m2(int32_t *base,vuint16m1_t bindex,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i32m2_m(vbool16_t mask,int32_t *base,vuint16m1_t bindex,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i32mf2(int32_t *base,vuint16mf4_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint16mf4_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i64m1(int64_t *base,vuint16mf4_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i64m1_m(vbool64_t mask,int64_t *base,vuint16mf4_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i64m2(int64_t *base,vuint16mf2_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i64m2_m(vbool32_t mask,int64_t *base,vuint16mf2_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i8m1(int8_t *base,vuint16m2_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i8m1_m(vbool8_t mask,int8_t *base,vuint16m2_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i8m2(int8_t *base,vuint16m4_t bindex,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i8m2_m(vbool4_t mask,int8_t *base,vuint16m4_t bindex,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i8mf2(int8_t *base,vuint16m1_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint16m1_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i8mf4(int8_t *base,vuint16mf2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint16mf2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i8mf8(int8_t *base,vuint16mf4_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint16mf4_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u16m1(uint16_t *base,vuint16m1_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u16m2(uint16_t *base,vuint16m2_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint16m2_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u16mf2(uint16_t *base,vuint16mf2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u16mf4(uint16_t *base,vuint16mf4_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u32m1(uint32_t *base,vuint16mf2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint16mf2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u32m2(uint32_t *base,vuint16m1_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint16m1_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u32mf2(uint32_t *base,vuint16mf4_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint16mf4_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u64m1(uint64_t *base,vuint16mf4_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint16mf4_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u64m2(uint64_t *base,vuint16mf2_t bindex,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint16mf2_t bindex,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u8m1(uint8_t *base,vuint16m2_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint16m2_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u8m2(uint8_t *base,vuint16m4_t bindex,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u8m2_m(vbool4_t mask,uint8_t *base,vuint16m4_t bindex,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u8mf2(uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u8mf4(uint8_t *base,vuint16mf2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint16mf2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u8mf8(uint8_t *base,vuint16mf4_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,size_t vl)
{
    vsuxseg3ei16(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei16_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei16_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint16mf4_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,size_t vl)
{
    vsuxseg3ei16(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f16m1(float16_t *base,vuint32m2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f16m1_m(vbool16_t mask,float16_t *base,vuint32m2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f16m2(float16_t *base,vuint32m4_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f16m2_m(vbool8_t mask,float16_t *base,vuint32m4_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f16mf2(float16_t *base,vuint32m1_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint32m1_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f16mf4(float16_t *base,vuint32mf2_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint32mf2_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f32m1(float32_t *base,vuint32m1_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f32m1_m(vbool32_t mask,float32_t *base,vuint32m1_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f32m2(float32_t *base,vuint32m2_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f32m2_m(vbool16_t mask,float32_t *base,vuint32m2_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f32mf2(float32_t *base,vuint32mf2_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint32mf2_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f64m1(float64_t *base,vuint32mf2_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f64m1_m(vbool64_t mask,float64_t *base,vuint32mf2_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f64m2(float64_t *base,vuint32m1_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_f64m2_m(vbool32_t mask,float64_t *base,vuint32m1_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i16m1(int16_t *base,vuint32m2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i16m1_m(vbool16_t mask,int16_t *base,vuint32m2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i16m2(int16_t *base,vuint32m4_t bindex,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i16m2_m(vbool8_t mask,int16_t *base,vuint32m4_t bindex,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i16mf2(int16_t *base,vuint32m1_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint32m1_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i16mf4(int16_t *base,vuint32mf2_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint32mf2_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i32m1(int32_t *base,vuint32m1_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i32m1_m(vbool32_t mask,int32_t *base,vuint32m1_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i32m2(int32_t *base,vuint32m2_t bindex,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i32m2_m(vbool16_t mask,int32_t *base,vuint32m2_t bindex,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i32mf2(int32_t *base,vuint32mf2_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint32mf2_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i64m1(int64_t *base,vuint32mf2_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i64m1_m(vbool64_t mask,int64_t *base,vuint32mf2_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i64m2(int64_t *base,vuint32m1_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i64m2_m(vbool32_t mask,int64_t *base,vuint32m1_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i8m1(int8_t *base,vuint32m4_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i8m1_m(vbool8_t mask,int8_t *base,vuint32m4_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i8m2(int8_t *base,vuint32m8_t bindex,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i8m2_m(vbool4_t mask,int8_t *base,vuint32m8_t bindex,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i8mf2(int8_t *base,vuint32m2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint32m2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i8mf4(int8_t *base,vuint32m1_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint32m1_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i8mf8(int8_t *base,vuint32mf2_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint32mf2_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u16m1(uint16_t *base,vuint32m2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint32m2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u16m2(uint16_t *base,vuint32m4_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint32m4_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u16mf2(uint16_t *base,vuint32m1_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint32m1_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u16mf4(uint16_t *base,vuint32mf2_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint32mf2_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u32m1(uint32_t *base,vuint32m1_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u32m2(uint32_t *base,vuint32m2_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint32m2_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u32mf2(uint32_t *base,vuint32mf2_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u64m1(uint64_t *base,vuint32mf2_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint32mf2_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u64m2(uint64_t *base,vuint32m1_t bindex,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint32m1_t bindex,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u8m1(uint8_t *base,vuint32m4_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint32m4_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u8m2(uint8_t *base,vuint32m8_t bindex,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u8m2_m(vbool4_t mask,uint8_t *base,vuint32m8_t bindex,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u8mf2(uint8_t *base,vuint32m2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint32m2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u8mf4(uint8_t *base,vuint32m1_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint32m1_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u8mf8(uint8_t *base,vuint32mf2_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,size_t vl)
{
    vsuxseg3ei32(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei32_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei32_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint32mf2_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,size_t vl)
{
    vsuxseg3ei32(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f16m1(float16_t *base,vuint64m4_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f16m1_m(vbool16_t mask,float16_t *base,vuint64m4_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f16m2(float16_t *base,vuint64m8_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f16m2_m(vbool8_t mask,float16_t *base,vuint64m8_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f16mf2(float16_t *base,vuint64m2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint64m2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f16mf4(float16_t *base,vuint64m1_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint64m1_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f32m1(float32_t *base,vuint64m2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f32m1_m(vbool32_t mask,float32_t *base,vuint64m2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f32m2(float32_t *base,vuint64m4_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f32m2_m(vbool16_t mask,float32_t *base,vuint64m4_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f32mf2(float32_t *base,vuint64m1_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint64m1_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f64m1(float64_t *base,vuint64m1_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f64m1_m(vbool64_t mask,float64_t *base,vuint64m1_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f64m2(float64_t *base,vuint64m2_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_f64m2_m(vbool32_t mask,float64_t *base,vuint64m2_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i16m1(int16_t *base,vuint64m4_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i16m1_m(vbool16_t mask,int16_t *base,vuint64m4_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i16m2(int16_t *base,vuint64m8_t bindex,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i16m2_m(vbool8_t mask,int16_t *base,vuint64m8_t bindex,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i16mf2(int16_t *base,vuint64m2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint64m2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i16mf4(int16_t *base,vuint64m1_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint64m1_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i32m1(int32_t *base,vuint64m2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i32m1_m(vbool32_t mask,int32_t *base,vuint64m2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i32m2(int32_t *base,vuint64m4_t bindex,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i32m2_m(vbool16_t mask,int32_t *base,vuint64m4_t bindex,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i32mf2(int32_t *base,vuint64m1_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint64m1_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i64m1(int64_t *base,vuint64m1_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i64m1_m(vbool64_t mask,int64_t *base,vuint64m1_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i64m2(int64_t *base,vuint64m2_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i64m2_m(vbool32_t mask,int64_t *base,vuint64m2_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i8m1(int8_t *base,vuint64m8_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i8m1_m(vbool8_t mask,int8_t *base,vuint64m8_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i8mf2(int8_t *base,vuint64m4_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint64m4_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i8mf4(int8_t *base,vuint64m2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint64m2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i8mf8(int8_t *base,vuint64m1_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint64m1_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u16m1(uint16_t *base,vuint64m4_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint64m4_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u16m2(uint16_t *base,vuint64m8_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint64m8_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u16mf2(uint16_t *base,vuint64m2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint64m2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u16mf4(uint16_t *base,vuint64m1_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint64m1_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u32m1(uint32_t *base,vuint64m2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint64m2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u32m2(uint32_t *base,vuint64m4_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint64m4_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u32mf2(uint32_t *base,vuint64m1_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint64m1_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u64m1(uint64_t *base,vuint64m1_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u64m2(uint64_t *base,vuint64m2_t bindex,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint64m2_t bindex,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u8m1(uint8_t *base,vuint64m8_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint64m8_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u8mf2(uint8_t *base,vuint64m4_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint64m4_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u8mf4(uint8_t *base,vuint64m2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint64m2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u8mf8(uint8_t *base,vuint64m1_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,size_t vl)
{
    vsuxseg3ei64(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei64_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei64_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint64m1_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,size_t vl)
{
    vsuxseg3ei64(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f16m1(float16_t *base,vuint8mf2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f16m1_m(vbool16_t mask,float16_t *base,vuint8mf2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f16m2(float16_t *base,vuint8m1_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f16m2_m(vbool8_t mask,float16_t *base,vuint8m1_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f16mf2(float16_t *base,vuint8mf4_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint8mf4_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f16mf4(float16_t *base,vuint8mf8_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint8mf8_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f32m1(float32_t *base,vuint8mf4_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f32m1_m(vbool32_t mask,float32_t *base,vuint8mf4_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f32m2(float32_t *base,vuint8mf2_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f32m2_m(vbool16_t mask,float32_t *base,vuint8mf2_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f32mf2(float32_t *base,vuint8mf8_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint8mf8_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f64m1(float64_t *base,vuint8mf8_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f64m1_m(vbool64_t mask,float64_t *base,vuint8mf8_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f64m2(float64_t *base,vuint8mf4_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_f64m2_m(vbool32_t mask,float64_t *base,vuint8mf4_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i16m1(int16_t *base,vuint8mf2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i16m1_m(vbool16_t mask,int16_t *base,vuint8mf2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i16m2(int16_t *base,vuint8m1_t bindex,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i16m2_m(vbool8_t mask,int16_t *base,vuint8m1_t bindex,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i16mf2(int16_t *base,vuint8mf4_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint8mf4_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i16mf4(int16_t *base,vuint8mf8_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint8mf8_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i32m1(int32_t *base,vuint8mf4_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i32m1_m(vbool32_t mask,int32_t *base,vuint8mf4_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i32m2(int32_t *base,vuint8mf2_t bindex,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i32m2_m(vbool16_t mask,int32_t *base,vuint8mf2_t bindex,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i32mf2(int32_t *base,vuint8mf8_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint8mf8_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i64m1(int64_t *base,vuint8mf8_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i64m1_m(vbool64_t mask,int64_t *base,vuint8mf8_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i64m2(int64_t *base,vuint8mf4_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i64m2_m(vbool32_t mask,int64_t *base,vuint8mf4_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i8m1(int8_t *base,vuint8m1_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i8m1_m(vbool8_t mask,int8_t *base,vuint8m1_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i8m2(int8_t *base,vuint8m2_t bindex,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i8m2_m(vbool4_t mask,int8_t *base,vuint8m2_t bindex,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i8mf2(int8_t *base,vuint8mf2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint8mf2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i8mf4(int8_t *base,vuint8mf4_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint8mf4_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i8mf8(int8_t *base,vuint8mf8_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint8mf8_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u16m1(uint16_t *base,vuint8mf2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint8mf2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u16m2(uint16_t *base,vuint8m1_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint8m1_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u16mf2(uint16_t *base,vuint8mf4_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint8mf4_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u16mf4(uint16_t *base,vuint8mf8_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint8mf8_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u32m1(uint32_t *base,vuint8mf4_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint8mf4_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u32m2(uint32_t *base,vuint8mf2_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint8mf2_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u32mf2(uint32_t *base,vuint8mf8_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint8mf8_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u64m1(uint64_t *base,vuint8mf8_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint8mf8_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u64m2(uint64_t *base,vuint8mf4_t bindex,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint8mf4_t bindex,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u8m1(uint8_t *base,vuint8m1_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint8m1_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u8m2(uint8_t *base,vuint8m2_t bindex,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u8m2_m(vbool4_t mask,uint8_t *base,vuint8m2_t bindex,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u8mf2(uint8_t *base,vuint8mf2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u8mf4(uint8_t *base,vuint8mf4_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u8mf8(uint8_t *base,vuint8mf8_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,size_t vl)
{
    vsuxseg3ei8(base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg3ei8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg3ei8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,size_t vl)
{
    vsuxseg3ei8(mask, base, bindex, v0, v1, v2, vl);
}


/*
** test0_vsuxseg4ei16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f16m1(float16_t *base,vuint16m1_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f16m1_m(vbool16_t mask,float16_t *base,vuint16m1_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f16m2(float16_t *base,vuint16m2_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,vfloat16m2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f16m2_m(vbool8_t mask,float16_t *base,vuint16m2_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,vfloat16m2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f16mf2(float16_t *base,vuint16mf2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint16mf2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f16mf4(float16_t *base,vuint16mf4_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint16mf4_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f32m1(float32_t *base,vuint16mf2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f32m1_m(vbool32_t mask,float32_t *base,vuint16mf2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f32m2(float32_t *base,vuint16m1_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,vfloat32m2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f32m2_m(vbool16_t mask,float32_t *base,vuint16m1_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,vfloat32m2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f32mf2(float32_t *base,vuint16mf4_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint16mf4_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f64m1(float64_t *base,vuint16mf4_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f64m1_m(vbool64_t mask,float64_t *base,vuint16mf4_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f64m2(float64_t *base,vuint16mf2_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,vfloat64m2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_f64m2_m(vbool32_t mask,float64_t *base,vuint16mf2_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,vfloat64m2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i16m1(int16_t *base,vuint16m1_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i16m1_m(vbool16_t mask,int16_t *base,vuint16m1_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i16m2(int16_t *base,vuint16m2_t bindex,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,vint16m2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i16m2_m(vbool8_t mask,int16_t *base,vuint16m2_t bindex,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,vint16m2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i16mf2(int16_t *base,vuint16mf2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint16mf2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i16mf4(int16_t *base,vuint16mf4_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint16mf4_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i32m1(int32_t *base,vuint16mf2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i32m1_m(vbool32_t mask,int32_t *base,vuint16mf2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i32m2(int32_t *base,vuint16m1_t bindex,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,vint32m2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i32m2_m(vbool16_t mask,int32_t *base,vuint16m1_t bindex,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,vint32m2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i32mf2(int32_t *base,vuint16mf4_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint16mf4_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i64m1(int64_t *base,vuint16mf4_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i64m1_m(vbool64_t mask,int64_t *base,vuint16mf4_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i64m2(int64_t *base,vuint16mf2_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,vint64m2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i64m2_m(vbool32_t mask,int64_t *base,vuint16mf2_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,vint64m2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i8m1(int8_t *base,vuint16m2_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i8m1_m(vbool8_t mask,int8_t *base,vuint16m2_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i8m2(int8_t *base,vuint16m4_t bindex,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,vint8m2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i8m2_m(vbool4_t mask,int8_t *base,vuint16m4_t bindex,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,vint8m2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i8mf2(int8_t *base,vuint16m1_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint16m1_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i8mf4(int8_t *base,vuint16mf2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint16mf2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i8mf8(int8_t *base,vuint16mf4_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint16mf4_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u16m1(uint16_t *base,vuint16m1_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u16m2(uint16_t *base,vuint16m2_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,vuint16m2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint16m2_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,vuint16m2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u16mf2(uint16_t *base,vuint16mf2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u16mf4(uint16_t *base,vuint16mf4_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u32m1(uint32_t *base,vuint16mf2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint16mf2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u32m2(uint32_t *base,vuint16m1_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,vuint32m2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint16m1_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,vuint32m2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u32mf2(uint32_t *base,vuint16mf4_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint16mf4_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u64m1(uint64_t *base,vuint16mf4_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint16mf4_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u64m2(uint64_t *base,vuint16mf2_t bindex,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,vuint64m2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint16mf2_t bindex,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,vuint64m2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u8m1(uint8_t *base,vuint16m2_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint16m2_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u8m2(uint8_t *base,vuint16m4_t bindex,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,vuint8m2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u8m2_m(vbool4_t mask,uint8_t *base,vuint16m4_t bindex,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,vuint8m2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u8mf2(uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u8mf4(uint8_t *base,vuint16mf2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint16mf2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u8mf8(uint8_t *base,vuint16mf4_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,size_t vl)
{
    vsuxseg4ei16(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei16_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei16_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint16mf4_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,size_t vl)
{
    vsuxseg4ei16(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f16m1(float16_t *base,vuint32m2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f16m1_m(vbool16_t mask,float16_t *base,vuint32m2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f16m2(float16_t *base,vuint32m4_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,vfloat16m2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f16m2_m(vbool8_t mask,float16_t *base,vuint32m4_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,vfloat16m2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f16mf2(float16_t *base,vuint32m1_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint32m1_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f16mf4(float16_t *base,vuint32mf2_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint32mf2_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f32m1(float32_t *base,vuint32m1_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f32m1_m(vbool32_t mask,float32_t *base,vuint32m1_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f32m2(float32_t *base,vuint32m2_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,vfloat32m2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f32m2_m(vbool16_t mask,float32_t *base,vuint32m2_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,vfloat32m2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f32mf2(float32_t *base,vuint32mf2_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint32mf2_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f64m1(float64_t *base,vuint32mf2_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f64m1_m(vbool64_t mask,float64_t *base,vuint32mf2_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f64m2(float64_t *base,vuint32m1_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,vfloat64m2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_f64m2_m(vbool32_t mask,float64_t *base,vuint32m1_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,vfloat64m2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i16m1(int16_t *base,vuint32m2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i16m1_m(vbool16_t mask,int16_t *base,vuint32m2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i16m2(int16_t *base,vuint32m4_t bindex,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,vint16m2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i16m2_m(vbool8_t mask,int16_t *base,vuint32m4_t bindex,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,vint16m2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i16mf2(int16_t *base,vuint32m1_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint32m1_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i16mf4(int16_t *base,vuint32mf2_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint32mf2_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i32m1(int32_t *base,vuint32m1_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i32m1_m(vbool32_t mask,int32_t *base,vuint32m1_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i32m2(int32_t *base,vuint32m2_t bindex,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,vint32m2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i32m2_m(vbool16_t mask,int32_t *base,vuint32m2_t bindex,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,vint32m2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i32mf2(int32_t *base,vuint32mf2_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint32mf2_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i64m1(int64_t *base,vuint32mf2_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i64m1_m(vbool64_t mask,int64_t *base,vuint32mf2_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i64m2(int64_t *base,vuint32m1_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,vint64m2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i64m2_m(vbool32_t mask,int64_t *base,vuint32m1_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,vint64m2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i8m1(int8_t *base,vuint32m4_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i8m1_m(vbool8_t mask,int8_t *base,vuint32m4_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i8m2(int8_t *base,vuint32m8_t bindex,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,vint8m2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i8m2_m(vbool4_t mask,int8_t *base,vuint32m8_t bindex,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,vint8m2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i8mf2(int8_t *base,vuint32m2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint32m2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i8mf4(int8_t *base,vuint32m1_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint32m1_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i8mf8(int8_t *base,vuint32mf2_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint32mf2_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u16m1(uint16_t *base,vuint32m2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint32m2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u16m2(uint16_t *base,vuint32m4_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,vuint16m2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint32m4_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,vuint16m2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u16mf2(uint16_t *base,vuint32m1_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint32m1_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u16mf4(uint16_t *base,vuint32mf2_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint32mf2_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u32m1(uint32_t *base,vuint32m1_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u32m2(uint32_t *base,vuint32m2_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,vuint32m2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint32m2_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,vuint32m2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u32mf2(uint32_t *base,vuint32mf2_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u64m1(uint64_t *base,vuint32mf2_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint32mf2_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u64m2(uint64_t *base,vuint32m1_t bindex,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,vuint64m2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint32m1_t bindex,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,vuint64m2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u8m1(uint8_t *base,vuint32m4_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint32m4_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u8m2(uint8_t *base,vuint32m8_t bindex,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,vuint8m2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u8m2_m(vbool4_t mask,uint8_t *base,vuint32m8_t bindex,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,vuint8m2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u8mf2(uint8_t *base,vuint32m2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint32m2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u8mf4(uint8_t *base,vuint32m1_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint32m1_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u8mf8(uint8_t *base,vuint32mf2_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,size_t vl)
{
    vsuxseg4ei32(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei32_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei32_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint32mf2_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,size_t vl)
{
    vsuxseg4ei32(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f16m1(float16_t *base,vuint64m4_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f16m1_m(vbool16_t mask,float16_t *base,vuint64m4_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f16m2(float16_t *base,vuint64m8_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,vfloat16m2_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f16m2_m(vbool8_t mask,float16_t *base,vuint64m8_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,vfloat16m2_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f16mf2(float16_t *base,vuint64m2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint64m2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f16mf4(float16_t *base,vuint64m1_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint64m1_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f32m1(float32_t *base,vuint64m2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f32m1_m(vbool32_t mask,float32_t *base,vuint64m2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f32m2(float32_t *base,vuint64m4_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,vfloat32m2_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f32m2_m(vbool16_t mask,float32_t *base,vuint64m4_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,vfloat32m2_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f32mf2(float32_t *base,vuint64m1_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint64m1_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f64m1(float64_t *base,vuint64m1_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f64m1_m(vbool64_t mask,float64_t *base,vuint64m1_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f64m2(float64_t *base,vuint64m2_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,vfloat64m2_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_f64m2_m(vbool32_t mask,float64_t *base,vuint64m2_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,vfloat64m2_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i16m1(int16_t *base,vuint64m4_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i16m1_m(vbool16_t mask,int16_t *base,vuint64m4_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i16m2(int16_t *base,vuint64m8_t bindex,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,vint16m2_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i16m2_m(vbool8_t mask,int16_t *base,vuint64m8_t bindex,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,vint16m2_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i16mf2(int16_t *base,vuint64m2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint64m2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i16mf4(int16_t *base,vuint64m1_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint64m1_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i32m1(int32_t *base,vuint64m2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i32m1_m(vbool32_t mask,int32_t *base,vuint64m2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i32m2(int32_t *base,vuint64m4_t bindex,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,vint32m2_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i32m2_m(vbool16_t mask,int32_t *base,vuint64m4_t bindex,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,vint32m2_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i32mf2(int32_t *base,vuint64m1_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint64m1_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i64m1(int64_t *base,vuint64m1_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i64m1_m(vbool64_t mask,int64_t *base,vuint64m1_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i64m2(int64_t *base,vuint64m2_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,vint64m2_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i64m2_m(vbool32_t mask,int64_t *base,vuint64m2_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,vint64m2_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i8m1(int8_t *base,vuint64m8_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i8m1_m(vbool8_t mask,int8_t *base,vuint64m8_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i8mf2(int8_t *base,vuint64m4_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint64m4_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i8mf4(int8_t *base,vuint64m2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint64m2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i8mf8(int8_t *base,vuint64m1_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint64m1_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u16m1(uint16_t *base,vuint64m4_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint64m4_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u16m2(uint16_t *base,vuint64m8_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,vuint16m2_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint64m8_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,vuint16m2_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u16mf2(uint16_t *base,vuint64m2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint64m2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u16mf4(uint16_t *base,vuint64m1_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint64m1_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u32m1(uint32_t *base,vuint64m2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint64m2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u32m2(uint32_t *base,vuint64m4_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,vuint32m2_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint64m4_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,vuint32m2_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u32mf2(uint32_t *base,vuint64m1_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint64m1_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u64m1(uint64_t *base,vuint64m1_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u64m2(uint64_t *base,vuint64m2_t bindex,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,vuint64m2_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint64m2_t bindex,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,vuint64m2_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u8m1(uint8_t *base,vuint64m8_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint64m8_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u8mf2(uint8_t *base,vuint64m4_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint64m4_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u8mf4(uint8_t *base,vuint64m2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint64m2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u8mf8(uint8_t *base,vuint64m1_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,size_t vl)
{
    vsuxseg4ei64(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei64_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei64_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint64m1_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,size_t vl)
{
    vsuxseg4ei64(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f16m1(float16_t *base,vuint8mf2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f16m1_m(vbool16_t mask,float16_t *base,vuint8mf2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f16m2(float16_t *base,vuint8m1_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,vfloat16m2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f16m2_m(vbool8_t mask,float16_t *base,vuint8m1_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,vfloat16m2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f16mf2(float16_t *base,vuint8mf4_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint8mf4_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f16mf4(float16_t *base,vuint8mf8_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint8mf8_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f32m1(float32_t *base,vuint8mf4_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f32m1_m(vbool32_t mask,float32_t *base,vuint8mf4_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f32m2(float32_t *base,vuint8mf2_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,vfloat32m2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f32m2_m(vbool16_t mask,float32_t *base,vuint8mf2_t bindex,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,vfloat32m2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f32mf2(float32_t *base,vuint8mf8_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint8mf8_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f64m1(float64_t *base,vuint8mf8_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f64m1_m(vbool64_t mask,float64_t *base,vuint8mf8_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f64m2(float64_t *base,vuint8mf4_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,vfloat64m2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_f64m2_m(vbool32_t mask,float64_t *base,vuint8mf4_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,vfloat64m2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i16m1(int16_t *base,vuint8mf2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i16m1_m(vbool16_t mask,int16_t *base,vuint8mf2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i16m2(int16_t *base,vuint8m1_t bindex,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,vint16m2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i16m2_m(vbool8_t mask,int16_t *base,vuint8m1_t bindex,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,vint16m2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i16mf2(int16_t *base,vuint8mf4_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint8mf4_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i16mf4(int16_t *base,vuint8mf8_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint8mf8_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i32m1(int32_t *base,vuint8mf4_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i32m1_m(vbool32_t mask,int32_t *base,vuint8mf4_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i32m2(int32_t *base,vuint8mf2_t bindex,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,vint32m2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i32m2_m(vbool16_t mask,int32_t *base,vuint8mf2_t bindex,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,vint32m2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i32mf2(int32_t *base,vuint8mf8_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint8mf8_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i64m1(int64_t *base,vuint8mf8_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i64m1_m(vbool64_t mask,int64_t *base,vuint8mf8_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i64m2(int64_t *base,vuint8mf4_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,vint64m2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i64m2_m(vbool32_t mask,int64_t *base,vuint8mf4_t bindex,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,vint64m2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i8m1(int8_t *base,vuint8m1_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i8m1_m(vbool8_t mask,int8_t *base,vuint8m1_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i8m2(int8_t *base,vuint8m2_t bindex,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,vint8m2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i8m2_m(vbool4_t mask,int8_t *base,vuint8m2_t bindex,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,vint8m2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i8mf2(int8_t *base,vuint8mf2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint8mf2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i8mf4(int8_t *base,vuint8mf4_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint8mf4_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i8mf8(int8_t *base,vuint8mf8_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint8mf8_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u16m1(uint16_t *base,vuint8mf2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint8mf2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u16m2(uint16_t *base,vuint8m1_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,vuint16m2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint8m1_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,vuint16m2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u16mf2(uint16_t *base,vuint8mf4_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint8mf4_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u16mf4(uint16_t *base,vuint8mf8_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint8mf8_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u32m1(uint32_t *base,vuint8mf4_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint8mf4_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u32m2(uint32_t *base,vuint8mf2_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,vuint32m2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint8mf2_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,vuint32m2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u32mf2(uint32_t *base,vuint8mf8_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint8mf8_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u64m1(uint64_t *base,vuint8mf8_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint8mf8_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u64m2(uint64_t *base,vuint8mf4_t bindex,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,vuint64m2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint8mf4_t bindex,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,vuint64m2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u8m1(uint8_t *base,vuint8m1_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint8m1_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u8m2(uint8_t *base,vuint8m2_t bindex,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,vuint8m2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u8m2_m(vbool4_t mask,uint8_t *base,vuint8m2_t bindex,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,vuint8m2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u8mf2(uint8_t *base,vuint8mf2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u8mf4(uint8_t *base,vuint8mf4_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u8mf8(uint8_t *base,vuint8mf8_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,size_t vl)
{
    vsuxseg4ei8(base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg4ei8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg4ei8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,size_t vl)
{
    vsuxseg4ei8(mask, base, bindex, v0, v1, v2, v3, vl);
}


/*
** test0_vsuxseg5ei16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_f16m1(float16_t *base,vuint16m1_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_f16m1_m(vbool16_t mask,float16_t *base,vuint16m1_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_f16mf2(float16_t *base,vuint16mf2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint16mf2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_f16mf4(float16_t *base,vuint16mf4_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint16mf4_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_f32m1(float32_t *base,vuint16mf2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_f32m1_m(vbool32_t mask,float32_t *base,vuint16mf2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_f32mf2(float32_t *base,vuint16mf4_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint16mf4_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_f64m1(float64_t *base,vuint16mf4_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_f64m1_m(vbool64_t mask,float64_t *base,vuint16mf4_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i16m1(int16_t *base,vuint16m1_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i16m1_m(vbool16_t mask,int16_t *base,vuint16m1_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i16mf2(int16_t *base,vuint16mf2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint16mf2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i16mf4(int16_t *base,vuint16mf4_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint16mf4_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i32m1(int32_t *base,vuint16mf2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i32m1_m(vbool32_t mask,int32_t *base,vuint16mf2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i32mf2(int32_t *base,vuint16mf4_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint16mf4_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i64m1(int64_t *base,vuint16mf4_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i64m1_m(vbool64_t mask,int64_t *base,vuint16mf4_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i8m1(int8_t *base,vuint16m2_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i8m1_m(vbool8_t mask,int8_t *base,vuint16m2_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i8mf2(int8_t *base,vuint16m1_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint16m1_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i8mf4(int8_t *base,vuint16mf2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint16mf2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i8mf8(int8_t *base,vuint16mf4_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint16mf4_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u16m1(uint16_t *base,vuint16m1_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u16mf2(uint16_t *base,vuint16mf2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u16mf4(uint16_t *base,vuint16mf4_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u32m1(uint32_t *base,vuint16mf2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint16mf2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u32mf2(uint32_t *base,vuint16mf4_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint16mf4_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u64m1(uint64_t *base,vuint16mf4_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint16mf4_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u8m1(uint8_t *base,vuint16m2_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint16m2_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u8mf2(uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u8mf4(uint8_t *base,vuint16mf2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint16mf2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u8mf8(uint8_t *base,vuint16mf4_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,size_t vl)
{
    vsuxseg5ei16(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei16_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei16_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint16mf4_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,size_t vl)
{
    vsuxseg5ei16(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_f16m1(float16_t *base,vuint32m2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_f16m1_m(vbool16_t mask,float16_t *base,vuint32m2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_f16mf2(float16_t *base,vuint32m1_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint32m1_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_f16mf4(float16_t *base,vuint32mf2_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint32mf2_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_f32m1(float32_t *base,vuint32m1_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_f32m1_m(vbool32_t mask,float32_t *base,vuint32m1_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_f32mf2(float32_t *base,vuint32mf2_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint32mf2_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_f64m1(float64_t *base,vuint32mf2_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_f64m1_m(vbool64_t mask,float64_t *base,vuint32mf2_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i16m1(int16_t *base,vuint32m2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i16m1_m(vbool16_t mask,int16_t *base,vuint32m2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i16mf2(int16_t *base,vuint32m1_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint32m1_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i16mf4(int16_t *base,vuint32mf2_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint32mf2_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i32m1(int32_t *base,vuint32m1_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i32m1_m(vbool32_t mask,int32_t *base,vuint32m1_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i32mf2(int32_t *base,vuint32mf2_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint32mf2_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i64m1(int64_t *base,vuint32mf2_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i64m1_m(vbool64_t mask,int64_t *base,vuint32mf2_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i8m1(int8_t *base,vuint32m4_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i8m1_m(vbool8_t mask,int8_t *base,vuint32m4_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i8mf2(int8_t *base,vuint32m2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint32m2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i8mf4(int8_t *base,vuint32m1_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint32m1_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i8mf8(int8_t *base,vuint32mf2_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint32mf2_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u16m1(uint16_t *base,vuint32m2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint32m2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u16mf2(uint16_t *base,vuint32m1_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint32m1_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u16mf4(uint16_t *base,vuint32mf2_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint32mf2_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u32m1(uint32_t *base,vuint32m1_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u32mf2(uint32_t *base,vuint32mf2_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u64m1(uint64_t *base,vuint32mf2_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint32mf2_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u8m1(uint8_t *base,vuint32m4_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint32m4_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u8mf2(uint8_t *base,vuint32m2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint32m2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u8mf4(uint8_t *base,vuint32m1_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint32m1_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u8mf8(uint8_t *base,vuint32mf2_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,size_t vl)
{
    vsuxseg5ei32(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei32_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei32_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint32mf2_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,size_t vl)
{
    vsuxseg5ei32(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_f16m1(float16_t *base,vuint64m4_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_f16m1_m(vbool16_t mask,float16_t *base,vuint64m4_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_f16mf2(float16_t *base,vuint64m2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint64m2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_f16mf4(float16_t *base,vuint64m1_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint64m1_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_f32m1(float32_t *base,vuint64m2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_f32m1_m(vbool32_t mask,float32_t *base,vuint64m2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_f32mf2(float32_t *base,vuint64m1_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint64m1_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_f64m1(float64_t *base,vuint64m1_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_f64m1_m(vbool64_t mask,float64_t *base,vuint64m1_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i16m1(int16_t *base,vuint64m4_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i16m1_m(vbool16_t mask,int16_t *base,vuint64m4_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i16mf2(int16_t *base,vuint64m2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint64m2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i16mf4(int16_t *base,vuint64m1_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint64m1_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i32m1(int32_t *base,vuint64m2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i32m1_m(vbool32_t mask,int32_t *base,vuint64m2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i32mf2(int32_t *base,vuint64m1_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint64m1_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i64m1(int64_t *base,vuint64m1_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i64m1_m(vbool64_t mask,int64_t *base,vuint64m1_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i8m1(int8_t *base,vuint64m8_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i8m1_m(vbool8_t mask,int8_t *base,vuint64m8_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i8mf2(int8_t *base,vuint64m4_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint64m4_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i8mf4(int8_t *base,vuint64m2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint64m2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i8mf8(int8_t *base,vuint64m1_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint64m1_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u16m1(uint16_t *base,vuint64m4_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint64m4_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u16mf2(uint16_t *base,vuint64m2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint64m2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u16mf4(uint16_t *base,vuint64m1_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint64m1_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u32m1(uint32_t *base,vuint64m2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint64m2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u32mf2(uint32_t *base,vuint64m1_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint64m1_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u64m1(uint64_t *base,vuint64m1_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u8m1(uint8_t *base,vuint64m8_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint64m8_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u8mf2(uint8_t *base,vuint64m4_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint64m4_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u8mf4(uint8_t *base,vuint64m2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint64m2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u8mf8(uint8_t *base,vuint64m1_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,size_t vl)
{
    vsuxseg5ei64(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei64_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei64_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint64m1_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,size_t vl)
{
    vsuxseg5ei64(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_f16m1(float16_t *base,vuint8mf2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_f16m1_m(vbool16_t mask,float16_t *base,vuint8mf2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_f16mf2(float16_t *base,vuint8mf4_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint8mf4_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_f16mf4(float16_t *base,vuint8mf8_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint8mf8_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_f32m1(float32_t *base,vuint8mf4_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_f32m1_m(vbool32_t mask,float32_t *base,vuint8mf4_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_f32mf2(float32_t *base,vuint8mf8_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint8mf8_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_f64m1(float64_t *base,vuint8mf8_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_f64m1_m(vbool64_t mask,float64_t *base,vuint8mf8_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i16m1(int16_t *base,vuint8mf2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i16m1_m(vbool16_t mask,int16_t *base,vuint8mf2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i16mf2(int16_t *base,vuint8mf4_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint8mf4_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i16mf4(int16_t *base,vuint8mf8_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint8mf8_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i32m1(int32_t *base,vuint8mf4_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i32m1_m(vbool32_t mask,int32_t *base,vuint8mf4_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i32mf2(int32_t *base,vuint8mf8_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint8mf8_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i64m1(int64_t *base,vuint8mf8_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i64m1_m(vbool64_t mask,int64_t *base,vuint8mf8_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i8m1(int8_t *base,vuint8m1_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i8m1_m(vbool8_t mask,int8_t *base,vuint8m1_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i8mf2(int8_t *base,vuint8mf2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint8mf2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i8mf4(int8_t *base,vuint8mf4_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint8mf4_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i8mf8(int8_t *base,vuint8mf8_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint8mf8_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u16m1(uint16_t *base,vuint8mf2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint8mf2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u16mf2(uint16_t *base,vuint8mf4_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint8mf4_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u16mf4(uint16_t *base,vuint8mf8_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint8mf8_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u32m1(uint32_t *base,vuint8mf4_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint8mf4_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u32mf2(uint32_t *base,vuint8mf8_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint8mf8_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u64m1(uint64_t *base,vuint8mf8_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint8mf8_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u8m1(uint8_t *base,vuint8m1_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint8m1_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u8mf2(uint8_t *base,vuint8mf2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u8mf4(uint8_t *base,vuint8mf4_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u8mf8(uint8_t *base,vuint8mf8_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,size_t vl)
{
    vsuxseg5ei8(base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg5ei8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg5ei8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,size_t vl)
{
    vsuxseg5ei8(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}


/*
** test0_vsuxseg6ei16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_f16m1(float16_t *base,vuint16m1_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_f16m1_m(vbool16_t mask,float16_t *base,vuint16m1_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_f16mf2(float16_t *base,vuint16mf2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint16mf2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_f16mf4(float16_t *base,vuint16mf4_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint16mf4_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_f32m1(float32_t *base,vuint16mf2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_f32m1_m(vbool32_t mask,float32_t *base,vuint16mf2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_f32mf2(float32_t *base,vuint16mf4_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint16mf4_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_f64m1(float64_t *base,vuint16mf4_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_f64m1_m(vbool64_t mask,float64_t *base,vuint16mf4_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i16m1(int16_t *base,vuint16m1_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i16m1_m(vbool16_t mask,int16_t *base,vuint16m1_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i16mf2(int16_t *base,vuint16mf2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint16mf2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i16mf4(int16_t *base,vuint16mf4_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint16mf4_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i32m1(int32_t *base,vuint16mf2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i32m1_m(vbool32_t mask,int32_t *base,vuint16mf2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i32mf2(int32_t *base,vuint16mf4_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint16mf4_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i64m1(int64_t *base,vuint16mf4_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i64m1_m(vbool64_t mask,int64_t *base,vuint16mf4_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i8m1(int8_t *base,vuint16m2_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i8m1_m(vbool8_t mask,int8_t *base,vuint16m2_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i8mf2(int8_t *base,vuint16m1_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint16m1_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i8mf4(int8_t *base,vuint16mf2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint16mf2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i8mf8(int8_t *base,vuint16mf4_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint16mf4_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u16m1(uint16_t *base,vuint16m1_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u16mf2(uint16_t *base,vuint16mf2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u16mf4(uint16_t *base,vuint16mf4_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u32m1(uint32_t *base,vuint16mf2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint16mf2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u32mf2(uint32_t *base,vuint16mf4_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint16mf4_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u64m1(uint64_t *base,vuint16mf4_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint16mf4_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u8m1(uint8_t *base,vuint16m2_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint16m2_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u8mf2(uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u8mf4(uint8_t *base,vuint16mf2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint16mf2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u8mf8(uint8_t *base,vuint16mf4_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,size_t vl)
{
    vsuxseg6ei16(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei16_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei16_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint16mf4_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,size_t vl)
{
    vsuxseg6ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_f16m1(float16_t *base,vuint32m2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_f16m1_m(vbool16_t mask,float16_t *base,vuint32m2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_f16mf2(float16_t *base,vuint32m1_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint32m1_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_f16mf4(float16_t *base,vuint32mf2_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint32mf2_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_f32m1(float32_t *base,vuint32m1_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_f32m1_m(vbool32_t mask,float32_t *base,vuint32m1_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_f32mf2(float32_t *base,vuint32mf2_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint32mf2_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_f64m1(float64_t *base,vuint32mf2_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_f64m1_m(vbool64_t mask,float64_t *base,vuint32mf2_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i16m1(int16_t *base,vuint32m2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i16m1_m(vbool16_t mask,int16_t *base,vuint32m2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i16mf2(int16_t *base,vuint32m1_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint32m1_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i16mf4(int16_t *base,vuint32mf2_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint32mf2_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i32m1(int32_t *base,vuint32m1_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i32m1_m(vbool32_t mask,int32_t *base,vuint32m1_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i32mf2(int32_t *base,vuint32mf2_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint32mf2_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i64m1(int64_t *base,vuint32mf2_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i64m1_m(vbool64_t mask,int64_t *base,vuint32mf2_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i8m1(int8_t *base,vuint32m4_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i8m1_m(vbool8_t mask,int8_t *base,vuint32m4_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i8mf2(int8_t *base,vuint32m2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint32m2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i8mf4(int8_t *base,vuint32m1_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint32m1_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i8mf8(int8_t *base,vuint32mf2_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint32mf2_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u16m1(uint16_t *base,vuint32m2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint32m2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u16mf2(uint16_t *base,vuint32m1_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint32m1_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u16mf4(uint16_t *base,vuint32mf2_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint32mf2_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u32m1(uint32_t *base,vuint32m1_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u32mf2(uint32_t *base,vuint32mf2_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u64m1(uint64_t *base,vuint32mf2_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint32mf2_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u8m1(uint8_t *base,vuint32m4_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint32m4_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u8mf2(uint8_t *base,vuint32m2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint32m2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u8mf4(uint8_t *base,vuint32m1_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint32m1_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u8mf8(uint8_t *base,vuint32mf2_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,size_t vl)
{
    vsuxseg6ei32(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei32_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei32_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint32mf2_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,size_t vl)
{
    vsuxseg6ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_f16m1(float16_t *base,vuint64m4_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_f16m1_m(vbool16_t mask,float16_t *base,vuint64m4_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_f16mf2(float16_t *base,vuint64m2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint64m2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_f16mf4(float16_t *base,vuint64m1_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint64m1_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_f32m1(float32_t *base,vuint64m2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_f32m1_m(vbool32_t mask,float32_t *base,vuint64m2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_f32mf2(float32_t *base,vuint64m1_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint64m1_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_f64m1(float64_t *base,vuint64m1_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_f64m1_m(vbool64_t mask,float64_t *base,vuint64m1_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i16m1(int16_t *base,vuint64m4_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i16m1_m(vbool16_t mask,int16_t *base,vuint64m4_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i16mf2(int16_t *base,vuint64m2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint64m2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i16mf4(int16_t *base,vuint64m1_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint64m1_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i32m1(int32_t *base,vuint64m2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i32m1_m(vbool32_t mask,int32_t *base,vuint64m2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i32mf2(int32_t *base,vuint64m1_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint64m1_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i64m1(int64_t *base,vuint64m1_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i64m1_m(vbool64_t mask,int64_t *base,vuint64m1_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i8m1(int8_t *base,vuint64m8_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i8m1_m(vbool8_t mask,int8_t *base,vuint64m8_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i8mf2(int8_t *base,vuint64m4_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint64m4_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i8mf4(int8_t *base,vuint64m2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint64m2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i8mf8(int8_t *base,vuint64m1_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint64m1_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u16m1(uint16_t *base,vuint64m4_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint64m4_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u16mf2(uint16_t *base,vuint64m2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint64m2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u16mf4(uint16_t *base,vuint64m1_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint64m1_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u32m1(uint32_t *base,vuint64m2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint64m2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u32mf2(uint32_t *base,vuint64m1_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint64m1_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u64m1(uint64_t *base,vuint64m1_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u8m1(uint8_t *base,vuint64m8_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint64m8_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u8mf2(uint8_t *base,vuint64m4_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint64m4_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u8mf4(uint8_t *base,vuint64m2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint64m2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u8mf8(uint8_t *base,vuint64m1_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,size_t vl)
{
    vsuxseg6ei64(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei64_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei64_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint64m1_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,size_t vl)
{
    vsuxseg6ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_f16m1(float16_t *base,vuint8mf2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_f16m1_m(vbool16_t mask,float16_t *base,vuint8mf2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_f16mf2(float16_t *base,vuint8mf4_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint8mf4_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_f16mf4(float16_t *base,vuint8mf8_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint8mf8_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_f32m1(float32_t *base,vuint8mf4_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_f32m1_m(vbool32_t mask,float32_t *base,vuint8mf4_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_f32mf2(float32_t *base,vuint8mf8_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint8mf8_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_f64m1(float64_t *base,vuint8mf8_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_f64m1_m(vbool64_t mask,float64_t *base,vuint8mf8_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i16m1(int16_t *base,vuint8mf2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i16m1_m(vbool16_t mask,int16_t *base,vuint8mf2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i16mf2(int16_t *base,vuint8mf4_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint8mf4_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i16mf4(int16_t *base,vuint8mf8_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint8mf8_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i32m1(int32_t *base,vuint8mf4_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i32m1_m(vbool32_t mask,int32_t *base,vuint8mf4_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i32mf2(int32_t *base,vuint8mf8_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint8mf8_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i64m1(int64_t *base,vuint8mf8_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i64m1_m(vbool64_t mask,int64_t *base,vuint8mf8_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i8m1(int8_t *base,vuint8m1_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i8m1_m(vbool8_t mask,int8_t *base,vuint8m1_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i8mf2(int8_t *base,vuint8mf2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint8mf2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i8mf4(int8_t *base,vuint8mf4_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint8mf4_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i8mf8(int8_t *base,vuint8mf8_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint8mf8_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u16m1(uint16_t *base,vuint8mf2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint8mf2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u16mf2(uint16_t *base,vuint8mf4_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint8mf4_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u16mf4(uint16_t *base,vuint8mf8_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint8mf8_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u32m1(uint32_t *base,vuint8mf4_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint8mf4_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u32mf2(uint32_t *base,vuint8mf8_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint8mf8_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u64m1(uint64_t *base,vuint8mf8_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint8mf8_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u8m1(uint8_t *base,vuint8m1_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint8m1_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u8mf2(uint8_t *base,vuint8mf2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u8mf4(uint8_t *base,vuint8mf4_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u8mf8(uint8_t *base,vuint8mf8_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,size_t vl)
{
    vsuxseg6ei8(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg6ei8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg6ei8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,size_t vl)
{
    vsuxseg6ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}


/*
** test0_vsuxseg7ei16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_f16m1(float16_t *base,vuint16m1_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_f16m1_m(vbool16_t mask,float16_t *base,vuint16m1_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_f16mf2(float16_t *base,vuint16mf2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint16mf2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_f16mf4(float16_t *base,vuint16mf4_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint16mf4_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_f32m1(float32_t *base,vuint16mf2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_f32m1_m(vbool32_t mask,float32_t *base,vuint16mf2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_f32mf2(float32_t *base,vuint16mf4_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint16mf4_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_f64m1(float64_t *base,vuint16mf4_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_f64m1_m(vbool64_t mask,float64_t *base,vuint16mf4_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i16m1(int16_t *base,vuint16m1_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i16m1_m(vbool16_t mask,int16_t *base,vuint16m1_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i16mf2(int16_t *base,vuint16mf2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint16mf2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i16mf4(int16_t *base,vuint16mf4_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint16mf4_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i32m1(int32_t *base,vuint16mf2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i32m1_m(vbool32_t mask,int32_t *base,vuint16mf2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i32mf2(int32_t *base,vuint16mf4_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint16mf4_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i64m1(int64_t *base,vuint16mf4_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i64m1_m(vbool64_t mask,int64_t *base,vuint16mf4_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i8m1(int8_t *base,vuint16m2_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i8m1_m(vbool8_t mask,int8_t *base,vuint16m2_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i8mf2(int8_t *base,vuint16m1_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint16m1_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i8mf4(int8_t *base,vuint16mf2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint16mf2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i8mf8(int8_t *base,vuint16mf4_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint16mf4_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u16m1(uint16_t *base,vuint16m1_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u16mf2(uint16_t *base,vuint16mf2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u16mf4(uint16_t *base,vuint16mf4_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u32m1(uint32_t *base,vuint16mf2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint16mf2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u32mf2(uint32_t *base,vuint16mf4_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint16mf4_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u64m1(uint64_t *base,vuint16mf4_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint16mf4_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u8m1(uint8_t *base,vuint16m2_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint16m2_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u8mf2(uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u8mf4(uint8_t *base,vuint16mf2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint16mf2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u8mf8(uint8_t *base,vuint16mf4_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,size_t vl)
{
    vsuxseg7ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei16_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei16_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint16mf4_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,size_t vl)
{
    vsuxseg7ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_f16m1(float16_t *base,vuint32m2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_f16m1_m(vbool16_t mask,float16_t *base,vuint32m2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_f16mf2(float16_t *base,vuint32m1_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint32m1_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_f16mf4(float16_t *base,vuint32mf2_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint32mf2_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_f32m1(float32_t *base,vuint32m1_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_f32m1_m(vbool32_t mask,float32_t *base,vuint32m1_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_f32mf2(float32_t *base,vuint32mf2_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint32mf2_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_f64m1(float64_t *base,vuint32mf2_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_f64m1_m(vbool64_t mask,float64_t *base,vuint32mf2_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i16m1(int16_t *base,vuint32m2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i16m1_m(vbool16_t mask,int16_t *base,vuint32m2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i16mf2(int16_t *base,vuint32m1_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint32m1_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i16mf4(int16_t *base,vuint32mf2_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint32mf2_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i32m1(int32_t *base,vuint32m1_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i32m1_m(vbool32_t mask,int32_t *base,vuint32m1_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i32mf2(int32_t *base,vuint32mf2_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint32mf2_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i64m1(int64_t *base,vuint32mf2_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i64m1_m(vbool64_t mask,int64_t *base,vuint32mf2_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i8m1(int8_t *base,vuint32m4_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i8m1_m(vbool8_t mask,int8_t *base,vuint32m4_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i8mf2(int8_t *base,vuint32m2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint32m2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i8mf4(int8_t *base,vuint32m1_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint32m1_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i8mf8(int8_t *base,vuint32mf2_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint32mf2_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u16m1(uint16_t *base,vuint32m2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint32m2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u16mf2(uint16_t *base,vuint32m1_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint32m1_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u16mf4(uint16_t *base,vuint32mf2_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint32mf2_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u32m1(uint32_t *base,vuint32m1_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u32mf2(uint32_t *base,vuint32mf2_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u64m1(uint64_t *base,vuint32mf2_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint32mf2_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u8m1(uint8_t *base,vuint32m4_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint32m4_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u8mf2(uint8_t *base,vuint32m2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint32m2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u8mf4(uint8_t *base,vuint32m1_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint32m1_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u8mf8(uint8_t *base,vuint32mf2_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,size_t vl)
{
    vsuxseg7ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei32_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei32_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint32mf2_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,size_t vl)
{
    vsuxseg7ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_f16m1(float16_t *base,vuint64m4_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_f16m1_m(vbool16_t mask,float16_t *base,vuint64m4_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_f16mf2(float16_t *base,vuint64m2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint64m2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_f16mf4(float16_t *base,vuint64m1_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint64m1_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_f32m1(float32_t *base,vuint64m2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_f32m1_m(vbool32_t mask,float32_t *base,vuint64m2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_f32mf2(float32_t *base,vuint64m1_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint64m1_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_f64m1(float64_t *base,vuint64m1_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_f64m1_m(vbool64_t mask,float64_t *base,vuint64m1_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i16m1(int16_t *base,vuint64m4_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i16m1_m(vbool16_t mask,int16_t *base,vuint64m4_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i16mf2(int16_t *base,vuint64m2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint64m2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i16mf4(int16_t *base,vuint64m1_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint64m1_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i32m1(int32_t *base,vuint64m2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i32m1_m(vbool32_t mask,int32_t *base,vuint64m2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i32mf2(int32_t *base,vuint64m1_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint64m1_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i64m1(int64_t *base,vuint64m1_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i64m1_m(vbool64_t mask,int64_t *base,vuint64m1_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i8m1(int8_t *base,vuint64m8_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i8m1_m(vbool8_t mask,int8_t *base,vuint64m8_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i8mf2(int8_t *base,vuint64m4_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint64m4_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i8mf4(int8_t *base,vuint64m2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint64m2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i8mf8(int8_t *base,vuint64m1_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint64m1_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u16m1(uint16_t *base,vuint64m4_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint64m4_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u16mf2(uint16_t *base,vuint64m2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint64m2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u16mf4(uint16_t *base,vuint64m1_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint64m1_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u32m1(uint32_t *base,vuint64m2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint64m2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u32mf2(uint32_t *base,vuint64m1_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint64m1_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u64m1(uint64_t *base,vuint64m1_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u8m1(uint8_t *base,vuint64m8_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint64m8_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u8mf2(uint8_t *base,vuint64m4_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint64m4_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u8mf4(uint8_t *base,vuint64m2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint64m2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u8mf8(uint8_t *base,vuint64m1_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,size_t vl)
{
    vsuxseg7ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei64_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei64_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint64m1_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,size_t vl)
{
    vsuxseg7ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_f16m1(float16_t *base,vuint8mf2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_f16m1_m(vbool16_t mask,float16_t *base,vuint8mf2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_f16mf2(float16_t *base,vuint8mf4_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint8mf4_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_f16mf4(float16_t *base,vuint8mf8_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint8mf8_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_f32m1(float32_t *base,vuint8mf4_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_f32m1_m(vbool32_t mask,float32_t *base,vuint8mf4_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_f32mf2(float32_t *base,vuint8mf8_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint8mf8_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_f64m1(float64_t *base,vuint8mf8_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_f64m1_m(vbool64_t mask,float64_t *base,vuint8mf8_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i16m1(int16_t *base,vuint8mf2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i16m1_m(vbool16_t mask,int16_t *base,vuint8mf2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i16mf2(int16_t *base,vuint8mf4_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint8mf4_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i16mf4(int16_t *base,vuint8mf8_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint8mf8_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i32m1(int32_t *base,vuint8mf4_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i32m1_m(vbool32_t mask,int32_t *base,vuint8mf4_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i32mf2(int32_t *base,vuint8mf8_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint8mf8_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i64m1(int64_t *base,vuint8mf8_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i64m1_m(vbool64_t mask,int64_t *base,vuint8mf8_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i8m1(int8_t *base,vuint8m1_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i8m1_m(vbool8_t mask,int8_t *base,vuint8m1_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i8mf2(int8_t *base,vuint8mf2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint8mf2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i8mf4(int8_t *base,vuint8mf4_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint8mf4_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i8mf8(int8_t *base,vuint8mf8_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint8mf8_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u16m1(uint16_t *base,vuint8mf2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint8mf2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u16mf2(uint16_t *base,vuint8mf4_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint8mf4_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u16mf4(uint16_t *base,vuint8mf8_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint8mf8_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u32m1(uint32_t *base,vuint8mf4_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint8mf4_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u32mf2(uint32_t *base,vuint8mf8_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint8mf8_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u64m1(uint64_t *base,vuint8mf8_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint8mf8_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u8m1(uint8_t *base,vuint8m1_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint8m1_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u8mf2(uint8_t *base,vuint8mf2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u8mf4(uint8_t *base,vuint8mf4_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u8mf8(uint8_t *base,vuint8mf8_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,size_t vl)
{
    vsuxseg7ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg7ei8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg7ei8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,size_t vl)
{
    vsuxseg7ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}


/*
** test0_vsuxseg8ei16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_f16m1(float16_t *base,vuint16m1_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,vfloat16m1_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_f16m1_m(vbool16_t mask,float16_t *base,vuint16m1_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,vfloat16m1_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_f16mf2(float16_t *base,vuint16mf2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint16mf2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_f16mf4(float16_t *base,vuint16mf4_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,vfloat16mf4_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint16mf4_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,vfloat16mf4_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_f32m1(float32_t *base,vuint16mf2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,vfloat32m1_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_f32m1_m(vbool32_t mask,float32_t *base,vuint16mf2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,vfloat32m1_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_f32mf2(float32_t *base,vuint16mf4_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,vfloat32mf2_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint16mf4_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,vfloat32mf2_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_f64m1(float64_t *base,vuint16mf4_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,vfloat64m1_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_f64m1_m(vbool64_t mask,float64_t *base,vuint16mf4_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,vfloat64m1_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i16m1(int16_t *base,vuint16m1_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,vint16m1_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i16m1_m(vbool16_t mask,int16_t *base,vuint16m1_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,vint16m1_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i16mf2(int16_t *base,vuint16mf2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,vint16mf2_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint16mf2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,vint16mf2_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i16mf4(int16_t *base,vuint16mf4_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,vint16mf4_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint16mf4_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,vint16mf4_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i32m1(int32_t *base,vuint16mf2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,vint32m1_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i32m1_m(vbool32_t mask,int32_t *base,vuint16mf2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,vint32m1_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i32mf2(int32_t *base,vuint16mf4_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,vint32mf2_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint16mf4_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,vint32mf2_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i64m1(int64_t *base,vuint16mf4_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,vint64m1_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i64m1_m(vbool64_t mask,int64_t *base,vuint16mf4_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,vint64m1_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i8m1(int8_t *base,vuint16m2_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,vint8m1_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i8m1_m(vbool8_t mask,int8_t *base,vuint16m2_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,vint8m1_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i8mf2(int8_t *base,vuint16m1_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,vint8mf2_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint16m1_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,vint8mf2_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i8mf4(int8_t *base,vuint16mf2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,vint8mf4_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint16mf2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,vint8mf4_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i8mf8(int8_t *base,vuint16mf4_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,vint8mf8_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint16mf4_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,vint8mf8_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u16m1(uint16_t *base,vuint16m1_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,vuint16m1_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,vuint16m1_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u16mf2(uint16_t *base,vuint16mf2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,vuint16mf2_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,vuint16mf2_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u16mf4(uint16_t *base,vuint16mf4_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,vuint16mf4_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,vuint16mf4_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u32m1(uint32_t *base,vuint16mf2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,vuint32m1_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint16mf2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,vuint32m1_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u32mf2(uint32_t *base,vuint16mf4_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,vuint32mf2_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint16mf4_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,vuint32mf2_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u64m1(uint64_t *base,vuint16mf4_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,vuint64m1_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint16mf4_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,vuint64m1_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u8m1(uint8_t *base,vuint16m2_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,vuint8m1_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint16m2_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,vuint8m1_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u8mf2(uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,vuint8mf2_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,vuint8mf2_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u8mf4(uint8_t *base,vuint16mf2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,vuint8mf4_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint16mf2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,vuint8mf4_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u8mf8(uint8_t *base,vuint16mf4_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,vuint8mf8_t v7,size_t vl)
{
    vsuxseg8ei16(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei16_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei16_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint16mf4_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,vuint8mf8_t v7,size_t vl)
{
    vsuxseg8ei16(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_f16m1(float16_t *base,vuint32m2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,vfloat16m1_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_f16m1_m(vbool16_t mask,float16_t *base,vuint32m2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,vfloat16m1_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_f16mf2(float16_t *base,vuint32m1_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint32m1_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_f16mf4(float16_t *base,vuint32mf2_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,vfloat16mf4_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint32mf2_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,vfloat16mf4_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_f32m1(float32_t *base,vuint32m1_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,vfloat32m1_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_f32m1_m(vbool32_t mask,float32_t *base,vuint32m1_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,vfloat32m1_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_f32mf2(float32_t *base,vuint32mf2_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,vfloat32mf2_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint32mf2_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,vfloat32mf2_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_f64m1(float64_t *base,vuint32mf2_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,vfloat64m1_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_f64m1_m(vbool64_t mask,float64_t *base,vuint32mf2_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,vfloat64m1_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i16m1(int16_t *base,vuint32m2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,vint16m1_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i16m1_m(vbool16_t mask,int16_t *base,vuint32m2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,vint16m1_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i16mf2(int16_t *base,vuint32m1_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,vint16mf2_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint32m1_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,vint16mf2_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i16mf4(int16_t *base,vuint32mf2_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,vint16mf4_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint32mf2_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,vint16mf4_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i32m1(int32_t *base,vuint32m1_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,vint32m1_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i32m1_m(vbool32_t mask,int32_t *base,vuint32m1_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,vint32m1_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i32mf2(int32_t *base,vuint32mf2_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,vint32mf2_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint32mf2_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,vint32mf2_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i64m1(int64_t *base,vuint32mf2_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,vint64m1_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i64m1_m(vbool64_t mask,int64_t *base,vuint32mf2_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,vint64m1_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i8m1(int8_t *base,vuint32m4_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,vint8m1_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i8m1_m(vbool8_t mask,int8_t *base,vuint32m4_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,vint8m1_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i8mf2(int8_t *base,vuint32m2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,vint8mf2_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint32m2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,vint8mf2_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i8mf4(int8_t *base,vuint32m1_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,vint8mf4_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint32m1_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,vint8mf4_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i8mf8(int8_t *base,vuint32mf2_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,vint8mf8_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint32mf2_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,vint8mf8_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u16m1(uint16_t *base,vuint32m2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,vuint16m1_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint32m2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,vuint16m1_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u16mf2(uint16_t *base,vuint32m1_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,vuint16mf2_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint32m1_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,vuint16mf2_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u16mf4(uint16_t *base,vuint32mf2_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,vuint16mf4_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint32mf2_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,vuint16mf4_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u32m1(uint32_t *base,vuint32m1_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,vuint32m1_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,vuint32m1_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u32mf2(uint32_t *base,vuint32mf2_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,vuint32mf2_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,vuint32mf2_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u64m1(uint64_t *base,vuint32mf2_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,vuint64m1_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint32mf2_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,vuint64m1_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u8m1(uint8_t *base,vuint32m4_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,vuint8m1_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint32m4_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,vuint8m1_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u8mf2(uint8_t *base,vuint32m2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,vuint8mf2_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint32m2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,vuint8mf2_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u8mf4(uint8_t *base,vuint32m1_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,vuint8mf4_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint32m1_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,vuint8mf4_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u8mf8(uint8_t *base,vuint32mf2_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,vuint8mf8_t v7,size_t vl)
{
    vsuxseg8ei32(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei32_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei32_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint32mf2_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,vuint8mf8_t v7,size_t vl)
{
    vsuxseg8ei32(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_f16m1(float16_t *base,vuint64m4_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,vfloat16m1_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_f16m1_m(vbool16_t mask,float16_t *base,vuint64m4_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,vfloat16m1_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_f16mf2(float16_t *base,vuint64m2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint64m2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_f16mf4(float16_t *base,vuint64m1_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,vfloat16mf4_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint64m1_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,vfloat16mf4_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_f32m1(float32_t *base,vuint64m2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,vfloat32m1_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_f32m1_m(vbool32_t mask,float32_t *base,vuint64m2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,vfloat32m1_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_f32mf2(float32_t *base,vuint64m1_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,vfloat32mf2_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint64m1_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,vfloat32mf2_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_f64m1(float64_t *base,vuint64m1_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,vfloat64m1_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_f64m1_m(vbool64_t mask,float64_t *base,vuint64m1_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,vfloat64m1_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i16m1(int16_t *base,vuint64m4_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,vint16m1_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i16m1_m(vbool16_t mask,int16_t *base,vuint64m4_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,vint16m1_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i16mf2(int16_t *base,vuint64m2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,vint16mf2_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint64m2_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,vint16mf2_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i16mf4(int16_t *base,vuint64m1_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,vint16mf4_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint64m1_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,vint16mf4_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i32m1(int32_t *base,vuint64m2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,vint32m1_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i32m1_m(vbool32_t mask,int32_t *base,vuint64m2_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,vint32m1_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i32mf2(int32_t *base,vuint64m1_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,vint32mf2_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint64m1_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,vint32mf2_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i64m1(int64_t *base,vuint64m1_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,vint64m1_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i64m1_m(vbool64_t mask,int64_t *base,vuint64m1_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,vint64m1_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i8m1(int8_t *base,vuint64m8_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,vint8m1_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i8m1_m(vbool8_t mask,int8_t *base,vuint64m8_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,vint8m1_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i8mf2(int8_t *base,vuint64m4_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,vint8mf2_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint64m4_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,vint8mf2_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i8mf4(int8_t *base,vuint64m2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,vint8mf4_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint64m2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,vint8mf4_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i8mf8(int8_t *base,vuint64m1_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,vint8mf8_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint64m1_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,vint8mf8_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u16m1(uint16_t *base,vuint64m4_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,vuint16m1_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint64m4_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,vuint16m1_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u16mf2(uint16_t *base,vuint64m2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,vuint16mf2_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint64m2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,vuint16mf2_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u16mf4(uint16_t *base,vuint64m1_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,vuint16mf4_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint64m1_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,vuint16mf4_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u32m1(uint32_t *base,vuint64m2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,vuint32m1_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint64m2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,vuint32m1_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u32mf2(uint32_t *base,vuint64m1_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,vuint32mf2_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint64m1_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,vuint32mf2_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u64m1(uint64_t *base,vuint64m1_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,vuint64m1_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,vuint64m1_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u8m1(uint8_t *base,vuint64m8_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,vuint8m1_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint64m8_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,vuint8m1_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u8mf2(uint8_t *base,vuint64m4_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,vuint8mf2_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint64m4_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,vuint8mf2_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u8mf4(uint8_t *base,vuint64m2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,vuint8mf4_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint64m2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,vuint8mf4_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u8mf8(uint8_t *base,vuint64m1_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,vuint8mf8_t v7,size_t vl)
{
    vsuxseg8ei64(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei64_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei64_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint64m1_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,vuint8mf8_t v7,size_t vl)
{
    vsuxseg8ei64(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_f16m1(float16_t *base,vuint8mf2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,vfloat16m1_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_f16m1_m(vbool16_t mask,float16_t *base,vuint8mf2_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,vfloat16m1_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_f16mf2(float16_t *base,vuint8mf4_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint8mf4_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_f16mf4(float16_t *base,vuint8mf8_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,vfloat16mf4_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint8mf8_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,vfloat16mf4_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_f32m1(float32_t *base,vuint8mf4_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,vfloat32m1_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_f32m1_m(vbool32_t mask,float32_t *base,vuint8mf4_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,vfloat32m1_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_f32mf2(float32_t *base,vuint8mf8_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,vfloat32mf2_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint8mf8_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,vfloat32mf2_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_f64m1(float64_t *base,vuint8mf8_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,vfloat64m1_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_f64m1_m(vbool64_t mask,float64_t *base,vuint8mf8_t bindex,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,vfloat64m1_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i16m1(int16_t *base,vuint8mf2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,vint16m1_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i16m1_m(vbool16_t mask,int16_t *base,vuint8mf2_t bindex,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,vint16m1_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i16mf2(int16_t *base,vuint8mf4_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,vint16mf2_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i16mf2_m(vbool32_t mask,int16_t *base,vuint8mf4_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,vint16mf2_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i16mf4(int16_t *base,vuint8mf8_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,vint16mf4_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i16mf4_m(vbool64_t mask,int16_t *base,vuint8mf8_t bindex,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,vint16mf4_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i32m1(int32_t *base,vuint8mf4_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,vint32m1_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i32m1_m(vbool32_t mask,int32_t *base,vuint8mf4_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,vint32m1_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i32mf2(int32_t *base,vuint8mf8_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,vint32mf2_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i32mf2_m(vbool64_t mask,int32_t *base,vuint8mf8_t bindex,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,vint32mf2_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i64m1(int64_t *base,vuint8mf8_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,vint64m1_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i64m1_m(vbool64_t mask,int64_t *base,vuint8mf8_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,vint64m1_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i8m1(int8_t *base,vuint8m1_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,vint8m1_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i8m1_m(vbool8_t mask,int8_t *base,vuint8m1_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,vint8m1_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i8mf2(int8_t *base,vuint8mf2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,vint8mf2_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i8mf2_m(vbool16_t mask,int8_t *base,vuint8mf2_t bindex,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,vint8mf2_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i8mf4(int8_t *base,vuint8mf4_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,vint8mf4_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint8mf4_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,vint8mf4_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i8mf8(int8_t *base,vuint8mf8_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,vint8mf8_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_i8mf8_m(vbool64_t mask,int8_t *base,vuint8mf8_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,vint8mf8_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u16m1(uint16_t *base,vuint8mf2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,vuint16m1_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint8mf2_t bindex,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,vuint16m1_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u16mf2(uint16_t *base,vuint8mf4_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,vuint16mf2_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint8mf4_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,vuint16mf2_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u16mf4(uint16_t *base,vuint8mf8_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,vuint16mf4_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint8mf8_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,vuint16mf4_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u32m1(uint32_t *base,vuint8mf4_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,vuint32m1_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint8mf4_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,vuint32m1_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u32mf2(uint32_t *base,vuint8mf8_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,vuint32mf2_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint8mf8_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,vuint32mf2_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u64m1(uint64_t *base,vuint8mf8_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,vuint64m1_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint8mf8_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,vuint64m1_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u8m1(uint8_t *base,vuint8m1_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,vuint8m1_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint8m1_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,vuint8m1_t v4,vuint8m1_t v5,vuint8m1_t v6,vuint8m1_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u8mf2(uint8_t *base,vuint8mf2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,vuint8mf2_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,vuint8mf2_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u8mf4(uint8_t *base,vuint8mf4_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,vuint8mf4_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,vuint8mf4_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u8mf8(uint8_t *base,vuint8mf8_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,vuint8mf8_t v7,size_t vl)
{
    vsuxseg8ei8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}


/*
** test0_vsuxseg8ei8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" void
test0_vsuxseg8ei8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,vuint8mf8_t v7,size_t vl)
{
    vsuxseg8ei8(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}



