/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test0_vsseg2e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e16_v_f16m1_m(vbool16_t mask,float16_t *base,vfloat16m1_t v0,vfloat16m1_t v1,size_t vl)
{
    vsseg2e16_v_f16m1_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e16_v_f16m1_m(vbool16_t mask,float16_t *base,vfloat16m1_t v0,vfloat16m1_t v1,size_t vl)
{
    vsseg2e16_v_f16m1_m(mask, base, v0, v1, 19);
}

/*
** test0_vsseg2e16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e16_v_f16m2_m(vbool8_t mask,float16_t *base,vfloat16m2_t v0,vfloat16m2_t v1,size_t vl)
{
    vsseg2e16_v_f16m2_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_f16m2_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e16_v_f16m2_m(vbool8_t mask,float16_t *base,vfloat16m2_t v0,vfloat16m2_t v1,size_t vl)
{
    vsseg2e16_v_f16m2_m(mask, base, v0, v1, 7);
}

/*
** test0_vsseg2e16_v_f16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e16_v_f16m4_m(vbool4_t mask,float16_t *base,vfloat16m4_t v0,vfloat16m4_t v1,size_t vl)
{
    vsseg2e16_v_f16m4_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_f16m4_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e16_v_f16m4_m(vbool4_t mask,float16_t *base,vfloat16m4_t v0,vfloat16m4_t v1,size_t vl)
{
    vsseg2e16_v_f16m4_m(mask, base, v0, v1, 19);
}

/*
** test0_vsseg2e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg2e16_v_f16mf2(float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,size_t vl)
{
    vsseg2e16_v_f16mf2(base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg2e16_v_f16mf2(float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,size_t vl)
{
    vsseg2e16_v_f16mf2(base, v0, v1, 18);
}

/*
** test0_vsseg2e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e16_v_f16mf2_m(vbool32_t mask,float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,size_t vl)
{
    vsseg2e16_v_f16mf2_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e16_v_f16mf2_m(vbool32_t mask,float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,size_t vl)
{
    vsseg2e16_v_f16mf2_m(mask, base, v0, v1, 2);
}

/*
** test0_vsseg2e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg2e16_v_f16mf4(float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,size_t vl)
{
    vsseg2e16_v_f16mf4(base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg2e16_v_f16mf4(float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,size_t vl)
{
    vsseg2e16_v_f16mf4(base, v0, v1, 20);
}

/*
** test0_vsseg2e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e16_v_f16mf4_m(vbool64_t mask,float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,size_t vl)
{
    vsseg2e16_v_f16mf4_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e16_v_f16mf4_m(vbool64_t mask,float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,size_t vl)
{
    vsseg2e16_v_f16mf4_m(mask, base, v0, v1, 1);
}

/*
** test0_vsseg2e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e16_v_i16m1_m(vbool16_t mask,int16_t *base,vint16m1_t v0,vint16m1_t v1,size_t vl)
{
    vsseg2e16_v_i16m1_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e16_v_i16m1_m(vbool16_t mask,int16_t *base,vint16m1_t v0,vint16m1_t v1,size_t vl)
{
    vsseg2e16_v_i16m1_m(mask, base, v0, v1, 24);
}

/*
** test0_vsseg2e16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e16_v_i16m2_m(vbool8_t mask,int16_t *base,vint16m2_t v0,vint16m2_t v1,size_t vl)
{
    vsseg2e16_v_i16m2_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_i16m2_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e16_v_i16m2_m(vbool8_t mask,int16_t *base,vint16m2_t v0,vint16m2_t v1,size_t vl)
{
    vsseg2e16_v_i16m2_m(mask, base, v0, v1, 16);
}

/*
** test0_vsseg2e16_v_i16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e16_v_i16m4_m(vbool4_t mask,int16_t *base,vint16m4_t v0,vint16m4_t v1,size_t vl)
{
    vsseg2e16_v_i16m4_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_i16m4_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e16_v_i16m4_m(vbool4_t mask,int16_t *base,vint16m4_t v0,vint16m4_t v1,size_t vl)
{
    vsseg2e16_v_i16m4_m(mask, base, v0, v1, 9);
}

/*
** test0_vsseg2e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg2e16_v_i16mf2(int16_t *base,vint16mf2_t v0,vint16mf2_t v1,size_t vl)
{
    vsseg2e16_v_i16mf2(base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg2e16_v_i16mf2(int16_t *base,vint16mf2_t v0,vint16mf2_t v1,size_t vl)
{
    vsseg2e16_v_i16mf2(base, v0, v1, 7);
}

/*
** test0_vsseg2e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e16_v_i16mf2_m(vbool32_t mask,int16_t *base,vint16mf2_t v0,vint16mf2_t v1,size_t vl)
{
    vsseg2e16_v_i16mf2_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e16_v_i16mf2_m(vbool32_t mask,int16_t *base,vint16mf2_t v0,vint16mf2_t v1,size_t vl)
{
    vsseg2e16_v_i16mf2_m(mask, base, v0, v1, 18);
}

/*
** test0_vsseg2e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg2e16_v_i16mf4(int16_t *base,vint16mf4_t v0,vint16mf4_t v1,size_t vl)
{
    vsseg2e16_v_i16mf4(base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg2e16_v_i16mf4(int16_t *base,vint16mf4_t v0,vint16mf4_t v1,size_t vl)
{
    vsseg2e16_v_i16mf4(base, v0, v1, 12);
}

/*
** test0_vsseg2e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e16_v_i16mf4_m(vbool64_t mask,int16_t *base,vint16mf4_t v0,vint16mf4_t v1,size_t vl)
{
    vsseg2e16_v_i16mf4_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e16_v_i16mf4_m(vbool64_t mask,int16_t *base,vint16mf4_t v0,vint16mf4_t v1,size_t vl)
{
    vsseg2e16_v_i16mf4_m(mask, base, v0, v1, 5);
}

/*
** test0_vsseg2e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t v0,vuint16m1_t v1,size_t vl)
{
    vsseg2e16_v_u16m1_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t v0,vuint16m1_t v1,size_t vl)
{
    vsseg2e16_v_u16m1_m(mask, base, v0, v1, 21);
}

/*
** test0_vsseg2e16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e16_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint16m2_t v0,vuint16m2_t v1,size_t vl)
{
    vsseg2e16_v_u16m2_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_u16m2_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e16_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint16m2_t v0,vuint16m2_t v1,size_t vl)
{
    vsseg2e16_v_u16m2_m(mask, base, v0, v1, 27);
}

/*
** test0_vsseg2e16_v_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e16_v_u16m4_m(vbool4_t mask,uint16_t *base,vuint16m4_t v0,vuint16m4_t v1,size_t vl)
{
    vsseg2e16_v_u16m4_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_u16m4_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e16_v_u16m4_m(vbool4_t mask,uint16_t *base,vuint16m4_t v0,vuint16m4_t v1,size_t vl)
{
    vsseg2e16_v_u16m4_m(mask, base, v0, v1, 8);
}

/*
** test0_vsseg2e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg2e16_v_u16mf2(uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,size_t vl)
{
    vsseg2e16_v_u16mf2(base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg2e16_v_u16mf2(uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,size_t vl)
{
    vsseg2e16_v_u16mf2(base, v0, v1, 26);
}

/*
** test0_vsseg2e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,size_t vl)
{
    vsseg2e16_v_u16mf2_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,size_t vl)
{
    vsseg2e16_v_u16mf2_m(mask, base, v0, v1, 13);
}

/*
** test0_vsseg2e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg2e16_v_u16mf4(uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vsseg2e16_v_u16mf4(base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg2e16_v_u16mf4(uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vsseg2e16_v_u16mf4(base, v0, v1, 9);
}

/*
** test0_vsseg2e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vsseg2e16_v_u16mf4_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vsseg2e16_v_u16mf4_m(mask, base, v0, v1, 20);
}

/*
** test0_vsseg2e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e32_v_f32m1_m(vbool32_t mask,float32_t *base,vfloat32m1_t v0,vfloat32m1_t v1,size_t vl)
{
    vsseg2e32_v_f32m1_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e32_v_f32m1_m(vbool32_t mask,float32_t *base,vfloat32m1_t v0,vfloat32m1_t v1,size_t vl)
{
    vsseg2e32_v_f32m1_m(mask, base, v0, v1, 12);
}

/*
** test0_vsseg2e32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e32_v_f32m2_m(vbool16_t mask,float32_t *base,vfloat32m2_t v0,vfloat32m2_t v1,size_t vl)
{
    vsseg2e32_v_f32m2_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e32_v_f32m2_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e32_v_f32m2_m(vbool16_t mask,float32_t *base,vfloat32m2_t v0,vfloat32m2_t v1,size_t vl)
{
    vsseg2e32_v_f32m2_m(mask, base, v0, v1, 21);
}

/*
** test0_vsseg2e32_v_f32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e32_v_f32m4_m(vbool8_t mask,float32_t *base,vfloat32m4_t v0,vfloat32m4_t v1,size_t vl)
{
    vsseg2e32_v_f32m4_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e32_v_f32m4_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e32_v_f32m4_m(vbool8_t mask,float32_t *base,vfloat32m4_t v0,vfloat32m4_t v1,size_t vl)
{
    vsseg2e32_v_f32m4_m(mask, base, v0, v1, 30);
}

/*
** test0_vsseg2e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg2e32_v_f32mf2(float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,size_t vl)
{
    vsseg2e32_v_f32mf2(base, v0, v1, vl);
}

/*
** test1_vsseg2e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*3,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg2e32_v_f32mf2(float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,size_t vl)
{
    vsseg2e32_v_f32mf2(base, v0, v1, 3);
}

/*
** test0_vsseg2e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e32_v_f32mf2_m(vbool64_t mask,float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,size_t vl)
{
    vsseg2e32_v_f32mf2_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e32_v_f32mf2_m(vbool64_t mask,float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,size_t vl)
{
    vsseg2e32_v_f32mf2_m(mask, base, v0, v1, 1);
}

/*
** test0_vsseg2e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e32_v_i32m1_m(vbool32_t mask,int32_t *base,vint32m1_t v0,vint32m1_t v1,size_t vl)
{
    vsseg2e32_v_i32m1_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e32_v_i32m1_m(vbool32_t mask,int32_t *base,vint32m1_t v0,vint32m1_t v1,size_t vl)
{
    vsseg2e32_v_i32m1_m(mask, base, v0, v1, 10);
}

/*
** test0_vsseg2e32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e32_v_i32m2_m(vbool16_t mask,int32_t *base,vint32m2_t v0,vint32m2_t v1,size_t vl)
{
    vsseg2e32_v_i32m2_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e32_v_i32m2_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e32_v_i32m2_m(vbool16_t mask,int32_t *base,vint32m2_t v0,vint32m2_t v1,size_t vl)
{
    vsseg2e32_v_i32m2_m(mask, base, v0, v1, 23);
}

/*
** test0_vsseg2e32_v_i32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e32_v_i32m4_m(vbool8_t mask,int32_t *base,vint32m4_t v0,vint32m4_t v1,size_t vl)
{
    vsseg2e32_v_i32m4_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e32_v_i32m4_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e32_v_i32m4_m(vbool8_t mask,int32_t *base,vint32m4_t v0,vint32m4_t v1,size_t vl)
{
    vsseg2e32_v_i32m4_m(mask, base, v0, v1, 5);
}

/*
** test0_vsseg2e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg2e32_v_i32mf2(int32_t *base,vint32mf2_t v0,vint32mf2_t v1,size_t vl)
{
    vsseg2e32_v_i32mf2(base, v0, v1, vl);
}

/*
** test1_vsseg2e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg2e32_v_i32mf2(int32_t *base,vint32mf2_t v0,vint32mf2_t v1,size_t vl)
{
    vsseg2e32_v_i32mf2(base, v0, v1, 30);
}

/*
** test0_vsseg2e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e32_v_i32mf2_m(vbool64_t mask,int32_t *base,vint32mf2_t v0,vint32mf2_t v1,size_t vl)
{
    vsseg2e32_v_i32mf2_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e32_v_i32mf2_m(vbool64_t mask,int32_t *base,vint32mf2_t v0,vint32mf2_t v1,size_t vl)
{
    vsseg2e32_v_i32mf2_m(mask, base, v0, v1, 6);
}

/*
** test0_vsseg2e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t v0,vuint32m1_t v1,size_t vl)
{
    vsseg2e32_v_u32m1_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t v0,vuint32m1_t v1,size_t vl)
{
    vsseg2e32_v_u32m1_m(mask, base, v0, v1, 5);
}

/*
** test0_vsseg2e32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e32_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint32m2_t v0,vuint32m2_t v1,size_t vl)
{
    vsseg2e32_v_u32m2_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e32_v_u32m2_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e32_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint32m2_t v0,vuint32m2_t v1,size_t vl)
{
    vsseg2e32_v_u32m2_m(mask, base, v0, v1, 21);
}

/*
** test0_vsseg2e32_v_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e32_v_u32m4_m(vbool8_t mask,uint32_t *base,vuint32m4_t v0,vuint32m4_t v1,size_t vl)
{
    vsseg2e32_v_u32m4_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e32_v_u32m4_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e32_v_u32m4_m(vbool8_t mask,uint32_t *base,vuint32m4_t v0,vuint32m4_t v1,size_t vl)
{
    vsseg2e32_v_u32m4_m(mask, base, v0, v1, 18);
}

/*
** test0_vsseg2e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg2e32_v_u32mf2(uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,size_t vl)
{
    vsseg2e32_v_u32mf2(base, v0, v1, vl);
}

/*
** test1_vsseg2e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg2e32_v_u32mf2(uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,size_t vl)
{
    vsseg2e32_v_u32mf2(base, v0, v1, 1);
}

/*
** test0_vsseg2e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,size_t vl)
{
    vsseg2e32_v_u32mf2_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,size_t vl)
{
    vsseg2e32_v_u32mf2_m(mask, base, v0, v1, 14);
}

/*
** test0_vsseg2e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e64_v_f64m1_m(vbool64_t mask,float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,size_t vl)
{
    vsseg2e64_v_f64m1_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e64_v_f64m1_m(vbool64_t mask,float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,size_t vl)
{
    vsseg2e64_v_f64m1_m(mask, base, v0, v1, 24);
}

/*
** test0_vsseg2e64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e64_v_f64m2_m(vbool32_t mask,float64_t *base,vfloat64m2_t v0,vfloat64m2_t v1,size_t vl)
{
    vsseg2e64_v_f64m2_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e64_v_f64m2_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e64_v_f64m2_m(vbool32_t mask,float64_t *base,vfloat64m2_t v0,vfloat64m2_t v1,size_t vl)
{
    vsseg2e64_v_f64m2_m(mask, base, v0, v1, 25);
}

/*
** test0_vsseg2e64_v_f64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e64_v_f64m4_m(vbool16_t mask,float64_t *base,vfloat64m4_t v0,vfloat64m4_t v1,size_t vl)
{
    vsseg2e64_v_f64m4_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e64_v_f64m4_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e64_v_f64m4_m(vbool16_t mask,float64_t *base,vfloat64m4_t v0,vfloat64m4_t v1,size_t vl)
{
    vsseg2e64_v_f64m4_m(mask, base, v0, v1, 25);
}

/*
** test0_vsseg2e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e64_v_i64m1_m(vbool64_t mask,int64_t *base,vint64m1_t v0,vint64m1_t v1,size_t vl)
{
    vsseg2e64_v_i64m1_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e64_v_i64m1_m(vbool64_t mask,int64_t *base,vint64m1_t v0,vint64m1_t v1,size_t vl)
{
    vsseg2e64_v_i64m1_m(mask, base, v0, v1, 25);
}

/*
** test0_vsseg2e64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e64_v_i64m2_m(vbool32_t mask,int64_t *base,vint64m2_t v0,vint64m2_t v1,size_t vl)
{
    vsseg2e64_v_i64m2_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e64_v_i64m2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e64_v_i64m2_m(vbool32_t mask,int64_t *base,vint64m2_t v0,vint64m2_t v1,size_t vl)
{
    vsseg2e64_v_i64m2_m(mask, base, v0, v1, 13);
}

/*
** test0_vsseg2e64_v_i64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e64_v_i64m4_m(vbool16_t mask,int64_t *base,vint64m4_t v0,vint64m4_t v1,size_t vl)
{
    vsseg2e64_v_i64m4_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e64_v_i64m4_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e64_v_i64m4_m(vbool16_t mask,int64_t *base,vint64m4_t v0,vint64m4_t v1,size_t vl)
{
    vsseg2e64_v_i64m4_m(mask, base, v0, v1, 26);
}

/*
** test0_vsseg2e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,size_t vl)
{
    vsseg2e64_v_u64m1_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,size_t vl)
{
    vsseg2e64_v_u64m1_m(mask, base, v0, v1, 8);
}

/*
** test0_vsseg2e64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e64_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint64m2_t v0,vuint64m2_t v1,size_t vl)
{
    vsseg2e64_v_u64m2_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e64_v_u64m2_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e64_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint64m2_t v0,vuint64m2_t v1,size_t vl)
{
    vsseg2e64_v_u64m2_m(mask, base, v0, v1, 27);
}

/*
** test0_vsseg2e64_v_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e64_v_u64m4_m(vbool16_t mask,uint64_t *base,vuint64m4_t v0,vuint64m4_t v1,size_t vl)
{
    vsseg2e64_v_u64m4_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e64_v_u64m4_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e64_v_u64m4_m(vbool16_t mask,uint64_t *base,vuint64m4_t v0,vuint64m4_t v1,size_t vl)
{
    vsseg2e64_v_u64m4_m(mask, base, v0, v1, 29);
}

/*
** test0_vsseg2e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e8_v_i8mf2_m(vbool16_t mask,int8_t *base,vint8mf2_t v0,vint8mf2_t v1,size_t vl)
{
    vsseg2e8_v_i8mf2_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e8_v_i8mf2_m(vbool16_t mask,int8_t *base,vint8mf2_t v0,vint8mf2_t v1,size_t vl)
{
    vsseg2e8_v_i8mf2_m(mask, base, v0, v1, 3);
}

/*
** test0_vsseg2e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e8_v_i8mf4_m(vbool32_t mask,int8_t *base,vint8mf4_t v0,vint8mf4_t v1,size_t vl)
{
    vsseg2e8_v_i8mf4_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e8_v_i8mf4_m(vbool32_t mask,int8_t *base,vint8mf4_t v0,vint8mf4_t v1,size_t vl)
{
    vsseg2e8_v_i8mf4_m(mask, base, v0, v1, 3);
}

/*
** test0_vsseg2e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e8_v_i8mf8_m(vbool64_t mask,int8_t *base,vint8mf8_t v0,vint8mf8_t v1,size_t vl)
{
    vsseg2e8_v_i8mf8_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e8_v_i8mf8_m(vbool64_t mask,int8_t *base,vint8mf8_t v0,vint8mf8_t v1,size_t vl)
{
    vsseg2e8_v_i8mf8_m(mask, base, v0, v1, 10);
}

/*
** test0_vsseg2e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t v0,vuint8mf2_t v1,size_t vl)
{
    vsseg2e8_v_u8mf2_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t v0,vuint8mf2_t v1,size_t vl)
{
    vsseg2e8_v_u8mf2_m(mask, base, v0, v1, 26);
}

/*
** test0_vsseg2e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vsseg2e8_v_u8mf4_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vsseg2e8_v_u8mf4_m(mask, base, v0, v1, 23);
}

/*
** test0_vsseg2e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg2e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t v0,vuint8mf8_t v1,size_t vl)
{
    vsseg2e8_v_u8mf8_m(mask, base, v0, v1, vl);
}

/*
** test1_vsseg2e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg2e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t v0,vuint8mf8_t v1,size_t vl)
{
    vsseg2e8_v_u8mf8_m(mask, base, v0, v1, 16);
}

/*
** test0_vsseg3e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e16_v_f16m1_m(vbool16_t mask,float16_t *base,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,size_t vl)
{
    vsseg3e16_v_f16m1_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e16_v_f16m1_m(vbool16_t mask,float16_t *base,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,size_t vl)
{
    vsseg3e16_v_f16m1_m(mask, base, v0, v1, v2, 27);
}

/*
** test0_vsseg3e16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e16_v_f16m2_m(vbool8_t mask,float16_t *base,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,size_t vl)
{
    vsseg3e16_v_f16m2_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_f16m2_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e16_v_f16m2_m(vbool8_t mask,float16_t *base,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,size_t vl)
{
    vsseg3e16_v_f16m2_m(mask, base, v0, v1, v2, 6);
}

/*
** test0_vsseg3e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg3e16_v_f16mf2(float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,size_t vl)
{
    vsseg3e16_v_f16mf2(base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg3e16_v_f16mf2(float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,size_t vl)
{
    vsseg3e16_v_f16mf2(base, v0, v1, v2, 24);
}

/*
** test0_vsseg3e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e16_v_f16mf2_m(vbool32_t mask,float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,size_t vl)
{
    vsseg3e16_v_f16mf2_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e16_v_f16mf2_m(vbool32_t mask,float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,size_t vl)
{
    vsseg3e16_v_f16mf2_m(mask, base, v0, v1, v2, 15);
}

/*
** test0_vsseg3e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg3e16_v_f16mf4(float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vsseg3e16_v_f16mf4(base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg3e16_v_f16mf4(float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vsseg3e16_v_f16mf4(base, v0, v1, v2, 5);
}

/*
** test0_vsseg3e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e16_v_f16mf4_m(vbool64_t mask,float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vsseg3e16_v_f16mf4_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e16_v_f16mf4_m(vbool64_t mask,float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vsseg3e16_v_f16mf4_m(mask, base, v0, v1, v2, 29);
}

/*
** test0_vsseg3e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e16_v_i16m1_m(vbool16_t mask,int16_t *base,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,size_t vl)
{
    vsseg3e16_v_i16m1_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e16_v_i16m1_m(vbool16_t mask,int16_t *base,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,size_t vl)
{
    vsseg3e16_v_i16m1_m(mask, base, v0, v1, v2, 0);
}

/*
** test0_vsseg3e16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e16_v_i16m2_m(vbool8_t mask,int16_t *base,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,size_t vl)
{
    vsseg3e16_v_i16m2_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_i16m2_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e16_v_i16m2_m(vbool8_t mask,int16_t *base,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,size_t vl)
{
    vsseg3e16_v_i16m2_m(mask, base, v0, v1, v2, 22);
}

/*
** test0_vsseg3e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg3e16_v_i16mf2(int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vsseg3e16_v_i16mf2(base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg3e16_v_i16mf2(int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vsseg3e16_v_i16mf2(base, v0, v1, v2, 23);
}

/*
** test0_vsseg3e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e16_v_i16mf2_m(vbool32_t mask,int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vsseg3e16_v_i16mf2_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e16_v_i16mf2_m(vbool32_t mask,int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vsseg3e16_v_i16mf2_m(mask, base, v0, v1, v2, 12);
}

/*
** test0_vsseg3e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg3e16_v_i16mf4(int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,size_t vl)
{
    vsseg3e16_v_i16mf4(base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg3e16_v_i16mf4(int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,size_t vl)
{
    vsseg3e16_v_i16mf4(base, v0, v1, v2, 23);
}

/*
** test0_vsseg3e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e16_v_i16mf4_m(vbool64_t mask,int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,size_t vl)
{
    vsseg3e16_v_i16mf4_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e16_v_i16mf4_m(vbool64_t mask,int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,size_t vl)
{
    vsseg3e16_v_i16mf4_m(mask, base, v0, v1, v2, 15);
}

/*
** test0_vsseg3e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,size_t vl)
{
    vsseg3e16_v_u16m1_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,size_t vl)
{
    vsseg3e16_v_u16m1_m(mask, base, v0, v1, v2, 7);
}

/*
** test0_vsseg3e16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e16_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,size_t vl)
{
    vsseg3e16_v_u16m2_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_u16m2_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e16_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,size_t vl)
{
    vsseg3e16_v_u16m2_m(mask, base, v0, v1, v2, 26);
}

/*
** test0_vsseg3e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg3e16_v_u16mf2(uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vsseg3e16_v_u16mf2(base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg3e16_v_u16mf2(uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vsseg3e16_v_u16mf2(base, v0, v1, v2, 29);
}

/*
** test0_vsseg3e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vsseg3e16_v_u16mf2_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vsseg3e16_v_u16mf2_m(mask, base, v0, v1, v2, 9);
}

/*
** test0_vsseg3e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg3e16_v_u16mf4(uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vsseg3e16_v_u16mf4(base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg3e16_v_u16mf4(uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vsseg3e16_v_u16mf4(base, v0, v1, v2, 6);
}

/*
** test0_vsseg3e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vsseg3e16_v_u16mf4_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vsseg3e16_v_u16mf4_m(mask, base, v0, v1, v2, 30);
}

/*
** test0_vsseg3e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e32_v_f32m1_m(vbool32_t mask,float32_t *base,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,size_t vl)
{
    vsseg3e32_v_f32m1_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e32_v_f32m1_m(vbool32_t mask,float32_t *base,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,size_t vl)
{
    vsseg3e32_v_f32m1_m(mask, base, v0, v1, v2, 23);
}

/*
** test0_vsseg3e32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e32_v_f32m2_m(vbool16_t mask,float32_t *base,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,size_t vl)
{
    vsseg3e32_v_f32m2_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e32_v_f32m2_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e32_v_f32m2_m(vbool16_t mask,float32_t *base,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,size_t vl)
{
    vsseg3e32_v_f32m2_m(mask, base, v0, v1, v2, 19);
}

/*
** test0_vsseg3e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg3e32_v_f32mf2(float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,size_t vl)
{
    vsseg3e32_v_f32mf2(base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg3e32_v_f32mf2(float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,size_t vl)
{
    vsseg3e32_v_f32mf2(base, v0, v1, v2, 23);
}

/*
** test0_vsseg3e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e32_v_f32mf2_m(vbool64_t mask,float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,size_t vl)
{
    vsseg3e32_v_f32mf2_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e32_v_f32mf2_m(vbool64_t mask,float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,size_t vl)
{
    vsseg3e32_v_f32mf2_m(mask, base, v0, v1, v2, 6);
}

/*
** test0_vsseg3e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e32_v_i32m1_m(vbool32_t mask,int32_t *base,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,size_t vl)
{
    vsseg3e32_v_i32m1_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e32_v_i32m1_m(vbool32_t mask,int32_t *base,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,size_t vl)
{
    vsseg3e32_v_i32m1_m(mask, base, v0, v1, v2, 5);
}

/*
** test0_vsseg3e32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e32_v_i32m2_m(vbool16_t mask,int32_t *base,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,size_t vl)
{
    vsseg3e32_v_i32m2_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e32_v_i32m2_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e32_v_i32m2_m(vbool16_t mask,int32_t *base,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,size_t vl)
{
    vsseg3e32_v_i32m2_m(mask, base, v0, v1, v2, 17);
}

/*
** test0_vsseg3e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg3e32_v_i32mf2(int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vsseg3e32_v_i32mf2(base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*11,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg3e32_v_i32mf2(int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vsseg3e32_v_i32mf2(base, v0, v1, v2, 11);
}

/*
** test0_vsseg3e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e32_v_i32mf2_m(vbool64_t mask,int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vsseg3e32_v_i32mf2_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e32_v_i32mf2_m(vbool64_t mask,int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vsseg3e32_v_i32mf2_m(mask, base, v0, v1, v2, 4);
}

/*
** test0_vsseg3e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,size_t vl)
{
    vsseg3e32_v_u32m1_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,size_t vl)
{
    vsseg3e32_v_u32m1_m(mask, base, v0, v1, v2, 27);
}

/*
** test0_vsseg3e32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e32_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,size_t vl)
{
    vsseg3e32_v_u32m2_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e32_v_u32m2_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e32_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,size_t vl)
{
    vsseg3e32_v_u32m2_m(mask, base, v0, v1, v2, 27);
}

/*
** test0_vsseg3e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg3e32_v_u32mf2(uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,size_t vl)
{
    vsseg3e32_v_u32mf2(base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*26,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg3e32_v_u32mf2(uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,size_t vl)
{
    vsseg3e32_v_u32mf2(base, v0, v1, v2, 26);
}

/*
** test0_vsseg3e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,size_t vl)
{
    vsseg3e32_v_u32mf2_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,size_t vl)
{
    vsseg3e32_v_u32mf2_m(mask, base, v0, v1, v2, 24);
}

/*
** test0_vsseg3e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e64_v_f64m1_m(vbool64_t mask,float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,size_t vl)
{
    vsseg3e64_v_f64m1_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e64_v_f64m1_m(vbool64_t mask,float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,size_t vl)
{
    vsseg3e64_v_f64m1_m(mask, base, v0, v1, v2, 0);
}

/*
** test0_vsseg3e64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e64_v_f64m2_m(vbool32_t mask,float64_t *base,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,size_t vl)
{
    vsseg3e64_v_f64m2_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e64_v_f64m2_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e64_v_f64m2_m(vbool32_t mask,float64_t *base,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,size_t vl)
{
    vsseg3e64_v_f64m2_m(mask, base, v0, v1, v2, 8);
}

/*
** test0_vsseg3e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e64_v_i64m1_m(vbool64_t mask,int64_t *base,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,size_t vl)
{
    vsseg3e64_v_i64m1_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e64_v_i64m1_m(vbool64_t mask,int64_t *base,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,size_t vl)
{
    vsseg3e64_v_i64m1_m(mask, base, v0, v1, v2, 12);
}

/*
** test0_vsseg3e64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e64_v_i64m2_m(vbool32_t mask,int64_t *base,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,size_t vl)
{
    vsseg3e64_v_i64m2_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e64_v_i64m2_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e64_v_i64m2_m(vbool32_t mask,int64_t *base,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,size_t vl)
{
    vsseg3e64_v_i64m2_m(mask, base, v0, v1, v2, 22);
}

/*
** test0_vsseg3e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,size_t vl)
{
    vsseg3e64_v_u64m1_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,size_t vl)
{
    vsseg3e64_v_u64m1_m(mask, base, v0, v1, v2, 21);
}

/*
** test0_vsseg3e64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e64_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,size_t vl)
{
    vsseg3e64_v_u64m2_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e64_v_u64m2_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e64_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,size_t vl)
{
    vsseg3e64_v_u64m2_m(mask, base, v0, v1, v2, 7);
}

/*
** test0_vsseg3e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e8_v_i8mf2_m(vbool16_t mask,int8_t *base,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,size_t vl)
{
    vsseg3e8_v_i8mf2_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e8_v_i8mf2_m(vbool16_t mask,int8_t *base,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,size_t vl)
{
    vsseg3e8_v_i8mf2_m(mask, base, v0, v1, v2, 6);
}

/*
** test0_vsseg3e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e8_v_i8mf4_m(vbool32_t mask,int8_t *base,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,size_t vl)
{
    vsseg3e8_v_i8mf4_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e8_v_i8mf4_m(vbool32_t mask,int8_t *base,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,size_t vl)
{
    vsseg3e8_v_i8mf4_m(mask, base, v0, v1, v2, 20);
}

/*
** test0_vsseg3e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e8_v_i8mf8_m(vbool64_t mask,int8_t *base,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,size_t vl)
{
    vsseg3e8_v_i8mf8_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e8_v_i8mf8_m(vbool64_t mask,int8_t *base,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,size_t vl)
{
    vsseg3e8_v_i8mf8_m(mask, base, v0, v1, v2, 16);
}

/*
** test0_vsseg3e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,size_t vl)
{
    vsseg3e8_v_u8mf2_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,size_t vl)
{
    vsseg3e8_v_u8mf2_m(mask, base, v0, v1, v2, 3);
}

/*
** test0_vsseg3e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,size_t vl)
{
    vsseg3e8_v_u8mf4_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,size_t vl)
{
    vsseg3e8_v_u8mf4_m(mask, base, v0, v1, v2, 0);
}

/*
** test0_vsseg3e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg3e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,size_t vl)
{
    vsseg3e8_v_u8mf8_m(mask, base, v0, v1, v2, vl);
}

/*
** test1_vsseg3e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg3e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,size_t vl)
{
    vsseg3e8_v_u8mf8_m(mask, base, v0, v1, v2, 17);
}

/*
** test0_vsseg4e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e16_v_f16m1_m(vbool16_t mask,float16_t *base,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,size_t vl)
{
    vsseg4e16_v_f16m1_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e16_v_f16m1_m(vbool16_t mask,float16_t *base,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,size_t vl)
{
    vsseg4e16_v_f16m1_m(mask, base, v0, v1, v2, v3, 11);
}

/*
** test0_vsseg4e16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e16_v_f16m2_m(vbool8_t mask,float16_t *base,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,vfloat16m2_t v3,size_t vl)
{
    vsseg4e16_v_f16m2_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_f16m2_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e16_v_f16m2_m(vbool8_t mask,float16_t *base,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,vfloat16m2_t v3,size_t vl)
{
    vsseg4e16_v_f16m2_m(mask, base, v0, v1, v2, v3, 25);
}

/*
** test0_vsseg4e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg4e16_v_f16mf2(float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,size_t vl)
{
    vsseg4e16_v_f16mf2(base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg4e16_v_f16mf2(float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,size_t vl)
{
    vsseg4e16_v_f16mf2(base, v0, v1, v2, v3, 19);
}

/*
** test0_vsseg4e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e16_v_f16mf2_m(vbool32_t mask,float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,size_t vl)
{
    vsseg4e16_v_f16mf2_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e16_v_f16mf2_m(vbool32_t mask,float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,size_t vl)
{
    vsseg4e16_v_f16mf2_m(mask, base, v0, v1, v2, v3, 2);
}

/*
** test0_vsseg4e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg4e16_v_f16mf4(float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vsseg4e16_v_f16mf4(base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg4e16_v_f16mf4(float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vsseg4e16_v_f16mf4(base, v0, v1, v2, v3, 25);
}

/*
** test0_vsseg4e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e16_v_f16mf4_m(vbool64_t mask,float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vsseg4e16_v_f16mf4_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e16_v_f16mf4_m(vbool64_t mask,float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vsseg4e16_v_f16mf4_m(mask, base, v0, v1, v2, v3, 9);
}

/*
** test0_vsseg4e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e16_v_i16m1_m(vbool16_t mask,int16_t *base,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,size_t vl)
{
    vsseg4e16_v_i16m1_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e16_v_i16m1_m(vbool16_t mask,int16_t *base,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,size_t vl)
{
    vsseg4e16_v_i16m1_m(mask, base, v0, v1, v2, v3, 6);
}

/*
** test0_vsseg4e16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e16_v_i16m2_m(vbool8_t mask,int16_t *base,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,vint16m2_t v3,size_t vl)
{
    vsseg4e16_v_i16m2_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_i16m2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e16_v_i16m2_m(vbool8_t mask,int16_t *base,vint16m2_t v0,vint16m2_t v1,vint16m2_t v2,vint16m2_t v3,size_t vl)
{
    vsseg4e16_v_i16m2_m(mask, base, v0, v1, v2, v3, 5);
}

/*
** test0_vsseg4e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg4e16_v_i16mf2(int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,size_t vl)
{
    vsseg4e16_v_i16mf2(base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg4e16_v_i16mf2(int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,size_t vl)
{
    vsseg4e16_v_i16mf2(base, v0, v1, v2, v3, 18);
}

/*
** test0_vsseg4e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e16_v_i16mf2_m(vbool32_t mask,int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,size_t vl)
{
    vsseg4e16_v_i16mf2_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e16_v_i16mf2_m(vbool32_t mask,int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,size_t vl)
{
    vsseg4e16_v_i16mf2_m(mask, base, v0, v1, v2, v3, 13);
}

/*
** test0_vsseg4e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg4e16_v_i16mf4(int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,size_t vl)
{
    vsseg4e16_v_i16mf4(base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg4e16_v_i16mf4(int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,size_t vl)
{
    vsseg4e16_v_i16mf4(base, v0, v1, v2, v3, 16);
}

/*
** test0_vsseg4e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e16_v_i16mf4_m(vbool64_t mask,int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,size_t vl)
{
    vsseg4e16_v_i16mf4_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e16_v_i16mf4_m(vbool64_t mask,int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,size_t vl)
{
    vsseg4e16_v_i16mf4_m(mask, base, v0, v1, v2, v3, 23);
}

/*
** test0_vsseg4e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,size_t vl)
{
    vsseg4e16_v_u16m1_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,size_t vl)
{
    vsseg4e16_v_u16m1_m(mask, base, v0, v1, v2, v3, 28);
}

/*
** test0_vsseg4e16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e16_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,vuint16m2_t v3,size_t vl)
{
    vsseg4e16_v_u16m2_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_u16m2_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e16_v_u16m2_m(vbool8_t mask,uint16_t *base,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,vuint16m2_t v3,size_t vl)
{
    vsseg4e16_v_u16m2_m(mask, base, v0, v1, v2, v3, 30);
}

/*
** test0_vsseg4e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg4e16_v_u16mf2(uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,size_t vl)
{
    vsseg4e16_v_u16mf2(base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg4e16_v_u16mf2(uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,size_t vl)
{
    vsseg4e16_v_u16mf2(base, v0, v1, v2, v3, 17);
}

/*
** test0_vsseg4e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,size_t vl)
{
    vsseg4e16_v_u16mf2_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,size_t vl)
{
    vsseg4e16_v_u16mf2_m(mask, base, v0, v1, v2, v3, 21);
}

/*
** test0_vsseg4e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg4e16_v_u16mf4(uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,size_t vl)
{
    vsseg4e16_v_u16mf4(base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg4e16_v_u16mf4(uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,size_t vl)
{
    vsseg4e16_v_u16mf4(base, v0, v1, v2, v3, 28);
}

/*
** test0_vsseg4e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,size_t vl)
{
    vsseg4e16_v_u16mf4_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,size_t vl)
{
    vsseg4e16_v_u16mf4_m(mask, base, v0, v1, v2, v3, 29);
}

/*
** test0_vsseg4e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e32_v_f32m1_m(vbool32_t mask,float32_t *base,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,size_t vl)
{
    vsseg4e32_v_f32m1_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e32_v_f32m1_m(vbool32_t mask,float32_t *base,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,size_t vl)
{
    vsseg4e32_v_f32m1_m(mask, base, v0, v1, v2, v3, 14);
}

/*
** test0_vsseg4e32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e32_v_f32m2_m(vbool16_t mask,float32_t *base,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,vfloat32m2_t v3,size_t vl)
{
    vsseg4e32_v_f32m2_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e32_v_f32m2_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e32_v_f32m2_m(vbool16_t mask,float32_t *base,vfloat32m2_t v0,vfloat32m2_t v1,vfloat32m2_t v2,vfloat32m2_t v3,size_t vl)
{
    vsseg4e32_v_f32m2_m(mask, base, v0, v1, v2, v3, 30);
}

/*
** test0_vsseg4e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg4e32_v_f32mf2(float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,size_t vl)
{
    vsseg4e32_v_f32mf2(base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg4e32_v_f32mf2(float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,size_t vl)
{
    vsseg4e32_v_f32mf2(base, v0, v1, v2, v3, 31);
}

/*
** test0_vsseg4e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e32_v_f32mf2_m(vbool64_t mask,float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,size_t vl)
{
    vsseg4e32_v_f32mf2_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e32_v_f32mf2_m(vbool64_t mask,float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,size_t vl)
{
    vsseg4e32_v_f32mf2_m(mask, base, v0, v1, v2, v3, 1);
}

/*
** test0_vsseg4e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e32_v_i32m1_m(vbool32_t mask,int32_t *base,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,size_t vl)
{
    vsseg4e32_v_i32m1_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e32_v_i32m1_m(vbool32_t mask,int32_t *base,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,size_t vl)
{
    vsseg4e32_v_i32m1_m(mask, base, v0, v1, v2, v3, 18);
}

/*
** test0_vsseg4e32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e32_v_i32m2_m(vbool16_t mask,int32_t *base,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,vint32m2_t v3,size_t vl)
{
    vsseg4e32_v_i32m2_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e32_v_i32m2_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e32_v_i32m2_m(vbool16_t mask,int32_t *base,vint32m2_t v0,vint32m2_t v1,vint32m2_t v2,vint32m2_t v3,size_t vl)
{
    vsseg4e32_v_i32m2_m(mask, base, v0, v1, v2, v3, 16);
}

/*
** test0_vsseg4e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg4e32_v_i32mf2(int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,size_t vl)
{
    vsseg4e32_v_i32mf2(base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg4e32_v_i32mf2(int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,size_t vl)
{
    vsseg4e32_v_i32mf2(base, v0, v1, v2, v3, 7);
}

/*
** test0_vsseg4e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e32_v_i32mf2_m(vbool64_t mask,int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,size_t vl)
{
    vsseg4e32_v_i32mf2_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e32_v_i32mf2_m(vbool64_t mask,int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,size_t vl)
{
    vsseg4e32_v_i32mf2_m(mask, base, v0, v1, v2, v3, 19);
}

/*
** test0_vsseg4e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,size_t vl)
{
    vsseg4e32_v_u32m1_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,size_t vl)
{
    vsseg4e32_v_u32m1_m(mask, base, v0, v1, v2, v3, 31);
}

/*
** test0_vsseg4e32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e32_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,vuint32m2_t v3,size_t vl)
{
    vsseg4e32_v_u32m2_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e32_v_u32m2_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e32_v_u32m2_m(vbool16_t mask,uint32_t *base,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,vuint32m2_t v3,size_t vl)
{
    vsseg4e32_v_u32m2_m(mask, base, v0, v1, v2, v3, 17);
}

/*
** test0_vsseg4e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg4e32_v_u32mf2(uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vsseg4e32_v_u32mf2(base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg4e32_v_u32mf2(uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vsseg4e32_v_u32mf2(base, v0, v1, v2, v3, 9);
}

/*
** test0_vsseg4e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vsseg4e32_v_u32mf2_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vsseg4e32_v_u32mf2_m(mask, base, v0, v1, v2, v3, 15);
}

/*
** test0_vsseg4e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e64_v_f64m1_m(vbool64_t mask,float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,size_t vl)
{
    vsseg4e64_v_f64m1_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e64_v_f64m1_m(vbool64_t mask,float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,size_t vl)
{
    vsseg4e64_v_f64m1_m(mask, base, v0, v1, v2, v3, 0);
}

/*
** test0_vsseg4e64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e64_v_f64m2_m(vbool32_t mask,float64_t *base,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,vfloat64m2_t v3,size_t vl)
{
    vsseg4e64_v_f64m2_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e64_v_f64m2_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e64_v_f64m2_m(vbool32_t mask,float64_t *base,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,vfloat64m2_t v3,size_t vl)
{
    vsseg4e64_v_f64m2_m(mask, base, v0, v1, v2, v3, 8);
}

/*
** test0_vsseg4e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e64_v_i64m1_m(vbool64_t mask,int64_t *base,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,size_t vl)
{
    vsseg4e64_v_i64m1_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e64_v_i64m1_m(vbool64_t mask,int64_t *base,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,size_t vl)
{
    vsseg4e64_v_i64m1_m(mask, base, v0, v1, v2, v3, 22);
}

/*
** test0_vsseg4e64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e64_v_i64m2_m(vbool32_t mask,int64_t *base,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,vint64m2_t v3,size_t vl)
{
    vsseg4e64_v_i64m2_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e64_v_i64m2_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e64_v_i64m2_m(vbool32_t mask,int64_t *base,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,vint64m2_t v3,size_t vl)
{
    vsseg4e64_v_i64m2_m(mask, base, v0, v1, v2, v3, 1);
}

/*
** test0_vsseg4e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,size_t vl)
{
    vsseg4e64_v_u64m1_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,size_t vl)
{
    vsseg4e64_v_u64m1_m(mask, base, v0, v1, v2, v3, 10);
}

/*
** test0_vsseg4e64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e64_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,vuint64m2_t v3,size_t vl)
{
    vsseg4e64_v_u64m2_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e64_v_u64m2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e64_v_u64m2_m(vbool32_t mask,uint64_t *base,vuint64m2_t v0,vuint64m2_t v1,vuint64m2_t v2,vuint64m2_t v3,size_t vl)
{
    vsseg4e64_v_u64m2_m(mask, base, v0, v1, v2, v3, 14);
}

/*
** test0_vsseg4e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e8_v_i8mf2_m(vbool16_t mask,int8_t *base,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,size_t vl)
{
    vsseg4e8_v_i8mf2_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e8_v_i8mf2_m(vbool16_t mask,int8_t *base,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,size_t vl)
{
    vsseg4e8_v_i8mf2_m(mask, base, v0, v1, v2, v3, 26);
}

/*
** test0_vsseg4e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e8_v_i8mf4_m(vbool32_t mask,int8_t *base,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,size_t vl)
{
    vsseg4e8_v_i8mf4_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e8_v_i8mf4_m(vbool32_t mask,int8_t *base,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,size_t vl)
{
    vsseg4e8_v_i8mf4_m(mask, base, v0, v1, v2, v3, 19);
}

/*
** test0_vsseg4e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e8_v_i8mf8_m(vbool64_t mask,int8_t *base,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,size_t vl)
{
    vsseg4e8_v_i8mf8_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e8_v_i8mf8_m(vbool64_t mask,int8_t *base,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,size_t vl)
{
    vsseg4e8_v_i8mf8_m(mask, base, v0, v1, v2, v3, 21);
}

/*
** test0_vsseg4e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,size_t vl)
{
    vsseg4e8_v_u8mf2_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,size_t vl)
{
    vsseg4e8_v_u8mf2_m(mask, base, v0, v1, v2, v3, 5);
}

/*
** test0_vsseg4e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,size_t vl)
{
    vsseg4e8_v_u8mf4_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,size_t vl)
{
    vsseg4e8_v_u8mf4_m(mask, base, v0, v1, v2, v3, 19);
}

/*
** test0_vsseg4e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg4e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,size_t vl)
{
    vsseg4e8_v_u8mf8_m(mask, base, v0, v1, v2, v3, vl);
}

/*
** test1_vsseg4e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg4e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,size_t vl)
{
    vsseg4e8_v_u8mf8_m(mask, base, v0, v1, v2, v3, 19);
}

/*
** test0_vsseg5e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e16_v_f16m1_m(vbool16_t mask,float16_t *base,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,size_t vl)
{
    vsseg5e16_v_f16m1_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e16_v_f16m1_m(vbool16_t mask,float16_t *base,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,size_t vl)
{
    vsseg5e16_v_f16m1_m(mask, base, v0, v1, v2, v3, v4, 18);
}

/*
** test0_vsseg5e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg5e16_v_f16mf2(float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vsseg5e16_v_f16mf2(base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg5e16_v_f16mf2(float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vsseg5e16_v_f16mf2(base, v0, v1, v2, v3, v4, 21);
}

/*
** test0_vsseg5e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e16_v_f16mf2_m(vbool32_t mask,float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vsseg5e16_v_f16mf2_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e16_v_f16mf2_m(vbool32_t mask,float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vsseg5e16_v_f16mf2_m(mask, base, v0, v1, v2, v3, v4, 5);
}

/*
** test0_vsseg5e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg5e16_v_f16mf4(float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,size_t vl)
{
    vsseg5e16_v_f16mf4(base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg5e16_v_f16mf4(float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,size_t vl)
{
    vsseg5e16_v_f16mf4(base, v0, v1, v2, v3, v4, 10);
}

/*
** test0_vsseg5e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e16_v_f16mf4_m(vbool64_t mask,float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,size_t vl)
{
    vsseg5e16_v_f16mf4_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e16_v_f16mf4_m(vbool64_t mask,float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,size_t vl)
{
    vsseg5e16_v_f16mf4_m(mask, base, v0, v1, v2, v3, v4, 31);
}

/*
** test0_vsseg5e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e16_v_i16m1_m(vbool16_t mask,int16_t *base,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,size_t vl)
{
    vsseg5e16_v_i16m1_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e16_v_i16m1_m(vbool16_t mask,int16_t *base,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,size_t vl)
{
    vsseg5e16_v_i16m1_m(mask, base, v0, v1, v2, v3, v4, 14);
}

/*
** test0_vsseg5e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg5e16_v_i16mf2(int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,size_t vl)
{
    vsseg5e16_v_i16mf2(base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg5e16_v_i16mf2(int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,size_t vl)
{
    vsseg5e16_v_i16mf2(base, v0, v1, v2, v3, v4, 27);
}

/*
** test0_vsseg5e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e16_v_i16mf2_m(vbool32_t mask,int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,size_t vl)
{
    vsseg5e16_v_i16mf2_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e16_v_i16mf2_m(vbool32_t mask,int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,size_t vl)
{
    vsseg5e16_v_i16mf2_m(mask, base, v0, v1, v2, v3, v4, 24);
}

/*
** test0_vsseg5e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg5e16_v_i16mf4(int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,size_t vl)
{
    vsseg5e16_v_i16mf4(base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg5e16_v_i16mf4(int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,size_t vl)
{
    vsseg5e16_v_i16mf4(base, v0, v1, v2, v3, v4, 23);
}

/*
** test0_vsseg5e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e16_v_i16mf4_m(vbool64_t mask,int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,size_t vl)
{
    vsseg5e16_v_i16mf4_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e16_v_i16mf4_m(vbool64_t mask,int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,size_t vl)
{
    vsseg5e16_v_i16mf4_m(mask, base, v0, v1, v2, v3, v4, 29);
}

/*
** test0_vsseg5e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,size_t vl)
{
    vsseg5e16_v_u16m1_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,size_t vl)
{
    vsseg5e16_v_u16m1_m(mask, base, v0, v1, v2, v3, v4, 0);
}

/*
** test0_vsseg5e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg5e16_v_u16mf2(uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,size_t vl)
{
    vsseg5e16_v_u16mf2(base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg5e16_v_u16mf2(uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,size_t vl)
{
    vsseg5e16_v_u16mf2(base, v0, v1, v2, v3, v4, 9);
}

/*
** test0_vsseg5e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,size_t vl)
{
    vsseg5e16_v_u16mf2_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,size_t vl)
{
    vsseg5e16_v_u16mf2_m(mask, base, v0, v1, v2, v3, v4, 10);
}

/*
** test0_vsseg5e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg5e16_v_u16mf4(uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vsseg5e16_v_u16mf4(base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg5e16_v_u16mf4(uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vsseg5e16_v_u16mf4(base, v0, v1, v2, v3, v4, 18);
}

/*
** test0_vsseg5e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vsseg5e16_v_u16mf4_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,size_t vl)
{
    vsseg5e16_v_u16mf4_m(mask, base, v0, v1, v2, v3, v4, 0);
}

/*
** test0_vsseg5e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e32_v_f32m1_m(vbool32_t mask,float32_t *base,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,size_t vl)
{
    vsseg5e32_v_f32m1_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e32_v_f32m1_m(vbool32_t mask,float32_t *base,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,size_t vl)
{
    vsseg5e32_v_f32m1_m(mask, base, v0, v1, v2, v3, v4, 10);
}

/*
** test0_vsseg5e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg5e32_v_f32mf2(float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,size_t vl)
{
    vsseg5e32_v_f32mf2(base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg5e32_v_f32mf2(float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,size_t vl)
{
    vsseg5e32_v_f32mf2(base, v0, v1, v2, v3, v4, 30);
}

/*
** test0_vsseg5e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e32_v_f32mf2_m(vbool64_t mask,float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,size_t vl)
{
    vsseg5e32_v_f32mf2_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e32_v_f32mf2_m(vbool64_t mask,float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,size_t vl)
{
    vsseg5e32_v_f32mf2_m(mask, base, v0, v1, v2, v3, v4, 18);
}

/*
** test0_vsseg5e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e32_v_i32m1_m(vbool32_t mask,int32_t *base,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,size_t vl)
{
    vsseg5e32_v_i32m1_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e32_v_i32m1_m(vbool32_t mask,int32_t *base,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,size_t vl)
{
    vsseg5e32_v_i32m1_m(mask, base, v0, v1, v2, v3, v4, 28);
}

/*
** test0_vsseg5e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg5e32_v_i32mf2(int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,size_t vl)
{
    vsseg5e32_v_i32mf2(base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg5e32_v_i32mf2(int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,size_t vl)
{
    vsseg5e32_v_i32mf2(base, v0, v1, v2, v3, v4, 12);
}

/*
** test0_vsseg5e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e32_v_i32mf2_m(vbool64_t mask,int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,size_t vl)
{
    vsseg5e32_v_i32mf2_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e32_v_i32mf2_m(vbool64_t mask,int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,size_t vl)
{
    vsseg5e32_v_i32mf2_m(mask, base, v0, v1, v2, v3, v4, 13);
}

/*
** test0_vsseg5e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,size_t vl)
{
    vsseg5e32_v_u32m1_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,size_t vl)
{
    vsseg5e32_v_u32m1_m(mask, base, v0, v1, v2, v3, v4, 5);
}

/*
** test0_vsseg5e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg5e32_v_u32mf2(uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,size_t vl)
{
    vsseg5e32_v_u32mf2(base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg5e32_v_u32mf2(uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,size_t vl)
{
    vsseg5e32_v_u32mf2(base, v0, v1, v2, v3, v4, 29);
}

/*
** test0_vsseg5e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,size_t vl)
{
    vsseg5e32_v_u32mf2_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,size_t vl)
{
    vsseg5e32_v_u32mf2_m(mask, base, v0, v1, v2, v3, v4, 28);
}

/*
** test0_vsseg5e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e64_v_f64m1_m(vbool64_t mask,float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,size_t vl)
{
    vsseg5e64_v_f64m1_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e64_v_f64m1_m(vbool64_t mask,float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,size_t vl)
{
    vsseg5e64_v_f64m1_m(mask, base, v0, v1, v2, v3, v4, 3);
}

/*
** test0_vsseg5e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e64_v_i64m1_m(vbool64_t mask,int64_t *base,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,size_t vl)
{
    vsseg5e64_v_i64m1_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e64_v_i64m1_m(vbool64_t mask,int64_t *base,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,size_t vl)
{
    vsseg5e64_v_i64m1_m(mask, base, v0, v1, v2, v3, v4, 7);
}

/*
** test0_vsseg5e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,size_t vl)
{
    vsseg5e64_v_u64m1_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,size_t vl)
{
    vsseg5e64_v_u64m1_m(mask, base, v0, v1, v2, v3, v4, 10);
}

/*
** test0_vsseg5e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e8_v_i8mf2_m(vbool16_t mask,int8_t *base,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,size_t vl)
{
    vsseg5e8_v_i8mf2_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e8_v_i8mf2_m(vbool16_t mask,int8_t *base,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,size_t vl)
{
    vsseg5e8_v_i8mf2_m(mask, base, v0, v1, v2, v3, v4, 4);
}

/*
** test0_vsseg5e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e8_v_i8mf4_m(vbool32_t mask,int8_t *base,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,size_t vl)
{
    vsseg5e8_v_i8mf4_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e8_v_i8mf4_m(vbool32_t mask,int8_t *base,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,size_t vl)
{
    vsseg5e8_v_i8mf4_m(mask, base, v0, v1, v2, v3, v4, 31);
}

/*
** test0_vsseg5e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e8_v_i8mf8_m(vbool64_t mask,int8_t *base,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,size_t vl)
{
    vsseg5e8_v_i8mf8_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e8_v_i8mf8_m(vbool64_t mask,int8_t *base,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,size_t vl)
{
    vsseg5e8_v_i8mf8_m(mask, base, v0, v1, v2, v3, v4, 4);
}

/*
** test0_vsseg5e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,size_t vl)
{
    vsseg5e8_v_u8mf2_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,size_t vl)
{
    vsseg5e8_v_u8mf2_m(mask, base, v0, v1, v2, v3, v4, 22);
}

/*
** test0_vsseg5e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,size_t vl)
{
    vsseg5e8_v_u8mf4_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,size_t vl)
{
    vsseg5e8_v_u8mf4_m(mask, base, v0, v1, v2, v3, v4, 31);
}

/*
** test0_vsseg5e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg5e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,size_t vl)
{
    vsseg5e8_v_u8mf8_m(mask, base, v0, v1, v2, v3, v4, vl);
}

/*
** test1_vsseg5e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg5e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,size_t vl)
{
    vsseg5e8_v_u8mf8_m(mask, base, v0, v1, v2, v3, v4, 0);
}

/*
** test0_vsseg6e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e16_v_f16m1_m(vbool16_t mask,float16_t *base,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,size_t vl)
{
    vsseg6e16_v_f16m1_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e16_v_f16m1_m(vbool16_t mask,float16_t *base,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,size_t vl)
{
    vsseg6e16_v_f16m1_m(mask, base, v0, v1, v2, v3, v4, v5, 27);
}

/*
** test0_vsseg6e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg6e16_v_f16mf2(float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,size_t vl)
{
    vsseg6e16_v_f16mf2(base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg6e16_v_f16mf2(float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,size_t vl)
{
    vsseg6e16_v_f16mf2(base, v0, v1, v2, v3, v4, v5, 11);
}

/*
** test0_vsseg6e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e16_v_f16mf2_m(vbool32_t mask,float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,size_t vl)
{
    vsseg6e16_v_f16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e16_v_f16mf2_m(vbool32_t mask,float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,size_t vl)
{
    vsseg6e16_v_f16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, 18);
}

/*
** test0_vsseg6e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg6e16_v_f16mf4(float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,size_t vl)
{
    vsseg6e16_v_f16mf4(base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg6e16_v_f16mf4(float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,size_t vl)
{
    vsseg6e16_v_f16mf4(base, v0, v1, v2, v3, v4, v5, 11);
}

/*
** test0_vsseg6e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e16_v_f16mf4_m(vbool64_t mask,float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,size_t vl)
{
    vsseg6e16_v_f16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e16_v_f16mf4_m(vbool64_t mask,float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,size_t vl)
{
    vsseg6e16_v_f16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, 9);
}

/*
** test0_vsseg6e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e16_v_i16m1_m(vbool16_t mask,int16_t *base,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,size_t vl)
{
    vsseg6e16_v_i16m1_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e16_v_i16m1_m(vbool16_t mask,int16_t *base,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,size_t vl)
{
    vsseg6e16_v_i16m1_m(mask, base, v0, v1, v2, v3, v4, v5, 28);
}

/*
** test0_vsseg6e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg6e16_v_i16mf2(int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,size_t vl)
{
    vsseg6e16_v_i16mf2(base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg6e16_v_i16mf2(int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,size_t vl)
{
    vsseg6e16_v_i16mf2(base, v0, v1, v2, v3, v4, v5, 12);
}

/*
** test0_vsseg6e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e16_v_i16mf2_m(vbool32_t mask,int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,size_t vl)
{
    vsseg6e16_v_i16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e16_v_i16mf2_m(vbool32_t mask,int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,size_t vl)
{
    vsseg6e16_v_i16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, 29);
}

/*
** test0_vsseg6e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg6e16_v_i16mf4(int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vsseg6e16_v_i16mf4(base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg6e16_v_i16mf4(int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vsseg6e16_v_i16mf4(base, v0, v1, v2, v3, v4, v5, 1);
}

/*
** test0_vsseg6e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e16_v_i16mf4_m(vbool64_t mask,int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vsseg6e16_v_i16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e16_v_i16mf4_m(vbool64_t mask,int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,size_t vl)
{
    vsseg6e16_v_i16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, 9);
}

/*
** test0_vsseg6e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,size_t vl)
{
    vsseg6e16_v_u16m1_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,size_t vl)
{
    vsseg6e16_v_u16m1_m(mask, base, v0, v1, v2, v3, v4, v5, 13);
}

/*
** test0_vsseg6e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg6e16_v_u16mf2(uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,size_t vl)
{
    vsseg6e16_v_u16mf2(base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg6e16_v_u16mf2(uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,size_t vl)
{
    vsseg6e16_v_u16mf2(base, v0, v1, v2, v3, v4, v5, 28);
}

/*
** test0_vsseg6e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,size_t vl)
{
    vsseg6e16_v_u16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,size_t vl)
{
    vsseg6e16_v_u16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, 31);
}

/*
** test0_vsseg6e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg6e16_v_u16mf4(uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,size_t vl)
{
    vsseg6e16_v_u16mf4(base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg6e16_v_u16mf4(uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,size_t vl)
{
    vsseg6e16_v_u16mf4(base, v0, v1, v2, v3, v4, v5, 31);
}

/*
** test0_vsseg6e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,size_t vl)
{
    vsseg6e16_v_u16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,size_t vl)
{
    vsseg6e16_v_u16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, 5);
}

/*
** test0_vsseg6e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e32_v_f32m1_m(vbool32_t mask,float32_t *base,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,size_t vl)
{
    vsseg6e32_v_f32m1_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e32_v_f32m1_m(vbool32_t mask,float32_t *base,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,size_t vl)
{
    vsseg6e32_v_f32m1_m(mask, base, v0, v1, v2, v3, v4, v5, 29);
}

/*
** test0_vsseg6e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg6e32_v_f32mf2(float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vsseg6e32_v_f32mf2(base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*25,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg6e32_v_f32mf2(float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vsseg6e32_v_f32mf2(base, v0, v1, v2, v3, v4, v5, 25);
}

/*
** test0_vsseg6e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e32_v_f32mf2_m(vbool64_t mask,float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vsseg6e32_v_f32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e32_v_f32mf2_m(vbool64_t mask,float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vsseg6e32_v_f32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, 21);
}

/*
** test0_vsseg6e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e32_v_i32m1_m(vbool32_t mask,int32_t *base,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,size_t vl)
{
    vsseg6e32_v_i32m1_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e32_v_i32m1_m(vbool32_t mask,int32_t *base,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,size_t vl)
{
    vsseg6e32_v_i32m1_m(mask, base, v0, v1, v2, v3, v4, v5, 21);
}

/*
** test0_vsseg6e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg6e32_v_i32mf2(int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,size_t vl)
{
    vsseg6e32_v_i32mf2(base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg6e32_v_i32mf2(int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,size_t vl)
{
    vsseg6e32_v_i32mf2(base, v0, v1, v2, v3, v4, v5, 16);
}

/*
** test0_vsseg6e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e32_v_i32mf2_m(vbool64_t mask,int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,size_t vl)
{
    vsseg6e32_v_i32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e32_v_i32mf2_m(vbool64_t mask,int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,size_t vl)
{
    vsseg6e32_v_i32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, 19);
}

/*
** test0_vsseg6e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,size_t vl)
{
    vsseg6e32_v_u32m1_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,size_t vl)
{
    vsseg6e32_v_u32m1_m(mask, base, v0, v1, v2, v3, v4, v5, 4);
}

/*
** test0_vsseg6e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg6e32_v_u32mf2(uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vsseg6e32_v_u32mf2(base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg6e32_v_u32mf2(uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vsseg6e32_v_u32mf2(base, v0, v1, v2, v3, v4, v5, 7);
}

/*
** test0_vsseg6e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vsseg6e32_v_u32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vsseg6e32_v_u32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, 16);
}

/*
** test0_vsseg6e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e64_v_f64m1_m(vbool64_t mask,float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,size_t vl)
{
    vsseg6e64_v_f64m1_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e64_v_f64m1_m(vbool64_t mask,float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,size_t vl)
{
    vsseg6e64_v_f64m1_m(mask, base, v0, v1, v2, v3, v4, v5, 2);
}

/*
** test0_vsseg6e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e64_v_i64m1_m(vbool64_t mask,int64_t *base,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,size_t vl)
{
    vsseg6e64_v_i64m1_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e64_v_i64m1_m(vbool64_t mask,int64_t *base,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,size_t vl)
{
    vsseg6e64_v_i64m1_m(mask, base, v0, v1, v2, v3, v4, v5, 31);
}

/*
** test0_vsseg6e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,size_t vl)
{
    vsseg6e64_v_u64m1_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,size_t vl)
{
    vsseg6e64_v_u64m1_m(mask, base, v0, v1, v2, v3, v4, v5, 11);
}

/*
** test0_vsseg6e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e8_v_i8mf2_m(vbool16_t mask,int8_t *base,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,size_t vl)
{
    vsseg6e8_v_i8mf2_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e8_v_i8mf2_m(vbool16_t mask,int8_t *base,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,size_t vl)
{
    vsseg6e8_v_i8mf2_m(mask, base, v0, v1, v2, v3, v4, v5, 26);
}

/*
** test0_vsseg6e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e8_v_i8mf4_m(vbool32_t mask,int8_t *base,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,size_t vl)
{
    vsseg6e8_v_i8mf4_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e8_v_i8mf4_m(vbool32_t mask,int8_t *base,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,size_t vl)
{
    vsseg6e8_v_i8mf4_m(mask, base, v0, v1, v2, v3, v4, v5, 24);
}

/*
** test0_vsseg6e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e8_v_i8mf8_m(vbool64_t mask,int8_t *base,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,size_t vl)
{
    vsseg6e8_v_i8mf8_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e8_v_i8mf8_m(vbool64_t mask,int8_t *base,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,size_t vl)
{
    vsseg6e8_v_i8mf8_m(mask, base, v0, v1, v2, v3, v4, v5, 0);
}

/*
** test0_vsseg6e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,size_t vl)
{
    vsseg6e8_v_u8mf2_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,size_t vl)
{
    vsseg6e8_v_u8mf2_m(mask, base, v0, v1, v2, v3, v4, v5, 20);
}

/*
** test0_vsseg6e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,size_t vl)
{
    vsseg6e8_v_u8mf4_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,size_t vl)
{
    vsseg6e8_v_u8mf4_m(mask, base, v0, v1, v2, v3, v4, v5, 10);
}

/*
** test0_vsseg6e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg6e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,size_t vl)
{
    vsseg6e8_v_u8mf8_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/*
** test1_vsseg6e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg6e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,size_t vl)
{
    vsseg6e8_v_u8mf8_m(mask, base, v0, v1, v2, v3, v4, v5, 2);
}

/*
** test0_vsseg7e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e16_v_f16m1_m(vbool16_t mask,float16_t *base,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,size_t vl)
{
    vsseg7e16_v_f16m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e16_v_f16m1_m(vbool16_t mask,float16_t *base,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,size_t vl)
{
    vsseg7e16_v_f16m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 3);
}

/*
** test0_vsseg7e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg7e16_v_f16mf2(float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,size_t vl)
{
    vsseg7e16_v_f16mf2(base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg7e16_v_f16mf2(float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,size_t vl)
{
    vsseg7e16_v_f16mf2(base, v0, v1, v2, v3, v4, v5, v6, 2);
}

/*
** test0_vsseg7e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e16_v_f16mf2_m(vbool32_t mask,float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,size_t vl)
{
    vsseg7e16_v_f16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e16_v_f16mf2_m(vbool32_t mask,float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,size_t vl)
{
    vsseg7e16_v_f16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 25);
}

/*
** test0_vsseg7e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg7e16_v_f16mf4(float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,size_t vl)
{
    vsseg7e16_v_f16mf4(base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg7e16_v_f16mf4(float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,size_t vl)
{
    vsseg7e16_v_f16mf4(base, v0, v1, v2, v3, v4, v5, v6, 24);
}

/*
** test0_vsseg7e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e16_v_f16mf4_m(vbool64_t mask,float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,size_t vl)
{
    vsseg7e16_v_f16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e16_v_f16mf4_m(vbool64_t mask,float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,size_t vl)
{
    vsseg7e16_v_f16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 11);
}

/*
** test0_vsseg7e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e16_v_i16m1_m(vbool16_t mask,int16_t *base,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,size_t vl)
{
    vsseg7e16_v_i16m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e16_v_i16m1_m(vbool16_t mask,int16_t *base,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,size_t vl)
{
    vsseg7e16_v_i16m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 19);
}

/*
** test0_vsseg7e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg7e16_v_i16mf2(int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,size_t vl)
{
    vsseg7e16_v_i16mf2(base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg7e16_v_i16mf2(int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,size_t vl)
{
    vsseg7e16_v_i16mf2(base, v0, v1, v2, v3, v4, v5, v6, 3);
}

/*
** test0_vsseg7e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e16_v_i16mf2_m(vbool32_t mask,int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,size_t vl)
{
    vsseg7e16_v_i16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e16_v_i16mf2_m(vbool32_t mask,int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,size_t vl)
{
    vsseg7e16_v_i16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 20);
}

/*
** test0_vsseg7e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg7e16_v_i16mf4(int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,size_t vl)
{
    vsseg7e16_v_i16mf4(base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg7e16_v_i16mf4(int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,size_t vl)
{
    vsseg7e16_v_i16mf4(base, v0, v1, v2, v3, v4, v5, v6, 8);
}

/*
** test0_vsseg7e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e16_v_i16mf4_m(vbool64_t mask,int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,size_t vl)
{
    vsseg7e16_v_i16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e16_v_i16mf4_m(vbool64_t mask,int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,size_t vl)
{
    vsseg7e16_v_i16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 8);
}

/*
** test0_vsseg7e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,size_t vl)
{
    vsseg7e16_v_u16m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,size_t vl)
{
    vsseg7e16_v_u16m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 11);
}

/*
** test0_vsseg7e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg7e16_v_u16mf2(uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,size_t vl)
{
    vsseg7e16_v_u16mf2(base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg7e16_v_u16mf2(uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,size_t vl)
{
    vsseg7e16_v_u16mf2(base, v0, v1, v2, v3, v4, v5, v6, 27);
}

/*
** test0_vsseg7e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,size_t vl)
{
    vsseg7e16_v_u16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,size_t vl)
{
    vsseg7e16_v_u16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 0);
}

/*
** test0_vsseg7e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg7e16_v_u16mf4(uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,size_t vl)
{
    vsseg7e16_v_u16mf4(base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg7e16_v_u16mf4(uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,size_t vl)
{
    vsseg7e16_v_u16mf4(base, v0, v1, v2, v3, v4, v5, v6, 10);
}

/*
** test0_vsseg7e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,size_t vl)
{
    vsseg7e16_v_u16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,size_t vl)
{
    vsseg7e16_v_u16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 15);
}

/*
** test0_vsseg7e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e32_v_f32m1_m(vbool32_t mask,float32_t *base,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,size_t vl)
{
    vsseg7e32_v_f32m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e32_v_f32m1_m(vbool32_t mask,float32_t *base,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,size_t vl)
{
    vsseg7e32_v_f32m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 6);
}

/*
** test0_vsseg7e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg7e32_v_f32mf2(float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,size_t vl)
{
    vsseg7e32_v_f32mf2(base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*15,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg7e32_v_f32mf2(float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,size_t vl)
{
    vsseg7e32_v_f32mf2(base, v0, v1, v2, v3, v4, v5, v6, 15);
}

/*
** test0_vsseg7e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e32_v_f32mf2_m(vbool64_t mask,float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,size_t vl)
{
    vsseg7e32_v_f32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e32_v_f32mf2_m(vbool64_t mask,float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,size_t vl)
{
    vsseg7e32_v_f32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 13);
}

/*
** test0_vsseg7e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e32_v_i32m1_m(vbool32_t mask,int32_t *base,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,size_t vl)
{
    vsseg7e32_v_i32m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e32_v_i32m1_m(vbool32_t mask,int32_t *base,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,size_t vl)
{
    vsseg7e32_v_i32m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 2);
}

/*
** test0_vsseg7e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg7e32_v_i32mf2(int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,size_t vl)
{
    vsseg7e32_v_i32mf2(base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*10,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg7e32_v_i32mf2(int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,size_t vl)
{
    vsseg7e32_v_i32mf2(base, v0, v1, v2, v3, v4, v5, v6, 10);
}

/*
** test0_vsseg7e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e32_v_i32mf2_m(vbool64_t mask,int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,size_t vl)
{
    vsseg7e32_v_i32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e32_v_i32mf2_m(vbool64_t mask,int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,size_t vl)
{
    vsseg7e32_v_i32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 31);
}

/*
** test0_vsseg7e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,size_t vl)
{
    vsseg7e32_v_u32m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,size_t vl)
{
    vsseg7e32_v_u32m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 23);
}

/*
** test0_vsseg7e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg7e32_v_u32mf2(uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,size_t vl)
{
    vsseg7e32_v_u32mf2(base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg7e32_v_u32mf2(uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,size_t vl)
{
    vsseg7e32_v_u32mf2(base, v0, v1, v2, v3, v4, v5, v6, 5);
}

/*
** test0_vsseg7e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,size_t vl)
{
    vsseg7e32_v_u32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,size_t vl)
{
    vsseg7e32_v_u32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 8);
}

/*
** test0_vsseg7e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e64_v_f64m1_m(vbool64_t mask,float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,size_t vl)
{
    vsseg7e64_v_f64m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e64_v_f64m1_m(vbool64_t mask,float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,size_t vl)
{
    vsseg7e64_v_f64m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 19);
}

/*
** test0_vsseg7e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e64_v_i64m1_m(vbool64_t mask,int64_t *base,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,size_t vl)
{
    vsseg7e64_v_i64m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e64_v_i64m1_m(vbool64_t mask,int64_t *base,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,size_t vl)
{
    vsseg7e64_v_i64m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 26);
}

/*
** test0_vsseg7e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,size_t vl)
{
    vsseg7e64_v_u64m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,size_t vl)
{
    vsseg7e64_v_u64m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 18);
}

/*
** test0_vsseg7e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e8_v_i8mf2_m(vbool16_t mask,int8_t *base,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,size_t vl)
{
    vsseg7e8_v_i8mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e8_v_i8mf2_m(vbool16_t mask,int8_t *base,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,size_t vl)
{
    vsseg7e8_v_i8mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 13);
}

/*
** test0_vsseg7e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e8_v_i8mf4_m(vbool32_t mask,int8_t *base,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,size_t vl)
{
    vsseg7e8_v_i8mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e8_v_i8mf4_m(vbool32_t mask,int8_t *base,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,size_t vl)
{
    vsseg7e8_v_i8mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 24);
}

/*
** test0_vsseg7e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e8_v_i8mf8_m(vbool64_t mask,int8_t *base,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,size_t vl)
{
    vsseg7e8_v_i8mf8_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e8_v_i8mf8_m(vbool64_t mask,int8_t *base,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,size_t vl)
{
    vsseg7e8_v_i8mf8_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 19);
}

/*
** test0_vsseg7e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,size_t vl)
{
    vsseg7e8_v_u8mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,size_t vl)
{
    vsseg7e8_v_u8mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 17);
}

/*
** test0_vsseg7e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,size_t vl)
{
    vsseg7e8_v_u8mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,size_t vl)
{
    vsseg7e8_v_u8mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 22);
}

/*
** test0_vsseg7e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg7e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,size_t vl)
{
    vsseg7e8_v_u8mf8_m(mask, base, v0, v1, v2, v3, v4, v5, v6, vl);
}

/*
** test1_vsseg7e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg7e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,size_t vl)
{
    vsseg7e8_v_u8mf8_m(mask, base, v0, v1, v2, v3, v4, v5, v6, 20);
}

/*
** test0_vsseg8e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e16_v_f16m1_m(vbool16_t mask,float16_t *base,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,vfloat16m1_t v7,size_t vl)
{
    vsseg8e16_v_f16m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e16_v_f16m1_m(vbool16_t mask,float16_t *base,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,vfloat16m1_t v7,size_t vl)
{
    vsseg8e16_v_f16m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 29);
}

/*
** test0_vsseg8e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg8e16_v_f16mf2(float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vsseg8e16_v_f16mf2(base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg8e16_v_f16mf2(float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vsseg8e16_v_f16mf2(base, v0, v1, v2, v3, v4, v5, v6, v7, 7);
}

/*
** test0_vsseg8e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e16_v_f16mf2_m(vbool32_t mask,float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vsseg8e16_v_f16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e16_v_f16mf2_m(vbool32_t mask,float16_t *base,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vsseg8e16_v_f16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 4);
}

/*
** test0_vsseg8e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg8e16_v_f16mf4(float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,vfloat16mf4_t v7,size_t vl)
{
    vsseg8e16_v_f16mf4(base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg8e16_v_f16mf4(float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,vfloat16mf4_t v7,size_t vl)
{
    vsseg8e16_v_f16mf4(base, v0, v1, v2, v3, v4, v5, v6, v7, 4);
}

/*
** test0_vsseg8e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e16_v_f16mf4_m(vbool64_t mask,float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,vfloat16mf4_t v7,size_t vl)
{
    vsseg8e16_v_f16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e16_v_f16mf4_m(vbool64_t mask,float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,vfloat16mf4_t v4,vfloat16mf4_t v5,vfloat16mf4_t v6,vfloat16mf4_t v7,size_t vl)
{
    vsseg8e16_v_f16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 30);
}

/*
** test0_vsseg8e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e16_v_i16m1_m(vbool16_t mask,int16_t *base,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,vint16m1_t v7,size_t vl)
{
    vsseg8e16_v_i16m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e16_v_i16m1_m(vbool16_t mask,int16_t *base,vint16m1_t v0,vint16m1_t v1,vint16m1_t v2,vint16m1_t v3,vint16m1_t v4,vint16m1_t v5,vint16m1_t v6,vint16m1_t v7,size_t vl)
{
    vsseg8e16_v_i16m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 17);
}

/*
** test0_vsseg8e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg8e16_v_i16mf2(int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,vint16mf2_t v7,size_t vl)
{
    vsseg8e16_v_i16mf2(base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg8e16_v_i16mf2(int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,vint16mf2_t v7,size_t vl)
{
    vsseg8e16_v_i16mf2(base, v0, v1, v2, v3, v4, v5, v6, v7, 27);
}

/*
** test0_vsseg8e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e16_v_i16mf2_m(vbool32_t mask,int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,vint16mf2_t v7,size_t vl)
{
    vsseg8e16_v_i16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e16_v_i16mf2_m(vbool32_t mask,int16_t *base,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,vint16mf2_t v3,vint16mf2_t v4,vint16mf2_t v5,vint16mf2_t v6,vint16mf2_t v7,size_t vl)
{
    vsseg8e16_v_i16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 16);
}

/*
** test0_vsseg8e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg8e16_v_i16mf4(int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,vint16mf4_t v7,size_t vl)
{
    vsseg8e16_v_i16mf4(base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg8e16_v_i16mf4(int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,vint16mf4_t v7,size_t vl)
{
    vsseg8e16_v_i16mf4(base, v0, v1, v2, v3, v4, v5, v6, v7, 24);
}

/*
** test0_vsseg8e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e16_v_i16mf4_m(vbool64_t mask,int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,vint16mf4_t v7,size_t vl)
{
    vsseg8e16_v_i16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e16_v_i16mf4_m(vbool64_t mask,int16_t *base,vint16mf4_t v0,vint16mf4_t v1,vint16mf4_t v2,vint16mf4_t v3,vint16mf4_t v4,vint16mf4_t v5,vint16mf4_t v6,vint16mf4_t v7,size_t vl)
{
    vsseg8e16_v_i16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 23);
}

/*
** test0_vsseg8e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,vuint16m1_t v7,size_t vl)
{
    vsseg8e16_v_u16m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e16_v_u16m1_m(vbool16_t mask,uint16_t *base,vuint16m1_t v0,vuint16m1_t v1,vuint16m1_t v2,vuint16m1_t v3,vuint16m1_t v4,vuint16m1_t v5,vuint16m1_t v6,vuint16m1_t v7,size_t vl)
{
    vsseg8e16_v_u16m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 10);
}

/*
** test0_vsseg8e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg8e16_v_u16mf2(uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,vuint16mf2_t v7,size_t vl)
{
    vsseg8e16_v_u16mf2(base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg8e16_v_u16mf2(uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,vuint16mf2_t v7,size_t vl)
{
    vsseg8e16_v_u16mf2(base, v0, v1, v2, v3, v4, v5, v6, v7, 20);
}

/*
** test0_vsseg8e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,vuint16mf2_t v7,size_t vl)
{
    vsseg8e16_v_u16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e16_v_u16mf2_m(vbool32_t mask,uint16_t *base,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,vuint16mf2_t v3,vuint16mf2_t v4,vuint16mf2_t v5,vuint16mf2_t v6,vuint16mf2_t v7,size_t vl)
{
    vsseg8e16_v_u16mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 11);
}

/*
** test0_vsseg8e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg8e16_v_u16mf4(uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,vuint16mf4_t v7,size_t vl)
{
    vsseg8e16_v_u16mf4(base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg8e16_v_u16mf4(uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,vuint16mf4_t v7,size_t vl)
{
    vsseg8e16_v_u16mf4(base, v0, v1, v2, v3, v4, v5, v6, v7, 16);
}

/*
** test0_vsseg8e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,vuint16mf4_t v7,size_t vl)
{
    vsseg8e16_v_u16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e16_v_u16mf4_m(vbool64_t mask,uint16_t *base,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,vuint16mf4_t v3,vuint16mf4_t v4,vuint16mf4_t v5,vuint16mf4_t v6,vuint16mf4_t v7,size_t vl)
{
    vsseg8e16_v_u16mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 30);
}

/*
** test0_vsseg8e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e32_v_f32m1_m(vbool32_t mask,float32_t *base,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,vfloat32m1_t v7,size_t vl)
{
    vsseg8e32_v_f32m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e32_v_f32m1_m(vbool32_t mask,float32_t *base,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,vfloat32m1_t v5,vfloat32m1_t v6,vfloat32m1_t v7,size_t vl)
{
    vsseg8e32_v_f32m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 28);
}

/*
** test0_vsseg8e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg8e32_v_f32mf2(float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,vfloat32mf2_t v7,size_t vl)
{
    vsseg8e32_v_f32mf2(base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg8e32_v_f32mf2(float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,vfloat32mf2_t v7,size_t vl)
{
    vsseg8e32_v_f32mf2(base, v0, v1, v2, v3, v4, v5, v6, v7, 5);
}

/*
** test0_vsseg8e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e32_v_f32mf2_m(vbool64_t mask,float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,vfloat32mf2_t v7,size_t vl)
{
    vsseg8e32_v_f32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e32_v_f32mf2_m(vbool64_t mask,float32_t *base,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,vfloat32mf2_t v6,vfloat32mf2_t v7,size_t vl)
{
    vsseg8e32_v_f32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 2);
}

/*
** test0_vsseg8e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e32_v_i32m1_m(vbool32_t mask,int32_t *base,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,vint32m1_t v7,size_t vl)
{
    vsseg8e32_v_i32m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e32_v_i32m1_m(vbool32_t mask,int32_t *base,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,vint32m1_t v6,vint32m1_t v7,size_t vl)
{
    vsseg8e32_v_i32m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 7);
}

/*
** test0_vsseg8e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg8e32_v_i32mf2(int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,vint32mf2_t v7,size_t vl)
{
    vsseg8e32_v_i32mf2(base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*8,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg8e32_v_i32mf2(int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,vint32mf2_t v7,size_t vl)
{
    vsseg8e32_v_i32mf2(base, v0, v1, v2, v3, v4, v5, v6, v7, 8);
}

/*
** test0_vsseg8e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e32_v_i32mf2_m(vbool64_t mask,int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,vint32mf2_t v7,size_t vl)
{
    vsseg8e32_v_i32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e32_v_i32mf2_m(vbool64_t mask,int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,vint32mf2_t v3,vint32mf2_t v4,vint32mf2_t v5,vint32mf2_t v6,vint32mf2_t v7,size_t vl)
{
    vsseg8e32_v_i32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 7);
}

/*
** test0_vsseg8e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,vuint32m1_t v7,size_t vl)
{
    vsseg8e32_v_u32m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e32_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,vuint32m1_t v7,size_t vl)
{
    vsseg8e32_v_u32m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 17);
}

/*
** test0_vsseg8e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vsseg8e32_v_u32mf2(uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,vuint32mf2_t v7,size_t vl)
{
    vsseg8e32_v_u32mf2(base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vsseg8e32_v_u32mf2(uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,vuint32mf2_t v7,size_t vl)
{
    vsseg8e32_v_u32mf2(base, v0, v1, v2, v3, v4, v5, v6, v7, 23);
}

/*
** test0_vsseg8e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,vuint32mf2_t v7,size_t vl)
{
    vsseg8e32_v_u32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e32_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,vuint32mf2_t v6,vuint32mf2_t v7,size_t vl)
{
    vsseg8e32_v_u32mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 3);
}

/*
** test0_vsseg8e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e64_v_f64m1_m(vbool64_t mask,float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,vfloat64m1_t v7,size_t vl)
{
    vsseg8e64_v_f64m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e64_v_f64m1_m(vbool64_t mask,float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,vfloat64m1_t v6,vfloat64m1_t v7,size_t vl)
{
    vsseg8e64_v_f64m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 1);
}

/*
** test0_vsseg8e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e64_v_i64m1_m(vbool64_t mask,int64_t *base,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,vint64m1_t v7,size_t vl)
{
    vsseg8e64_v_i64m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e64_v_i64m1_m(vbool64_t mask,int64_t *base,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,vint64m1_t v7,size_t vl)
{
    vsseg8e64_v_i64m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 25);
}

/*
** test0_vsseg8e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,vuint64m1_t v7,size_t vl)
{
    vsseg8e64_v_u64m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,vuint64m1_t v7,size_t vl)
{
    vsseg8e64_v_u64m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 24);
}

/*
** test0_vsseg8e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e8_v_i8mf2_m(vbool16_t mask,int8_t *base,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,vint8mf2_t v7,size_t vl)
{
    vsseg8e8_v_i8mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e8_v_i8mf2_m(vbool16_t mask,int8_t *base,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,vint8mf2_t v7,size_t vl)
{
    vsseg8e8_v_i8mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 30);
}

/*
** test0_vsseg8e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e8_v_i8mf4_m(vbool32_t mask,int8_t *base,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,vint8mf4_t v7,size_t vl)
{
    vsseg8e8_v_i8mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e8_v_i8mf4_m(vbool32_t mask,int8_t *base,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,vint8mf4_t v7,size_t vl)
{
    vsseg8e8_v_i8mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 5);
}

/*
** test0_vsseg8e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e8_v_i8mf8_m(vbool64_t mask,int8_t *base,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,vint8mf8_t v7,size_t vl)
{
    vsseg8e8_v_i8mf8_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e8_v_i8mf8_m(vbool64_t mask,int8_t *base,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,vint8mf8_t v7,size_t vl)
{
    vsseg8e8_v_i8mf8_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 11);
}

/*
** test0_vsseg8e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,vuint8mf2_t v7,size_t vl)
{
    vsseg8e8_v_u8mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e8_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,vuint8mf2_t v7,size_t vl)
{
    vsseg8e8_v_u8mf2_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 6);
}

/*
** test0_vsseg8e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,vuint8mf4_t v7,size_t vl)
{
    vsseg8e8_v_u8mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,vuint8mf4_t v7,size_t vl)
{
    vsseg8e8_v_u8mf4_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 3);
}

/*
** test0_vsseg8e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vsseg8e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,vuint8mf8_t v7,size_t vl)
{
    vsseg8e8_v_u8mf8_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/*
** test1_vsseg8e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vsseg8e8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,vuint8mf8_t v5,vuint8mf8_t v6,vuint8mf8_t v7,size_t vl)
{
    vsseg8e8_v_u8mf8_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 8);
}

