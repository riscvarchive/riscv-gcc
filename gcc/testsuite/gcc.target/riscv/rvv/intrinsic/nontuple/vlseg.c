/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test0_vlseg2e16ff_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16m1(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16m1(v0, v1, base, new_vl, 25);
}

/*
** test0_vlseg2e16ff_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16m1_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16m1_m(v0, v1, mask, merge0, merge1, base, new_vl, 26);
}

/*
** test0_vlseg2e16ff_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16m2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_f16m2:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16m2(v0, v1, base, new_vl, 8);
}

/*
** test0_vlseg2e16ff_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16m2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_f16m2_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16m2_m(v0, v1, mask, merge0, merge1, base, new_vl, 28);
}

/*
** test0_vlseg2e16ff_v_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_f16m4(vfloat16m4_t *v0,vfloat16m4_t *v1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16m4(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_f16m4:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_f16m4(vfloat16m4_t *v0,vfloat16m4_t *v1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16m4(v0, v1, base, new_vl, 0);
}

/*
** test0_vlseg2e16ff_v_f16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_f16m4_m(vfloat16m4_t *v0,vfloat16m4_t *v1,vbool4_t mask,vfloat16m4_t merge0,vfloat16m4_t merge1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16m4_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_f16m4_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_f16m4_m(vfloat16m4_t *v0,vfloat16m4_t *v1,vbool4_t mask,vfloat16m4_t merge0,vfloat16m4_t merge1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16m4_m(v0, v1, mask, merge0, merge1, base, new_vl, 9);
}

/*
** test0_vlseg2e16ff_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16mf2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16mf2(v0, v1, base, new_vl, 22);
}

/*
** test0_vlseg2e16ff_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16mf2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16mf2_m(v0, v1, mask, merge0, merge1, base, new_vl, 22);
}

/*
** test0_vlseg2e16ff_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16mf4(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16mf4(v0, v1, base, new_vl, 21);
}

/*
** test0_vlseg2e16ff_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16mf4_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16mf4_m(v0, v1, mask, merge0, merge1, base, new_vl, 22);
}

/*
** test0_vlseg2e16ff_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16m1(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16m1(v0, v1, base, new_vl, 24);
}

/*
** test0_vlseg2e16ff_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16m1_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16m1_m(v0, v1, mask, merge0, merge1, base, new_vl, 5);
}

/*
** test0_vlseg2e16ff_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16m2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_i16m2:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16m2(v0, v1, base, new_vl, 26);
}

/*
** test0_vlseg2e16ff_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16m2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_i16m2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16m2_m(v0, v1, mask, merge0, merge1, base, new_vl, 13);
}

/*
** test0_vlseg2e16ff_v_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_i16m4(vint16m4_t *v0,vint16m4_t *v1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16m4(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_i16m4:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_i16m4(vint16m4_t *v0,vint16m4_t *v1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16m4(v0, v1, base, new_vl, 2);
}

/*
** test0_vlseg2e16ff_v_i16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_i16m4_m(vint16m4_t *v0,vint16m4_t *v1,vbool4_t mask,vint16m4_t merge0,vint16m4_t merge1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16m4_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_i16m4_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_i16m4_m(vint16m4_t *v0,vint16m4_t *v1,vbool4_t mask,vint16m4_t merge0,vint16m4_t merge1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16m4_m(v0, v1, mask, merge0, merge1, base, new_vl, 12);
}

/*
** test0_vlseg2e16ff_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16mf2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16mf2(v0, v1, base, new_vl, 17);
}

/*
** test0_vlseg2e16ff_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16mf2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16mf2_m(v0, v1, mask, merge0, merge1, base, new_vl, 24);
}

/*
** test0_vlseg2e16ff_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16mf4(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16mf4(v0, v1, base, new_vl, 9);
}

/*
** test0_vlseg2e16ff_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16mf4_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_i16mf4_m(v0, v1, mask, merge0, merge1, base, new_vl, 1);
}

/*
** test0_vlseg2e16ff_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16m1(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16m1(v0, v1, base, new_vl, 4);
}

/*
** test0_vlseg2e16ff_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16m1_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16m1_m(v0, v1, mask, merge0, merge1, base, new_vl, 0);
}

/*
** test0_vlseg2e16ff_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16m2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_u16m2:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16m2(v0, v1, base, new_vl, 31);
}

/*
** test0_vlseg2e16ff_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16m2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_u16m2_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16m2_m(v0, v1, mask, merge0, merge1, base, new_vl, 25);
}

/*
** test0_vlseg2e16ff_v_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_u16m4(vuint16m4_t *v0,vuint16m4_t *v1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16m4(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_u16m4:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_u16m4(vuint16m4_t *v0,vuint16m4_t *v1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16m4(v0, v1, base, new_vl, 25);
}

/*
** test0_vlseg2e16ff_v_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_u16m4_m(vuint16m4_t *v0,vuint16m4_t *v1,vbool4_t mask,vuint16m4_t merge0,vuint16m4_t merge1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16m4_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_u16m4_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_u16m4_m(vuint16m4_t *v0,vuint16m4_t *v1,vbool4_t mask,vuint16m4_t merge0,vuint16m4_t merge1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16m4_m(v0, v1, mask, merge0, merge1, base, new_vl, 31);
}

/*
** test0_vlseg2e16ff_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16mf2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16mf2(v0, v1, base, new_vl, 9);
}

/*
** test0_vlseg2e16ff_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16mf2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16mf2_m(v0, v1, mask, merge0, merge1, base, new_vl, 31);
}

/*
** test0_vlseg2e16ff_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16mf4(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16mf4(v0, v1, base, new_vl, 17);
}

/*
** test0_vlseg2e16ff_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16ff_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16mf4_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e16ff_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16ff_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16mf4_m(v0, v1, mask, merge0, merge1, base, new_vl, 5);
}

/*
** test0_vlseg2e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16m1(v0, v1, base, vl);
}

/*
** test1_vlseg2e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16m1(v0, v1, base, 10);
}

/*
** test0_vlseg2e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16m1_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16m1_m(v0, v1, mask, merge0, merge1, base, 4);
}

/*
** test0_vlseg2e16_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16m2(v0, v1, base, vl);
}

/*
** test1_vlseg2e16_v_f16m2:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16m2(v0, v1, base, 6);
}

/*
** test0_vlseg2e16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16m2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e16_v_f16m2_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16m2_m(v0, v1, mask, merge0, merge1, base, 23);
}

/*
** test0_vlseg2e16_v_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16_v_f16m4(vfloat16m4_t *v0,vfloat16m4_t *v1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16m4(v0, v1, base, vl);
}

/*
** test1_vlseg2e16_v_f16m4:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16_v_f16m4(vfloat16m4_t *v0,vfloat16m4_t *v1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16m4(v0, v1, base, 19);
}

/*
** test0_vlseg2e16_v_f16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16_v_f16m4_m(vfloat16m4_t *v0,vfloat16m4_t *v1,vbool4_t mask,vfloat16m4_t merge0,vfloat16m4_t merge1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16m4_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e16_v_f16m4_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16_v_f16m4_m(vfloat16m4_t *v0,vfloat16m4_t *v1,vbool4_t mask,vfloat16m4_t merge0,vfloat16m4_t merge1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16m4_m(v0, v1, mask, merge0, merge1, base, 20);
}

/*
** test0_vlseg2e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16mf2(v0, v1, base, vl);
}

/*
** test1_vlseg2e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16mf2(v0, v1, base, 31);
}

/*
** test0_vlseg2e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16mf2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16mf2_m(v0, v1, mask, merge0, merge1, base, 13);
}

/*
** test0_vlseg2e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16mf4(v0, v1, base, vl);
}

/*
** test1_vlseg2e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16mf4(v0, v1, base, 29);
}

/*
** test0_vlseg2e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16mf4_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,const float16_t *base,size_t vl)
{
    vlseg2e16_v_f16mf4_m(v0, v1, mask, merge0, merge1, base, 10);
}

/*
** test0_vlseg2e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16m1(v0, v1, base, vl);
}

/*
** test1_vlseg2e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16m1(v0, v1, base, 17);
}

/*
** test0_vlseg2e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16m1_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16m1_m(v0, v1, mask, merge0, merge1, base, 25);
}

/*
** test0_vlseg2e16_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16m2(v0, v1, base, vl);
}

/*
** test1_vlseg2e16_v_i16m2:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16m2(v0, v1, base, 27);
}

/*
** test0_vlseg2e16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16m2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e16_v_i16m2_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16m2_m(v0, v1, mask, merge0, merge1, base, 23);
}

/*
** test0_vlseg2e16_v_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16_v_i16m4(vint16m4_t *v0,vint16m4_t *v1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16m4(v0, v1, base, vl);
}

/*
** test1_vlseg2e16_v_i16m4:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16_v_i16m4(vint16m4_t *v0,vint16m4_t *v1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16m4(v0, v1, base, 23);
}

/*
** test0_vlseg2e16_v_i16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16_v_i16m4_m(vint16m4_t *v0,vint16m4_t *v1,vbool4_t mask,vint16m4_t merge0,vint16m4_t merge1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16m4_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e16_v_i16m4_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16_v_i16m4_m(vint16m4_t *v0,vint16m4_t *v1,vbool4_t mask,vint16m4_t merge0,vint16m4_t merge1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16m4_m(v0, v1, mask, merge0, merge1, base, 11);
}

/*
** test0_vlseg2e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16mf2(v0, v1, base, vl);
}

/*
** test1_vlseg2e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16mf2(v0, v1, base, 16);
}

/*
** test0_vlseg2e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16mf2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16mf2_m(v0, v1, mask, merge0, merge1, base, 23);
}

/*
** test0_vlseg2e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16mf4(v0, v1, base, vl);
}

/*
** test1_vlseg2e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16mf4(v0, v1, base, 20);
}

/*
** test0_vlseg2e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16mf4_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,const int16_t *base,size_t vl)
{
    vlseg2e16_v_i16mf4_m(v0, v1, mask, merge0, merge1, base, 31);
}

/*
** test0_vlseg2e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16m1(v0, v1, base, vl);
}

/*
** test1_vlseg2e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16m1(v0, v1, base, 24);
}

/*
** test0_vlseg2e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16m1_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16m1_m(v0, v1, mask, merge0, merge1, base, 6);
}

/*
** test0_vlseg2e16_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16m2(v0, v1, base, vl);
}

/*
** test1_vlseg2e16_v_u16m2:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16m2(v0, v1, base, 8);
}

/*
** test0_vlseg2e16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16m2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e16_v_u16m2_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16m2_m(v0, v1, mask, merge0, merge1, base, 26);
}

/*
** test0_vlseg2e16_v_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16_v_u16m4(vuint16m4_t *v0,vuint16m4_t *v1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16m4(v0, v1, base, vl);
}

/*
** test1_vlseg2e16_v_u16m4:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16_v_u16m4(vuint16m4_t *v0,vuint16m4_t *v1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16m4(v0, v1, base, 9);
}

/*
** test0_vlseg2e16_v_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16_v_u16m4_m(vuint16m4_t *v0,vuint16m4_t *v1,vbool4_t mask,vuint16m4_t merge0,vuint16m4_t merge1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16m4_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e16_v_u16m4_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16_v_u16m4_m(vuint16m4_t *v0,vuint16m4_t *v1,vbool4_t mask,vuint16m4_t merge0,vuint16m4_t merge1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16m4_m(v0, v1, mask, merge0, merge1, base, 6);
}

/*
** test0_vlseg2e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16mf2(v0, v1, base, vl);
}

/*
** test1_vlseg2e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16mf2(v0, v1, base, 27);
}

/*
** test0_vlseg2e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16mf2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16mf2_m(v0, v1, mask, merge0, merge1, base, 23);
}

/*
** test0_vlseg2e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16mf4(v0, v1, base, vl);
}

/*
** test1_vlseg2e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16mf4(v0, v1, base, 22);
}

/*
** test0_vlseg2e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16mf4_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16mf4_m(v0, v1, mask, merge0, merge1, base, 20);
}

/*
** test0_vlseg2e32ff_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_f32m1(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_f32m1(v0, v1, base, new_vl, 30);
}

/*
** test0_vlseg2e32ff_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_f32m1_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_f32m1_m(v0, v1, mask, merge0, merge1, base, new_vl, 16);
}

/*
** test0_vlseg2e32ff_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_f32m2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_f32m2:
**  ...
**	vsetivli\s+zero,\s*28,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_f32m2(v0, v1, base, new_vl, 28);
}

/*
** test0_vlseg2e32ff_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_f32m2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_f32m2_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_f32m2_m(v0, v1, mask, merge0, merge1, base, new_vl, 30);
}

/*
** test0_vlseg2e32ff_v_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_f32m4(vfloat32m4_t *v0,vfloat32m4_t *v1,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_f32m4(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_f32m4:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_f32m4(vfloat32m4_t *v0,vfloat32m4_t *v1,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_f32m4(v0, v1, base, new_vl, 13);
}

/*
** test0_vlseg2e32ff_v_f32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_f32m4_m(vfloat32m4_t *v0,vfloat32m4_t *v1,vbool8_t mask,vfloat32m4_t merge0,vfloat32m4_t merge1,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_f32m4_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_f32m4_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_f32m4_m(vfloat32m4_t *v0,vfloat32m4_t *v1,vbool8_t mask,vfloat32m4_t merge0,vfloat32m4_t merge1,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_f32m4_m(v0, v1, mask, merge0, merge1, base, new_vl, 1);
}

/*
** test0_vlseg2e32ff_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_f32mf2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_f32mf2(v0, v1, base, new_vl, 6);
}

/*
** test0_vlseg2e32ff_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_f32mf2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_f32mf2_m(v0, v1, mask, merge0, merge1, base, new_vl, 31);
}

/*
** test0_vlseg2e32ff_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_i32m1(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*15,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_i32m1(v0, v1, base, new_vl, 15);
}

/*
** test0_vlseg2e32ff_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_i32m1_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_i32m1_m(v0, v1, mask, merge0, merge1, base, new_vl, 22);
}

/*
** test0_vlseg2e32ff_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_i32m2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_i32m2:
**  ...
**	vsetivli\s+zero,\s*3,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_i32m2(v0, v1, base, new_vl, 3);
}

/*
** test0_vlseg2e32ff_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_i32m2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_i32m2_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_i32m2_m(v0, v1, mask, merge0, merge1, base, new_vl, 18);
}

/*
** test0_vlseg2e32ff_v_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_i32m4(vint32m4_t *v0,vint32m4_t *v1,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_i32m4(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_i32m4:
**  ...
**	vsetivli\s+zero,\s*8,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_i32m4(vint32m4_t *v0,vint32m4_t *v1,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_i32m4(v0, v1, base, new_vl, 8);
}

/*
** test0_vlseg2e32ff_v_i32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_i32m4_m(vint32m4_t *v0,vint32m4_t *v1,vbool8_t mask,vint32m4_t merge0,vint32m4_t merge1,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_i32m4_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_i32m4_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_i32m4_m(vint32m4_t *v0,vint32m4_t *v1,vbool8_t mask,vint32m4_t merge0,vint32m4_t merge1,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_i32m4_m(v0, v1, mask, merge0, merge1, base, new_vl, 25);
}

/*
** test0_vlseg2e32ff_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_i32mf2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*10,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_i32mf2(v0, v1, base, new_vl, 10);
}

/*
** test0_vlseg2e32ff_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_i32mf2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_i32mf2_m(v0, v1, mask, merge0, merge1, base, new_vl, 7);
}

/*
** test0_vlseg2e32ff_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_u32m1(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_u32m1(v0, v1, base, new_vl, 20);
}

/*
** test0_vlseg2e32ff_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_u32m1_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_u32m1_m(v0, v1, mask, merge0, merge1, base, new_vl, 29);
}

/*
** test0_vlseg2e32ff_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_u32m2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_u32m2:
**  ...
**	vsetivli\s+zero,\s*15,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_u32m2(v0, v1, base, new_vl, 15);
}

/*
** test0_vlseg2e32ff_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_u32m2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_u32m2_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_u32m2_m(v0, v1, mask, merge0, merge1, base, new_vl, 26);
}

/*
** test0_vlseg2e32ff_v_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_u32m4(vuint32m4_t *v0,vuint32m4_t *v1,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_u32m4(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_u32m4:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_u32m4(vuint32m4_t *v0,vuint32m4_t *v1,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_u32m4(v0, v1, base, new_vl, 27);
}

/*
** test0_vlseg2e32ff_v_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_u32m4_m(vuint32m4_t *v0,vuint32m4_t *v1,vbool8_t mask,vuint32m4_t merge0,vuint32m4_t merge1,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_u32m4_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_u32m4_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_u32m4_m(vuint32m4_t *v0,vuint32m4_t *v1,vbool8_t mask,vuint32m4_t merge0,vuint32m4_t merge1,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_u32m4_m(v0, v1, mask, merge0, merge1, base, new_vl, 10);
}

/*
** test0_vlseg2e32ff_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_u32mf2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*26,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_u32mf2(v0, v1, base, new_vl, 26);
}

/*
** test0_vlseg2e32ff_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32ff_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_u32mf2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e32ff_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32ff_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e32ff_v_u32mf2_m(v0, v1, mask, merge0, merge1, base, new_vl, 5);
}

/*
** test0_vlseg2e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,const float32_t *base,size_t vl)
{
    vlseg2e32_v_f32m1(v0, v1, base, vl);
}

/*
** test1_vlseg2e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,const float32_t *base,size_t vl)
{
    vlseg2e32_v_f32m1(v0, v1, base, 7);
}

/*
** test0_vlseg2e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,const float32_t *base,size_t vl)
{
    vlseg2e32_v_f32m1_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,const float32_t *base,size_t vl)
{
    vlseg2e32_v_f32m1_m(v0, v1, mask, merge0, merge1, base, 27);
}

/*
** test0_vlseg2e32_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,const float32_t *base,size_t vl)
{
    vlseg2e32_v_f32m2(v0, v1, base, vl);
}

/*
** test1_vlseg2e32_v_f32m2:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,const float32_t *base,size_t vl)
{
    vlseg2e32_v_f32m2(v0, v1, base, 29);
}

/*
** test0_vlseg2e32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,const float32_t *base,size_t vl)
{
    vlseg2e32_v_f32m2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e32_v_f32m2_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,const float32_t *base,size_t vl)
{
    vlseg2e32_v_f32m2_m(v0, v1, mask, merge0, merge1, base, 18);
}

/*
** test0_vlseg2e32_v_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32_v_f32m4(vfloat32m4_t *v0,vfloat32m4_t *v1,const float32_t *base,size_t vl)
{
    vlseg2e32_v_f32m4(v0, v1, base, vl);
}

/*
** test1_vlseg2e32_v_f32m4:
**  ...
**	vsetivli\s+zero,\s*19,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32_v_f32m4(vfloat32m4_t *v0,vfloat32m4_t *v1,const float32_t *base,size_t vl)
{
    vlseg2e32_v_f32m4(v0, v1, base, 19);
}

/*
** test0_vlseg2e32_v_f32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32_v_f32m4_m(vfloat32m4_t *v0,vfloat32m4_t *v1,vbool8_t mask,vfloat32m4_t merge0,vfloat32m4_t merge1,const float32_t *base,size_t vl)
{
    vlseg2e32_v_f32m4_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e32_v_f32m4_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32_v_f32m4_m(vfloat32m4_t *v0,vfloat32m4_t *v1,vbool8_t mask,vfloat32m4_t merge0,vfloat32m4_t merge1,const float32_t *base,size_t vl)
{
    vlseg2e32_v_f32m4_m(v0, v1, mask, merge0, merge1, base, 6);
}

/*
** test0_vlseg2e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,const float32_t *base,size_t vl)
{
    vlseg2e32_v_f32mf2(v0, v1, base, vl);
}

/*
** test1_vlseg2e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,const float32_t *base,size_t vl)
{
    vlseg2e32_v_f32mf2(v0, v1, base, 12);
}

/*
** test0_vlseg2e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,const float32_t *base,size_t vl)
{
    vlseg2e32_v_f32mf2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,const float32_t *base,size_t vl)
{
    vlseg2e32_v_f32mf2_m(v0, v1, mask, merge0, merge1, base, 27);
}

/*
** test0_vlseg2e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32m1(v0, v1, base, vl);
}

/*
** test1_vlseg2e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32m1(v0, v1, base, 20);
}

/*
** test0_vlseg2e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32m1_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32m1_m(v0, v1, mask, merge0, merge1, base, 25);
}

/*
** test0_vlseg2e32_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32m2(v0, v1, base, vl);
}

/*
** test1_vlseg2e32_v_i32m2:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32m2(v0, v1, base, 4);
}

/*
** test0_vlseg2e32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32m2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e32_v_i32m2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32m2_m(v0, v1, mask, merge0, merge1, base, 14);
}

/*
** test0_vlseg2e32_v_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32_v_i32m4(vint32m4_t *v0,vint32m4_t *v1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32m4(v0, v1, base, vl);
}

/*
** test1_vlseg2e32_v_i32m4:
**  ...
**	vsetivli\s+zero,\s*10,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32_v_i32m4(vint32m4_t *v0,vint32m4_t *v1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32m4(v0, v1, base, 10);
}

/*
** test0_vlseg2e32_v_i32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32_v_i32m4_m(vint32m4_t *v0,vint32m4_t *v1,vbool8_t mask,vint32m4_t merge0,vint32m4_t merge1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32m4_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e32_v_i32m4_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32_v_i32m4_m(vint32m4_t *v0,vint32m4_t *v1,vbool8_t mask,vint32m4_t merge0,vint32m4_t merge1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32m4_m(v0, v1, mask, merge0, merge1, base, 8);
}

/*
** test0_vlseg2e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32mf2(v0, v1, base, vl);
}

/*
** test1_vlseg2e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*17,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32mf2(v0, v1, base, 17);
}

/*
** test0_vlseg2e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32mf2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32mf2_m(v0, v1, mask, merge0, merge1, base, 25);
}

/*
** test0_vlseg2e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32m1(v0, v1, base, vl);
}

/*
** test1_vlseg2e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*15,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32m1(v0, v1, base, 15);
}

/*
** test0_vlseg2e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32m1_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32m1_m(v0, v1, mask, merge0, merge1, base, 27);
}

/*
** test0_vlseg2e32_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32m2(v0, v1, base, vl);
}

/*
** test1_vlseg2e32_v_u32m2:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32m2(v0, v1, base, 1);
}

/*
** test0_vlseg2e32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32m2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e32_v_u32m2_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32m2_m(v0, v1, mask, merge0, merge1, base, 8);
}

/*
** test0_vlseg2e32_v_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32_v_u32m4(vuint32m4_t *v0,vuint32m4_t *v1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32m4(v0, v1, base, vl);
}

/*
** test1_vlseg2e32_v_u32m4:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32_v_u32m4(vuint32m4_t *v0,vuint32m4_t *v1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32m4(v0, v1, base, 27);
}

/*
** test0_vlseg2e32_v_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32_v_u32m4_m(vuint32m4_t *v0,vuint32m4_t *v1,vbool8_t mask,vuint32m4_t merge0,vuint32m4_t merge1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32m4_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e32_v_u32m4_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32_v_u32m4_m(vuint32m4_t *v0,vuint32m4_t *v1,vbool8_t mask,vuint32m4_t merge0,vuint32m4_t merge1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32m4_m(v0, v1, mask, merge0, merge1, base, 15);
}

/*
** test0_vlseg2e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32mf2(v0, v1, base, vl);
}

/*
** test1_vlseg2e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32mf2(v0, v1, base, 23);
}

/*
** test0_vlseg2e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32mf2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32mf2_m(v0, v1, mask, merge0, merge1, base, 21);
}

/*
** test0_vlseg2e64ff_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_f64m1(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*25,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_f64m1(v0, v1, base, new_vl, 25);
}

/*
** test0_vlseg2e64ff_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_f64m1_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_f64m1_m(v0, v1, mask, merge0, merge1, base, new_vl, 30);
}

/*
** test0_vlseg2e64ff_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_f64m2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_f64m2:
**  ...
**	vsetivli\s+zero,\s*24,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_f64m2(v0, v1, base, new_vl, 24);
}

/*
** test0_vlseg2e64ff_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_f64m2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_f64m2_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_f64m2_m(v0, v1, mask, merge0, merge1, base, new_vl, 19);
}

/*
** test0_vlseg2e64ff_v_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_f64m4(vfloat64m4_t *v0,vfloat64m4_t *v1,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_f64m4(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_f64m4:
**  ...
**	vsetivli\s+zero,\s*23,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_f64m4(vfloat64m4_t *v0,vfloat64m4_t *v1,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_f64m4(v0, v1, base, new_vl, 23);
}

/*
** test0_vlseg2e64ff_v_f64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_f64m4_m(vfloat64m4_t *v0,vfloat64m4_t *v1,vbool16_t mask,vfloat64m4_t merge0,vfloat64m4_t merge1,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_f64m4_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_f64m4_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_f64m4_m(vfloat64m4_t *v0,vfloat64m4_t *v1,vbool16_t mask,vfloat64m4_t merge0,vfloat64m4_t merge1,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_f64m4_m(v0, v1, mask, merge0, merge1, base, new_vl, 12);
}

/*
** test0_vlseg2e64ff_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_i64m1(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*6,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_i64m1(v0, v1, base, new_vl, 6);
}

/*
** test0_vlseg2e64ff_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_i64m1_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_i64m1_m(v0, v1, mask, merge0, merge1, base, new_vl, 30);
}

/*
** test0_vlseg2e64ff_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_i64m2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_i64m2:
**  ...
**	vsetivli\s+zero,\s*7,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_i64m2(v0, v1, base, new_vl, 7);
}

/*
** test0_vlseg2e64ff_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_i64m2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_i64m2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_i64m2_m(v0, v1, mask, merge0, merge1, base, new_vl, 14);
}

/*
** test0_vlseg2e64ff_v_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_i64m4(vint64m4_t *v0,vint64m4_t *v1,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_i64m4(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_i64m4:
**  ...
**	vsetivli\s+zero,\s*18,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_i64m4(vint64m4_t *v0,vint64m4_t *v1,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_i64m4(v0, v1, base, new_vl, 18);
}

/*
** test0_vlseg2e64ff_v_i64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_i64m4_m(vint64m4_t *v0,vint64m4_t *v1,vbool16_t mask,vint64m4_t merge0,vint64m4_t merge1,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_i64m4_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_i64m4_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_i64m4_m(vint64m4_t *v0,vint64m4_t *v1,vbool16_t mask,vint64m4_t merge0,vint64m4_t merge1,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_i64m4_m(v0, v1, mask, merge0, merge1, base, new_vl, 25);
}

/*
** test0_vlseg2e64ff_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_u64m1(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*5,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_u64m1(v0, v1, base, new_vl, 5);
}

/*
** test0_vlseg2e64ff_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_u64m1_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_u64m1_m(v0, v1, mask, merge0, merge1, base, new_vl, 21);
}

/*
** test0_vlseg2e64ff_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_u64m2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_u64m2:
**  ...
**	vsetivli\s+zero,\s*8,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_u64m2(v0, v1, base, new_vl, 8);
}

/*
** test0_vlseg2e64ff_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_u64m2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_u64m2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_u64m2_m(v0, v1, mask, merge0, merge1, base, new_vl, 13);
}

/*
** test0_vlseg2e64ff_v_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_u64m4(vuint64m4_t *v0,vuint64m4_t *v1,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_u64m4(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_u64m4:
**  ...
**	vsetivli\s+zero,\s*29,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_u64m4(vuint64m4_t *v0,vuint64m4_t *v1,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_u64m4(v0, v1, base, new_vl, 29);
}

/*
** test0_vlseg2e64ff_v_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64ff_v_u64m4_m(vuint64m4_t *v0,vuint64m4_t *v1,vbool16_t mask,vuint64m4_t merge0,vuint64m4_t merge1,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_u64m4_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e64ff_v_u64m4_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64ff_v_u64m4_m(vuint64m4_t *v0,vuint64m4_t *v1,vbool16_t mask,vuint64m4_t merge0,vuint64m4_t merge1,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e64ff_v_u64m4_m(v0, v1, mask, merge0, merge1, base, new_vl, 28);
}

/*
** test0_vlseg2e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,const float64_t *base,size_t vl)
{
    vlseg2e64_v_f64m1(v0, v1, base, vl);
}

/*
** test1_vlseg2e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*15,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,const float64_t *base,size_t vl)
{
    vlseg2e64_v_f64m1(v0, v1, base, 15);
}

/*
** test0_vlseg2e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,const float64_t *base,size_t vl)
{
    vlseg2e64_v_f64m1_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,const float64_t *base,size_t vl)
{
    vlseg2e64_v_f64m1_m(v0, v1, mask, merge0, merge1, base, 26);
}

/*
** test0_vlseg2e64_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,const float64_t *base,size_t vl)
{
    vlseg2e64_v_f64m2(v0, v1, base, vl);
}

/*
** test1_vlseg2e64_v_f64m2:
**  ...
**	vsetivli\s+zero,\s*11,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,const float64_t *base,size_t vl)
{
    vlseg2e64_v_f64m2(v0, v1, base, 11);
}

/*
** test0_vlseg2e64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,const float64_t *base,size_t vl)
{
    vlseg2e64_v_f64m2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e64_v_f64m2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,const float64_t *base,size_t vl)
{
    vlseg2e64_v_f64m2_m(v0, v1, mask, merge0, merge1, base, 5);
}

/*
** test0_vlseg2e64_v_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64_v_f64m4(vfloat64m4_t *v0,vfloat64m4_t *v1,const float64_t *base,size_t vl)
{
    vlseg2e64_v_f64m4(v0, v1, base, vl);
}

/*
** test1_vlseg2e64_v_f64m4:
**  ...
**	vsetivli\s+zero,\s*13,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64_v_f64m4(vfloat64m4_t *v0,vfloat64m4_t *v1,const float64_t *base,size_t vl)
{
    vlseg2e64_v_f64m4(v0, v1, base, 13);
}

/*
** test0_vlseg2e64_v_f64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64_v_f64m4_m(vfloat64m4_t *v0,vfloat64m4_t *v1,vbool16_t mask,vfloat64m4_t merge0,vfloat64m4_t merge1,const float64_t *base,size_t vl)
{
    vlseg2e64_v_f64m4_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e64_v_f64m4_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64_v_f64m4_m(vfloat64m4_t *v0,vfloat64m4_t *v1,vbool16_t mask,vfloat64m4_t merge0,vfloat64m4_t merge1,const float64_t *base,size_t vl)
{
    vlseg2e64_v_f64m4_m(v0, v1, mask, merge0, merge1, base, 7);
}

/*
** test0_vlseg2e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,const int64_t *base,size_t vl)
{
    vlseg2e64_v_i64m1(v0, v1, base, vl);
}

/*
** test1_vlseg2e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*22,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,const int64_t *base,size_t vl)
{
    vlseg2e64_v_i64m1(v0, v1, base, 22);
}

/*
** test0_vlseg2e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,const int64_t *base,size_t vl)
{
    vlseg2e64_v_i64m1_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,const int64_t *base,size_t vl)
{
    vlseg2e64_v_i64m1_m(v0, v1, mask, merge0, merge1, base, 19);
}

/*
** test0_vlseg2e64_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,const int64_t *base,size_t vl)
{
    vlseg2e64_v_i64m2(v0, v1, base, vl);
}

/*
** test1_vlseg2e64_v_i64m2:
**  ...
**	vsetivli\s+zero,\s*19,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,const int64_t *base,size_t vl)
{
    vlseg2e64_v_i64m2(v0, v1, base, 19);
}

/*
** test0_vlseg2e64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,const int64_t *base,size_t vl)
{
    vlseg2e64_v_i64m2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e64_v_i64m2_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,const int64_t *base,size_t vl)
{
    vlseg2e64_v_i64m2_m(v0, v1, mask, merge0, merge1, base, 21);
}

/*
** test0_vlseg2e64_v_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64_v_i64m4(vint64m4_t *v0,vint64m4_t *v1,const int64_t *base,size_t vl)
{
    vlseg2e64_v_i64m4(v0, v1, base, vl);
}

/*
** test1_vlseg2e64_v_i64m4:
**  ...
**	vsetivli\s+zero,\s*26,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64_v_i64m4(vint64m4_t *v0,vint64m4_t *v1,const int64_t *base,size_t vl)
{
    vlseg2e64_v_i64m4(v0, v1, base, 26);
}

/*
** test0_vlseg2e64_v_i64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64_v_i64m4_m(vint64m4_t *v0,vint64m4_t *v1,vbool16_t mask,vint64m4_t merge0,vint64m4_t merge1,const int64_t *base,size_t vl)
{
    vlseg2e64_v_i64m4_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e64_v_i64m4_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64_v_i64m4_m(vint64m4_t *v0,vint64m4_t *v1,vbool16_t mask,vint64m4_t merge0,vint64m4_t merge1,const int64_t *base,size_t vl)
{
    vlseg2e64_v_i64m4_m(v0, v1, mask, merge0, merge1, base, 11);
}

/*
** test0_vlseg2e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,const uint64_t *base,size_t vl)
{
    vlseg2e64_v_u64m1(v0, v1, base, vl);
}

/*
** test1_vlseg2e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*27,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,const uint64_t *base,size_t vl)
{
    vlseg2e64_v_u64m1(v0, v1, base, 27);
}

/*
** test0_vlseg2e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,const uint64_t *base,size_t vl)
{
    vlseg2e64_v_u64m1_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,const uint64_t *base,size_t vl)
{
    vlseg2e64_v_u64m1_m(v0, v1, mask, merge0, merge1, base, 29);
}

/*
** test0_vlseg2e64_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,const uint64_t *base,size_t vl)
{
    vlseg2e64_v_u64m2(v0, v1, base, vl);
}

/*
** test1_vlseg2e64_v_u64m2:
**  ...
**	vsetivli\s+zero,\s*8,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,const uint64_t *base,size_t vl)
{
    vlseg2e64_v_u64m2(v0, v1, base, 8);
}

/*
** test0_vlseg2e64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,const uint64_t *base,size_t vl)
{
    vlseg2e64_v_u64m2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e64_v_u64m2_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,const uint64_t *base,size_t vl)
{
    vlseg2e64_v_u64m2_m(v0, v1, mask, merge0, merge1, base, 21);
}

/*
** test0_vlseg2e64_v_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e64_v_u64m4(vuint64m4_t *v0,vuint64m4_t *v1,const uint64_t *base,size_t vl)
{
    vlseg2e64_v_u64m4(v0, v1, base, vl);
}

/*
** test1_vlseg2e64_v_u64m4:
**  ...
**	vsetivli\s+zero,\s*16,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e64_v_u64m4(vuint64m4_t *v0,vuint64m4_t *v1,const uint64_t *base,size_t vl)
{
    vlseg2e64_v_u64m4(v0, v1, base, 16);
}

/*
** test0_vlseg2e64_v_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e64_v_u64m4_m(vuint64m4_t *v0,vuint64m4_t *v1,vbool16_t mask,vuint64m4_t merge0,vuint64m4_t merge1,const uint64_t *base,size_t vl)
{
    vlseg2e64_v_u64m4_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e64_v_u64m4_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e64_v_u64m4_m(vuint64m4_t *v0,vuint64m4_t *v1,vbool16_t mask,vuint64m4_t merge0,vuint64m4_t merge1,const uint64_t *base,size_t vl)
{
    vlseg2e64_v_u64m4_m(v0, v1, mask, merge0, merge1, base, 24);
}

/*
** test0_vlseg2e8ff_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8m1(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8m1(v0, v1, base, new_vl, 30);
}

/*
** test0_vlseg2e8ff_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8m1_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8m1_m(v0, v1, mask, merge0, merge1, base, new_vl, 27);
}

/*
** test0_vlseg2e8ff_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_i8m2(vint8m2_t *v0,vint8m2_t *v1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8m2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_i8m2:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_i8m2(vint8m2_t *v0,vint8m2_t *v1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8m2(v0, v1, base, new_vl, 20);
}

/*
** test0_vlseg2e8ff_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8m2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_i8m2_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8m2_m(v0, v1, mask, merge0, merge1, base, new_vl, 17);
}

/*
** test0_vlseg2e8ff_v_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_i8m4(vint8m4_t *v0,vint8m4_t *v1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8m4(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_i8m4:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_i8m4(vint8m4_t *v0,vint8m4_t *v1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8m4(v0, v1, base, new_vl, 20);
}

/*
** test0_vlseg2e8ff_v_i8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_i8m4_m(vint8m4_t *v0,vint8m4_t *v1,vbool2_t mask,vint8m4_t merge0,vint8m4_t merge1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8m4_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_i8m4_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_i8m4_m(vint8m4_t *v0,vint8m4_t *v1,vbool2_t mask,vint8m4_t merge0,vint8m4_t merge1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8m4_m(v0, v1, mask, merge0, merge1, base, new_vl, 1);
}

/*
** test0_vlseg2e8ff_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8mf2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8mf2(v0, v1, base, new_vl, 20);
}

/*
** test0_vlseg2e8ff_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8mf2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8mf2_m(v0, v1, mask, merge0, merge1, base, new_vl, 12);
}

/*
** test0_vlseg2e8ff_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8mf4(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*17,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8mf4(v0, v1, base, new_vl, 17);
}

/*
** test0_vlseg2e8ff_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8mf4_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8mf4_m(v0, v1, mask, merge0, merge1, base, new_vl, 6);
}

/*
** test0_vlseg2e8ff_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8mf8(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8mf8(v0, v1, base, new_vl, 30);
}

/*
** test0_vlseg2e8ff_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8mf8_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8mf8_m(v0, v1, mask, merge0, merge1, base, new_vl, 14);
}

/*
** test0_vlseg2e8ff_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8m1(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*12,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8m1(v0, v1, base, new_vl, 12);
}

/*
** test0_vlseg2e8ff_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8m1_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8m1_m(v0, v1, mask, merge0, merge1, base, new_vl, 27);
}

/*
** test0_vlseg2e8ff_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_u8m2(vuint8m2_t *v0,vuint8m2_t *v1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8m2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_u8m2:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_u8m2(vuint8m2_t *v0,vuint8m2_t *v1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8m2(v0, v1, base, new_vl, 30);
}

/*
** test0_vlseg2e8ff_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8m2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_u8m2_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8m2_m(v0, v1, mask, merge0, merge1, base, new_vl, 3);
}

/*
** test0_vlseg2e8ff_v_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_u8m4(vuint8m4_t *v0,vuint8m4_t *v1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8m4(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_u8m4:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_u8m4(vuint8m4_t *v0,vuint8m4_t *v1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8m4(v0, v1, base, new_vl, 16);
}

/*
** test0_vlseg2e8ff_v_u8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_u8m4_m(vuint8m4_t *v0,vuint8m4_t *v1,vbool2_t mask,vuint8m4_t merge0,vuint8m4_t merge1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8m4_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_u8m4_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_u8m4_m(vuint8m4_t *v0,vuint8m4_t *v1,vbool2_t mask,vuint8m4_t merge0,vuint8m4_t merge1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8m4_m(v0, v1, mask, merge0, merge1, base, new_vl, 19);
}

/*
** test0_vlseg2e8ff_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8mf2(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*29,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8mf2(v0, v1, base, new_vl, 29);
}

/*
** test0_vlseg2e8ff_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8mf2_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8mf2_m(v0, v1, mask, merge0, merge1, base, new_vl, 7);
}

/*
** test0_vlseg2e8ff_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8mf4(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8mf4(v0, v1, base, new_vl, 26);
}

/*
** test0_vlseg2e8ff_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8mf4_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8mf4_m(v0, v1, mask, merge0, merge1, base, new_vl, 19);
}

/*
** test0_vlseg2e8ff_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8mf8(v0, v1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8mf8(v0, v1, base, new_vl, 24);
}

/*
** test0_vlseg2e8ff_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8ff_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8mf8_m(v0, v1, mask, merge0, merge1, base, new_vl, vl);
}

/*
** test1_vlseg2e8ff_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8ff_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_u8mf8_m(v0, v1, mask, merge0, merge1, base, new_vl, 17);
}

/*
** test0_vlseg2e8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8m1(v0, v1, base, vl);
}

/*
** test1_vlseg2e8_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8m1(v0, v1, base, 2);
}

/*
** test0_vlseg2e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8m1_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8m1_m(v0, v1, mask, merge0, merge1, base, 7);
}

/*
** test0_vlseg2e8_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8_v_i8m2(vint8m2_t *v0,vint8m2_t *v1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8m2(v0, v1, base, vl);
}

/*
** test1_vlseg2e8_v_i8m2:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8_v_i8m2(vint8m2_t *v0,vint8m2_t *v1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8m2(v0, v1, base, 20);
}

/*
** test0_vlseg2e8_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8m2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e8_v_i8m2_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8m2_m(v0, v1, mask, merge0, merge1, base, 8);
}

/*
** test0_vlseg2e8_v_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8_v_i8m4(vint8m4_t *v0,vint8m4_t *v1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8m4(v0, v1, base, vl);
}

/*
** test1_vlseg2e8_v_i8m4:
**  ...
**	vsetivli\s+zero,\s*9,\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8_v_i8m4(vint8m4_t *v0,vint8m4_t *v1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8m4(v0, v1, base, 9);
}

/*
** test0_vlseg2e8_v_i8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8_v_i8m4_m(vint8m4_t *v0,vint8m4_t *v1,vbool2_t mask,vint8m4_t merge0,vint8m4_t merge1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8m4_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e8_v_i8m4_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8_v_i8m4_m(vint8m4_t *v0,vint8m4_t *v1,vbool2_t mask,vint8m4_t merge0,vint8m4_t merge1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8m4_m(v0, v1, mask, merge0, merge1, base, 14);
}

/*
** test0_vlseg2e8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8mf2(v0, v1, base, vl);
}

/*
** test1_vlseg2e8_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8mf2(v0, v1, base, 19);
}

/*
** test0_vlseg2e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8mf2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8mf2_m(v0, v1, mask, merge0, merge1, base, 7);
}

/*
** test0_vlseg2e8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8mf4(v0, v1, base, vl);
}

/*
** test1_vlseg2e8_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8mf4(v0, v1, base, 15);
}

/*
** test0_vlseg2e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8mf4_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8mf4_m(v0, v1, mask, merge0, merge1, base, 15);
}

/*
** test0_vlseg2e8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8mf8(v0, v1, base, vl);
}

/*
** test1_vlseg2e8_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8mf8(v0, v1, base, 11);
}

/*
** test0_vlseg2e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8mf8_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8mf8_m(v0, v1, mask, merge0, merge1, base, 21);
}

/*
** test0_vlseg2e8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8m1(v0, v1, base, vl);
}

/*
** test1_vlseg2e8_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8m1(v0, v1, base, 14);
}

/*
** test0_vlseg2e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8m1_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8m1_m(v0, v1, mask, merge0, merge1, base, 3);
}

/*
** test0_vlseg2e8_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8_v_u8m2(vuint8m2_t *v0,vuint8m2_t *v1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8m2(v0, v1, base, vl);
}

/*
** test1_vlseg2e8_v_u8m2:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8_v_u8m2(vuint8m2_t *v0,vuint8m2_t *v1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8m2(v0, v1, base, 25);
}

/*
** test0_vlseg2e8_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8m2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e8_v_u8m2_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8m2_m(v0, v1, mask, merge0, merge1, base, 16);
}

/*
** test0_vlseg2e8_v_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8_v_u8m4(vuint8m4_t *v0,vuint8m4_t *v1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8m4(v0, v1, base, vl);
}

/*
** test1_vlseg2e8_v_u8m4:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8_v_u8m4(vuint8m4_t *v0,vuint8m4_t *v1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8m4(v0, v1, base, 18);
}

/*
** test0_vlseg2e8_v_u8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8_v_u8m4_m(vuint8m4_t *v0,vuint8m4_t *v1,vbool2_t mask,vuint8m4_t merge0,vuint8m4_t merge1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8m4_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e8_v_u8m4_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8_v_u8m4_m(vuint8m4_t *v0,vuint8m4_t *v1,vbool2_t mask,vuint8m4_t merge0,vuint8m4_t merge1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8m4_m(v0, v1, mask, merge0, merge1, base, 29);
}

/*
** test0_vlseg2e8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8mf2(v0, v1, base, vl);
}

/*
** test1_vlseg2e8_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8mf2(v0, v1, base, 30);
}

/*
** test0_vlseg2e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8mf2_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8mf2_m(v0, v1, mask, merge0, merge1, base, 20);
}

/*
** test0_vlseg2e8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8mf4(v0, v1, base, vl);
}

/*
** test1_vlseg2e8_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8mf4(v0, v1, base, 20);
}

/*
** test0_vlseg2e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8mf4_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8mf4_m(v0, v1, mask, merge0, merge1, base, 23);
}

/*
** test0_vlseg2e8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg2e8_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8mf8(v0, v1, base, vl);
}

/*
** test1_vlseg2e8_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg2e8_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8mf8(v0, v1, base, 24);
}

/*
** test0_vlseg2e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg2e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8mf8_m(v0, v1, mask, merge0, merge1, base, vl);
}

/*
** test1_vlseg2e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg2e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8mf8_m(v0, v1, mask, merge0, merge1, base, 22);
}

/*
** test0_vlseg3e16ff_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_f16m1(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_f16m1(v0, v1, v2, base, new_vl, 23);
}

/*
** test0_vlseg3e16ff_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_f16m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_f16m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 3);
}

/*
** test0_vlseg3e16ff_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_f16m2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_f16m2:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_f16m2(v0, v1, v2, base, new_vl, 0);
}

/*
** test0_vlseg3e16ff_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,vfloat16m2_t merge2,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_f16m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_f16m2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,vfloat16m2_t merge2,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_f16m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 29);
}

/*
** test0_vlseg3e16ff_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_f16mf2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_f16mf2(v0, v1, v2, base, new_vl, 22);
}

/*
** test0_vlseg3e16ff_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_f16mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_f16mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 27);
}

/*
** test0_vlseg3e16ff_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_f16mf4(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_f16mf4(v0, v1, v2, base, new_vl, 20);
}

/*
** test0_vlseg3e16ff_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_f16mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_f16mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 19);
}

/*
** test0_vlseg3e16ff_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_i16m1(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_i16m1(v0, v1, v2, base, new_vl, 19);
}

/*
** test0_vlseg3e16ff_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_i16m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_i16m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 2);
}

/*
** test0_vlseg3e16ff_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_i16m2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_i16m2:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_i16m2(v0, v1, v2, base, new_vl, 1);
}

/*
** test0_vlseg3e16ff_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,vint16m2_t merge2,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_i16m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_i16m2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,vint16m2_t merge2,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_i16m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 13);
}

/*
** test0_vlseg3e16ff_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_i16mf2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_i16mf2(v0, v1, v2, base, new_vl, 1);
}

/*
** test0_vlseg3e16ff_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_i16mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_i16mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 29);
}

/*
** test0_vlseg3e16ff_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_i16mf4(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_i16mf4(v0, v1, v2, base, new_vl, 13);
}

/*
** test0_vlseg3e16ff_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_i16mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_i16mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 28);
}

/*
** test0_vlseg3e16ff_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_u16m1(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_u16m1(v0, v1, v2, base, new_vl, 4);
}

/*
** test0_vlseg3e16ff_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_u16m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_u16m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 30);
}

/*
** test0_vlseg3e16ff_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_u16m2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_u16m2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_u16m2(v0, v1, v2, base, new_vl, 12);
}

/*
** test0_vlseg3e16ff_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,vuint16m2_t merge2,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_u16m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_u16m2_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,vuint16m2_t merge2,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_u16m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 25);
}

/*
** test0_vlseg3e16ff_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_u16mf2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_u16mf2(v0, v1, v2, base, new_vl, 28);
}

/*
** test0_vlseg3e16ff_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_u16mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_u16mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 20);
}

/*
** test0_vlseg3e16ff_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_u16mf4(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_u16mf4(v0, v1, v2, base, new_vl, 25);
}

/*
** test0_vlseg3e16ff_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16ff_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_u16mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e16ff_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16ff_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e16ff_v_u16mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 20);
}

/*
** test0_vlseg3e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,const float16_t *base,size_t vl)
{
    vlseg3e16_v_f16m1(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,const float16_t *base,size_t vl)
{
    vlseg3e16_v_f16m1(v0, v1, v2, base, 10);
}

/*
** test0_vlseg3e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,const float16_t *base,size_t vl)
{
    vlseg3e16_v_f16m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,const float16_t *base,size_t vl)
{
    vlseg3e16_v_f16m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 27);
}

/*
** test0_vlseg3e16_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,const float16_t *base,size_t vl)
{
    vlseg3e16_v_f16m2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e16_v_f16m2:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,const float16_t *base,size_t vl)
{
    vlseg3e16_v_f16m2(v0, v1, v2, base, 2);
}

/*
** test0_vlseg3e16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,vfloat16m2_t merge2,const float16_t *base,size_t vl)
{
    vlseg3e16_v_f16m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e16_v_f16m2_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,vfloat16m2_t merge2,const float16_t *base,size_t vl)
{
    vlseg3e16_v_f16m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 26);
}

/*
** test0_vlseg3e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,const float16_t *base,size_t vl)
{
    vlseg3e16_v_f16mf2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,const float16_t *base,size_t vl)
{
    vlseg3e16_v_f16mf2(v0, v1, v2, base, 25);
}

/*
** test0_vlseg3e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,const float16_t *base,size_t vl)
{
    vlseg3e16_v_f16mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,const float16_t *base,size_t vl)
{
    vlseg3e16_v_f16mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 31);
}

/*
** test0_vlseg3e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,const float16_t *base,size_t vl)
{
    vlseg3e16_v_f16mf4(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,const float16_t *base,size_t vl)
{
    vlseg3e16_v_f16mf4(v0, v1, v2, base, 20);
}

/*
** test0_vlseg3e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,const float16_t *base,size_t vl)
{
    vlseg3e16_v_f16mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,const float16_t *base,size_t vl)
{
    vlseg3e16_v_f16mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 4);
}

/*
** test0_vlseg3e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16m1(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16m1(v0, v1, v2, base, 25);
}

/*
** test0_vlseg3e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 29);
}

/*
** test0_vlseg3e16_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16m2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e16_v_i16m2:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16m2(v0, v1, v2, base, 11);
}

/*
** test0_vlseg3e16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,vint16m2_t merge2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e16_v_i16m2_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,vint16m2_t merge2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 19);
}

/*
** test0_vlseg3e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16mf2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16mf2(v0, v1, v2, base, 23);
}

/*
** test0_vlseg3e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 18);
}

/*
** test0_vlseg3e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16mf4(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16mf4(v0, v1, v2, base, 13);
}

/*
** test0_vlseg3e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 17);
}

/*
** test0_vlseg3e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16m1(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16m1(v0, v1, v2, base, 27);
}

/*
** test0_vlseg3e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 17);
}

/*
** test0_vlseg3e16_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16m2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e16_v_u16m2:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16m2(v0, v1, v2, base, 15);
}

/*
** test0_vlseg3e16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,vuint16m2_t merge2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e16_v_u16m2_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,vuint16m2_t merge2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 7);
}

/*
** test0_vlseg3e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16mf2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16mf2(v0, v1, v2, base, 22);
}

/*
** test0_vlseg3e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 13);
}

/*
** test0_vlseg3e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16mf4(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16mf4(v0, v1, v2, base, 12);
}

/*
** test0_vlseg3e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,const uint16_t *base,size_t vl)
{
    vlseg3e16_v_u16mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 27);
}

/*
** test0_vlseg3e32ff_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_f32m1(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_f32m1(v0, v1, v2, base, new_vl, 2);
}

/*
** test0_vlseg3e32ff_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_f32m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_f32m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 17);
}

/*
** test0_vlseg3e32ff_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_f32m2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_f32m2:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_f32m2(v0, v1, v2, base, new_vl, 0);
}

/*
** test0_vlseg3e32ff_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,vfloat32m2_t merge2,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_f32m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_f32m2_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,vfloat32m2_t merge2,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_f32m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 27);
}

/*
** test0_vlseg3e32ff_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_f32mf2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_f32mf2(v0, v1, v2, base, new_vl, 6);
}

/*
** test0_vlseg3e32ff_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_f32mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_f32mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 12);
}

/*
** test0_vlseg3e32ff_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_i32m1(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_i32m1(v0, v1, v2, base, new_vl, 20);
}

/*
** test0_vlseg3e32ff_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_i32m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_i32m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 6);
}

/*
** test0_vlseg3e32ff_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_i32m2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_i32m2:
**  ...
**	vsetivli\s+zero,\s*24,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_i32m2(v0, v1, v2, base, new_vl, 24);
}

/*
** test0_vlseg3e32ff_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,vint32m2_t merge2,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_i32m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_i32m2_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,vint32m2_t merge2,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_i32m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 19);
}

/*
** test0_vlseg3e32ff_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_i32mf2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_i32mf2(v0, v1, v2, base, new_vl, 4);
}

/*
** test0_vlseg3e32ff_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_i32mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_i32mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 14);
}

/*
** test0_vlseg3e32ff_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_u32m1(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*28,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_u32m1(v0, v1, v2, base, new_vl, 28);
}

/*
** test0_vlseg3e32ff_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_u32m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_u32m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 23);
}

/*
** test0_vlseg3e32ff_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_u32m2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_u32m2:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_u32m2(v0, v1, v2, base, new_vl, 20);
}

/*
** test0_vlseg3e32ff_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,vuint32m2_t merge2,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_u32m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_u32m2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,vuint32m2_t merge2,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_u32m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 13);
}

/*
** test0_vlseg3e32ff_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_u32mf2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*24,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_u32mf2(v0, v1, v2, base, new_vl, 24);
}

/*
** test0_vlseg3e32ff_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32ff_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_u32mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e32ff_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32ff_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e32ff_v_u32mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 13);
}

/*
** test0_vlseg3e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,const float32_t *base,size_t vl)
{
    vlseg3e32_v_f32m1(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*11,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,const float32_t *base,size_t vl)
{
    vlseg3e32_v_f32m1(v0, v1, v2, base, 11);
}

/*
** test0_vlseg3e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,const float32_t *base,size_t vl)
{
    vlseg3e32_v_f32m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,const float32_t *base,size_t vl)
{
    vlseg3e32_v_f32m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 27);
}

/*
** test0_vlseg3e32_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,const float32_t *base,size_t vl)
{
    vlseg3e32_v_f32m2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e32_v_f32m2:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,const float32_t *base,size_t vl)
{
    vlseg3e32_v_f32m2(v0, v1, v2, base, 18);
}

/*
** test0_vlseg3e32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,vfloat32m2_t merge2,const float32_t *base,size_t vl)
{
    vlseg3e32_v_f32m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e32_v_f32m2_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,vfloat32m2_t merge2,const float32_t *base,size_t vl)
{
    vlseg3e32_v_f32m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 9);
}

/*
** test0_vlseg3e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,const float32_t *base,size_t vl)
{
    vlseg3e32_v_f32mf2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*24,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,const float32_t *base,size_t vl)
{
    vlseg3e32_v_f32mf2(v0, v1, v2, base, 24);
}

/*
** test0_vlseg3e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,const float32_t *base,size_t vl)
{
    vlseg3e32_v_f32mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,const float32_t *base,size_t vl)
{
    vlseg3e32_v_f32mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 8);
}

/*
** test0_vlseg3e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,const int32_t *base,size_t vl)
{
    vlseg3e32_v_i32m1(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*17,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,const int32_t *base,size_t vl)
{
    vlseg3e32_v_i32m1(v0, v1, v2, base, 17);
}

/*
** test0_vlseg3e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,const int32_t *base,size_t vl)
{
    vlseg3e32_v_i32m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,const int32_t *base,size_t vl)
{
    vlseg3e32_v_i32m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 20);
}

/*
** test0_vlseg3e32_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,const int32_t *base,size_t vl)
{
    vlseg3e32_v_i32m2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e32_v_i32m2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,const int32_t *base,size_t vl)
{
    vlseg3e32_v_i32m2(v0, v1, v2, base, 12);
}

/*
** test0_vlseg3e32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,vint32m2_t merge2,const int32_t *base,size_t vl)
{
    vlseg3e32_v_i32m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e32_v_i32m2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,vint32m2_t merge2,const int32_t *base,size_t vl)
{
    vlseg3e32_v_i32m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 14);
}

/*
** test0_vlseg3e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,const int32_t *base,size_t vl)
{
    vlseg3e32_v_i32mf2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,const int32_t *base,size_t vl)
{
    vlseg3e32_v_i32mf2(v0, v1, v2, base, 2);
}

/*
** test0_vlseg3e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,const int32_t *base,size_t vl)
{
    vlseg3e32_v_i32mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,const int32_t *base,size_t vl)
{
    vlseg3e32_v_i32mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 26);
}

/*
** test0_vlseg3e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,const uint32_t *base,size_t vl)
{
    vlseg3e32_v_u32m1(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,const uint32_t *base,size_t vl)
{
    vlseg3e32_v_u32m1(v0, v1, v2, base, 13);
}

/*
** test0_vlseg3e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,const uint32_t *base,size_t vl)
{
    vlseg3e32_v_u32m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,const uint32_t *base,size_t vl)
{
    vlseg3e32_v_u32m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 9);
}

/*
** test0_vlseg3e32_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,const uint32_t *base,size_t vl)
{
    vlseg3e32_v_u32m2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e32_v_u32m2:
**  ...
**	vsetivli\s+zero,\s*22,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,const uint32_t *base,size_t vl)
{
    vlseg3e32_v_u32m2(v0, v1, v2, base, 22);
}

/*
** test0_vlseg3e32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,vuint32m2_t merge2,const uint32_t *base,size_t vl)
{
    vlseg3e32_v_u32m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e32_v_u32m2_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,vuint32m2_t merge2,const uint32_t *base,size_t vl)
{
    vlseg3e32_v_u32m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 30);
}

/*
** test0_vlseg3e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,const uint32_t *base,size_t vl)
{
    vlseg3e32_v_u32mf2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,const uint32_t *base,size_t vl)
{
    vlseg3e32_v_u32mf2(v0, v1, v2, base, 21);
}

/*
** test0_vlseg3e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,const uint32_t *base,size_t vl)
{
    vlseg3e32_v_u32mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,const uint32_t *base,size_t vl)
{
    vlseg3e32_v_u32mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 29);
}

/*
** test0_vlseg3e64ff_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e64ff_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_f64m1(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e64ff_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*9,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e64ff_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_f64m1(v0, v1, v2, base, new_vl, 9);
}

/*
** test0_vlseg3e64ff_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e64ff_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_f64m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e64ff_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e64ff_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_f64m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 23);
}

/*
** test0_vlseg3e64ff_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e64ff_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_f64m2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e64ff_v_f64m2:
**  ...
**	vsetivli\s+zero,\s*14,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e64ff_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_f64m2(v0, v1, v2, base, new_vl, 14);
}

/*
** test0_vlseg3e64ff_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e64ff_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,vfloat64m2_t merge2,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_f64m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e64ff_v_f64m2_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e64ff_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,vfloat64m2_t merge2,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_f64m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 11);
}

/*
** test0_vlseg3e64ff_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e64ff_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_i64m1(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e64ff_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e64ff_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_i64m1(v0, v1, v2, base, new_vl, 0);
}

/*
** test0_vlseg3e64ff_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e64ff_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_i64m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e64ff_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e64ff_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_i64m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 5);
}

/*
** test0_vlseg3e64ff_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e64ff_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_i64m2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e64ff_v_i64m2:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e64ff_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_i64m2(v0, v1, v2, base, new_vl, 31);
}

/*
** test0_vlseg3e64ff_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e64ff_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,vint64m2_t merge2,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_i64m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e64ff_v_i64m2_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e64ff_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,vint64m2_t merge2,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_i64m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 20);
}

/*
** test0_vlseg3e64ff_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e64ff_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_u64m1(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e64ff_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*2,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e64ff_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_u64m1(v0, v1, v2, base, new_vl, 2);
}

/*
** test0_vlseg3e64ff_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e64ff_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_u64m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e64ff_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e64ff_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_u64m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 28);
}

/*
** test0_vlseg3e64ff_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e64ff_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_u64m2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e64ff_v_u64m2:
**  ...
**	vsetivli\s+zero,\s*15,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e64ff_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_u64m2(v0, v1, v2, base, new_vl, 15);
}

/*
** test0_vlseg3e64ff_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e64ff_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,vuint64m2_t merge2,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_u64m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e64ff_v_u64m2_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e64ff_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,vuint64m2_t merge2,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_u64m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 10);
}

/*
** test0_vlseg3e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,const float64_t *base,size_t vl)
{
    vlseg3e64_v_f64m1(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*15,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,const float64_t *base,size_t vl)
{
    vlseg3e64_v_f64m1(v0, v1, v2, base, 15);
}

/*
** test0_vlseg3e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,const float64_t *base,size_t vl)
{
    vlseg3e64_v_f64m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,const float64_t *base,size_t vl)
{
    vlseg3e64_v_f64m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 27);
}

/*
** test0_vlseg3e64_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e64_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,const float64_t *base,size_t vl)
{
    vlseg3e64_v_f64m2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e64_v_f64m2:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e64_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,const float64_t *base,size_t vl)
{
    vlseg3e64_v_f64m2(v0, v1, v2, base, 31);
}

/*
** test0_vlseg3e64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e64_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,vfloat64m2_t merge2,const float64_t *base,size_t vl)
{
    vlseg3e64_v_f64m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e64_v_f64m2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e64_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,vfloat64m2_t merge2,const float64_t *base,size_t vl)
{
    vlseg3e64_v_f64m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 13);
}

/*
** test0_vlseg3e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,const int64_t *base,size_t vl)
{
    vlseg3e64_v_i64m1(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*28,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,const int64_t *base,size_t vl)
{
    vlseg3e64_v_i64m1(v0, v1, v2, base, 28);
}

/*
** test0_vlseg3e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,const int64_t *base,size_t vl)
{
    vlseg3e64_v_i64m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,const int64_t *base,size_t vl)
{
    vlseg3e64_v_i64m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 24);
}

/*
** test0_vlseg3e64_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e64_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,const int64_t *base,size_t vl)
{
    vlseg3e64_v_i64m2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e64_v_i64m2:
**  ...
**	vsetivli\s+zero,\s*10,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e64_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,const int64_t *base,size_t vl)
{
    vlseg3e64_v_i64m2(v0, v1, v2, base, 10);
}

/*
** test0_vlseg3e64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e64_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,vint64m2_t merge2,const int64_t *base,size_t vl)
{
    vlseg3e64_v_i64m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e64_v_i64m2_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e64_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,vint64m2_t merge2,const int64_t *base,size_t vl)
{
    vlseg3e64_v_i64m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 21);
}

/*
** test0_vlseg3e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,const uint64_t *base,size_t vl)
{
    vlseg3e64_v_u64m1(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*13,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,const uint64_t *base,size_t vl)
{
    vlseg3e64_v_u64m1(v0, v1, v2, base, 13);
}

/*
** test0_vlseg3e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,const uint64_t *base,size_t vl)
{
    vlseg3e64_v_u64m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,const uint64_t *base,size_t vl)
{
    vlseg3e64_v_u64m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 25);
}

/*
** test0_vlseg3e64_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e64_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,const uint64_t *base,size_t vl)
{
    vlseg3e64_v_u64m2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e64_v_u64m2:
**  ...
**	vsetivli\s+zero,\s*5,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e64_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,const uint64_t *base,size_t vl)
{
    vlseg3e64_v_u64m2(v0, v1, v2, base, 5);
}

/*
** test0_vlseg3e64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e64_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,vuint64m2_t merge2,const uint64_t *base,size_t vl)
{
    vlseg3e64_v_u64m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e64_v_u64m2_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e64_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,vuint64m2_t merge2,const uint64_t *base,size_t vl)
{
    vlseg3e64_v_u64m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 26);
}

/*
** test0_vlseg3e8ff_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8m1(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8m1(v0, v1, v2, base, new_vl, 18);
}

/*
** test0_vlseg3e8ff_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 8);
}

/*
** test0_vlseg3e8ff_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_i8m2(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8m2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_i8m2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_i8m2(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8m2(v0, v1, v2, base, new_vl, 12);
}

/*
** test0_vlseg3e8ff_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,vint8m2_t merge2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_i8m2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,vint8m2_t merge2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 31);
}

/*
** test0_vlseg3e8ff_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8mf2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8mf2(v0, v1, v2, base, new_vl, 31);
}

/*
** test0_vlseg3e8ff_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 30);
}

/*
** test0_vlseg3e8ff_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8mf4(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*5,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8mf4(v0, v1, v2, base, new_vl, 5);
}

/*
** test0_vlseg3e8ff_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 22);
}

/*
** test0_vlseg3e8ff_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8mf8(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*6,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8mf8(v0, v1, v2, base, new_vl, 6);
}

/*
** test0_vlseg3e8ff_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8mf8_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8mf8_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 7);
}

/*
** test0_vlseg3e8ff_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8m1(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8m1(v0, v1, v2, base, new_vl, 15);
}

/*
** test0_vlseg3e8ff_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 7);
}

/*
** test0_vlseg3e8ff_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_u8m2(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8m2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_u8m2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_u8m2(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8m2(v0, v1, v2, base, new_vl, 12);
}

/*
** test0_vlseg3e8ff_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,vuint8m2_t merge2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_u8m2_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,vuint8m2_t merge2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 10);
}

/*
** test0_vlseg3e8ff_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8mf2(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*9,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8mf2(v0, v1, v2, base, new_vl, 9);
}

/*
** test0_vlseg3e8ff_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 24);
}

/*
** test0_vlseg3e8ff_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8mf4(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8mf4(v0, v1, v2, base, new_vl, 7);
}

/*
** test0_vlseg3e8ff_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 24);
}

/*
** test0_vlseg3e8ff_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8mf8(v0, v1, v2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*27,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8mf8(v0, v1, v2, base, new_vl, 27);
}

/*
** test0_vlseg3e8ff_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8ff_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8mf8_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, vl);
}

/*
** test1_vlseg3e8ff_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8ff_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_u8mf8_m(v0, v1, v2, mask, merge0, merge1, merge2, base, new_vl, 4);
}

/*
** test0_vlseg3e8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8m1(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e8_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8m1(v0, v1, v2, base, 22);
}

/*
** test0_vlseg3e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 21);
}

/*
** test0_vlseg3e8_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8_v_i8m2(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8m2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e8_v_i8m2:
**  ...
**	vsetivli\s+zero,\s*21,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8_v_i8m2(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8m2(v0, v1, v2, base, 21);
}

/*
** test0_vlseg3e8_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,vint8m2_t merge2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e8_v_i8m2_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,vint8m2_t merge2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 27);
}

/*
** test0_vlseg3e8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8mf2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e8_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8mf2(v0, v1, v2, base, 30);
}

/*
** test0_vlseg3e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 25);
}

/*
** test0_vlseg3e8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8mf4(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e8_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8mf4(v0, v1, v2, base, 24);
}

/*
** test0_vlseg3e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 14);
}

/*
** test0_vlseg3e8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8mf8(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e8_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8mf8(v0, v1, v2, base, 19);
}

/*
** test0_vlseg3e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8mf8_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8mf8_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 30);
}

/*
** test0_vlseg3e8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8m1(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e8_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*13,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8m1(v0, v1, v2, base, 13);
}

/*
** test0_vlseg3e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8m1_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 18);
}

/*
** test0_vlseg3e8_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8_v_u8m2(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8m2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e8_v_u8m2:
**  ...
**	vsetivli\s+zero,\s*5,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8_v_u8m2(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8m2(v0, v1, v2, base, 5);
}

/*
** test0_vlseg3e8_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,vuint8m2_t merge2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e8_v_u8m2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,vuint8m2_t merge2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8m2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 13);
}

/*
** test0_vlseg3e8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8mf2(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e8_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*9,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8mf2(v0, v1, v2, base, 9);
}

/*
** test0_vlseg3e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8mf2_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 25);
}

/*
** test0_vlseg3e8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8mf4(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e8_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*9,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8mf4(v0, v1, v2, base, 9);
}

/*
** test0_vlseg3e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8mf4_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 27);
}

/*
** test0_vlseg3e8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg3e8_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8mf8(v0, v1, v2, base, vl);
}

/*
** test1_vlseg3e8_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*23,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg3e8_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8mf8(v0, v1, v2, base, 23);
}

/*
** test0_vlseg3e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg3e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8mf8_m(v0, v1, v2, mask, merge0, merge1, merge2, base, vl);
}

/*
** test1_vlseg3e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg3e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,const uint8_t *base,size_t vl)
{
    vlseg3e8_v_u8mf8_m(v0, v1, v2, mask, merge0, merge1, merge2, base, 30);
}

/*
** test0_vlseg4e16ff_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_f16m1(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_f16m1(v0, v1, v2, v3, base, new_vl, 22);
}

/*
** test0_vlseg4e16ff_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_f16m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_f16m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 18);
}

/*
** test0_vlseg4e16ff_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_f16m2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_f16m2:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_f16m2(v0, v1, v2, v3, base, new_vl, 31);
}

/*
** test0_vlseg4e16ff_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,vfloat16m2_t merge2,vfloat16m2_t merge3,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_f16m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_f16m2_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,vfloat16m2_t merge2,vfloat16m2_t merge3,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_f16m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 19);
}

/*
** test0_vlseg4e16ff_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_f16mf2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_f16mf2(v0, v1, v2, v3, base, new_vl, 23);
}

/*
** test0_vlseg4e16ff_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_f16mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_f16mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 2);
}

/*
** test0_vlseg4e16ff_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_f16mf4(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_f16mf4(v0, v1, v2, v3, base, new_vl, 7);
}

/*
** test0_vlseg4e16ff_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_f16mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_f16mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 24);
}

/*
** test0_vlseg4e16ff_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_i16m1(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_i16m1(v0, v1, v2, v3, base, new_vl, 24);
}

/*
** test0_vlseg4e16ff_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_i16m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_i16m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 27);
}

/*
** test0_vlseg4e16ff_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_i16m2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_i16m2:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_i16m2(v0, v1, v2, v3, base, new_vl, 26);
}

/*
** test0_vlseg4e16ff_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,vint16m2_t merge2,vint16m2_t merge3,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_i16m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_i16m2_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,vint16m2_t merge2,vint16m2_t merge3,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_i16m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 15);
}

/*
** test0_vlseg4e16ff_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_i16mf2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_i16mf2(v0, v1, v2, v3, base, new_vl, 28);
}

/*
** test0_vlseg4e16ff_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_i16mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_i16mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 14);
}

/*
** test0_vlseg4e16ff_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_i16mf4(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_i16mf4(v0, v1, v2, v3, base, new_vl, 10);
}

/*
** test0_vlseg4e16ff_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_i16mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_i16mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 22);
}

/*
** test0_vlseg4e16ff_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_u16m1(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*14,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_u16m1(v0, v1, v2, v3, base, new_vl, 14);
}

/*
** test0_vlseg4e16ff_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_u16m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_u16m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 17);
}

/*
** test0_vlseg4e16ff_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_u16m2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_u16m2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_u16m2(v0, v1, v2, v3, base, new_vl, 12);
}

/*
** test0_vlseg4e16ff_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,vuint16m2_t merge2,vuint16m2_t merge3,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_u16m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_u16m2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,vuint16m2_t merge2,vuint16m2_t merge3,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_u16m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 5);
}

/*
** test0_vlseg4e16ff_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_u16mf2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_u16mf2(v0, v1, v2, v3, base, new_vl, 6);
}

/*
** test0_vlseg4e16ff_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_u16mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_u16mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 29);
}

/*
** test0_vlseg4e16ff_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_u16mf4(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_u16mf4(v0, v1, v2, v3, base, new_vl, 19);
}

/*
** test0_vlseg4e16ff_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16ff_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_u16mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e16ff_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16ff_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e16ff_v_u16mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 9);
}

/*
** test0_vlseg4e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,const float16_t *base,size_t vl)
{
    vlseg4e16_v_f16m1(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,const float16_t *base,size_t vl)
{
    vlseg4e16_v_f16m1(v0, v1, v2, v3, base, 20);
}

/*
** test0_vlseg4e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,const float16_t *base,size_t vl)
{
    vlseg4e16_v_f16m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,const float16_t *base,size_t vl)
{
    vlseg4e16_v_f16m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 23);
}

/*
** test0_vlseg4e16_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,const float16_t *base,size_t vl)
{
    vlseg4e16_v_f16m2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e16_v_f16m2:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16_v_f16m2(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,const float16_t *base,size_t vl)
{
    vlseg4e16_v_f16m2(v0, v1, v2, v3, base, 27);
}

/*
** test0_vlseg4e16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,vfloat16m2_t merge2,vfloat16m2_t merge3,const float16_t *base,size_t vl)
{
    vlseg4e16_v_f16m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e16_v_f16m2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16_v_f16m2_m(vfloat16m2_t *v0,vfloat16m2_t *v1,vfloat16m2_t *v2,vfloat16m2_t *v3,vbool8_t mask,vfloat16m2_t merge0,vfloat16m2_t merge1,vfloat16m2_t merge2,vfloat16m2_t merge3,const float16_t *base,size_t vl)
{
    vlseg4e16_v_f16m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 5);
}

/*
** test0_vlseg4e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,const float16_t *base,size_t vl)
{
    vlseg4e16_v_f16mf2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,const float16_t *base,size_t vl)
{
    vlseg4e16_v_f16mf2(v0, v1, v2, v3, base, 19);
}

/*
** test0_vlseg4e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,const float16_t *base,size_t vl)
{
    vlseg4e16_v_f16mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,const float16_t *base,size_t vl)
{
    vlseg4e16_v_f16mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 13);
}

/*
** test0_vlseg4e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,const float16_t *base,size_t vl)
{
    vlseg4e16_v_f16mf4(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*14,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,const float16_t *base,size_t vl)
{
    vlseg4e16_v_f16mf4(v0, v1, v2, v3, base, 14);
}

/*
** test0_vlseg4e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,const float16_t *base,size_t vl)
{
    vlseg4e16_v_f16mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,const float16_t *base,size_t vl)
{
    vlseg4e16_v_f16mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 26);
}

/*
** test0_vlseg4e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,const int16_t *base,size_t vl)
{
    vlseg4e16_v_i16m1(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,const int16_t *base,size_t vl)
{
    vlseg4e16_v_i16m1(v0, v1, v2, v3, base, 7);
}

/*
** test0_vlseg4e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,const int16_t *base,size_t vl)
{
    vlseg4e16_v_i16m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,const int16_t *base,size_t vl)
{
    vlseg4e16_v_i16m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 9);
}

/*
** test0_vlseg4e16_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,const int16_t *base,size_t vl)
{
    vlseg4e16_v_i16m2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e16_v_i16m2:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16_v_i16m2(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,const int16_t *base,size_t vl)
{
    vlseg4e16_v_i16m2(v0, v1, v2, v3, base, 26);
}

/*
** test0_vlseg4e16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,vint16m2_t merge2,vint16m2_t merge3,const int16_t *base,size_t vl)
{
    vlseg4e16_v_i16m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e16_v_i16m2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16_v_i16m2_m(vint16m2_t *v0,vint16m2_t *v1,vint16m2_t *v2,vint16m2_t *v3,vbool8_t mask,vint16m2_t merge0,vint16m2_t merge1,vint16m2_t merge2,vint16m2_t merge3,const int16_t *base,size_t vl)
{
    vlseg4e16_v_i16m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 5);
}

/*
** test0_vlseg4e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,const int16_t *base,size_t vl)
{
    vlseg4e16_v_i16mf2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,const int16_t *base,size_t vl)
{
    vlseg4e16_v_i16mf2(v0, v1, v2, v3, base, 19);
}

/*
** test0_vlseg4e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,const int16_t *base,size_t vl)
{
    vlseg4e16_v_i16mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,const int16_t *base,size_t vl)
{
    vlseg4e16_v_i16mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 20);
}

/*
** test0_vlseg4e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,const int16_t *base,size_t vl)
{
    vlseg4e16_v_i16mf4(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,const int16_t *base,size_t vl)
{
    vlseg4e16_v_i16mf4(v0, v1, v2, v3, base, 27);
}

/*
** test0_vlseg4e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,const int16_t *base,size_t vl)
{
    vlseg4e16_v_i16mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,const int16_t *base,size_t vl)
{
    vlseg4e16_v_i16mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 13);
}

/*
** test0_vlseg4e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,const uint16_t *base,size_t vl)
{
    vlseg4e16_v_u16m1(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,const uint16_t *base,size_t vl)
{
    vlseg4e16_v_u16m1(v0, v1, v2, v3, base, 3);
}

/*
** test0_vlseg4e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,const uint16_t *base,size_t vl)
{
    vlseg4e16_v_u16m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,const uint16_t *base,size_t vl)
{
    vlseg4e16_v_u16m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 19);
}

/*
** test0_vlseg4e16_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,const uint16_t *base,size_t vl)
{
    vlseg4e16_v_u16m2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e16_v_u16m2:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16_v_u16m2(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,const uint16_t *base,size_t vl)
{
    vlseg4e16_v_u16m2(v0, v1, v2, v3, base, 8);
}

/*
** test0_vlseg4e16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,vuint16m2_t merge2,vuint16m2_t merge3,const uint16_t *base,size_t vl)
{
    vlseg4e16_v_u16m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e16_v_u16m2_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vuint16m2_t *v2,vuint16m2_t *v3,vbool8_t mask,vuint16m2_t merge0,vuint16m2_t merge1,vuint16m2_t merge2,vuint16m2_t merge3,const uint16_t *base,size_t vl)
{
    vlseg4e16_v_u16m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 9);
}

/*
** test0_vlseg4e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,const uint16_t *base,size_t vl)
{
    vlseg4e16_v_u16mf2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,const uint16_t *base,size_t vl)
{
    vlseg4e16_v_u16mf2(v0, v1, v2, v3, base, 18);
}

/*
** test0_vlseg4e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,const uint16_t *base,size_t vl)
{
    vlseg4e16_v_u16mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,const uint16_t *base,size_t vl)
{
    vlseg4e16_v_u16mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 27);
}

/*
** test0_vlseg4e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,const uint16_t *base,size_t vl)
{
    vlseg4e16_v_u16mf4(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,const uint16_t *base,size_t vl)
{
    vlseg4e16_v_u16mf4(v0, v1, v2, v3, base, 22);
}

/*
** test0_vlseg4e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,const uint16_t *base,size_t vl)
{
    vlseg4e16_v_u16mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,const uint16_t *base,size_t vl)
{
    vlseg4e16_v_u16mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 30);
}

/*
** test0_vlseg4e32ff_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_f32m1(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_f32m1(v0, v1, v2, v3, base, new_vl, 30);
}

/*
** test0_vlseg4e32ff_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_f32m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_f32m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 29);
}

/*
** test0_vlseg4e32ff_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_f32m2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_f32m2:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_f32m2(v0, v1, v2, v3, base, new_vl, 27);
}

/*
** test0_vlseg4e32ff_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,vfloat32m2_t merge2,vfloat32m2_t merge3,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_f32m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_f32m2_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,vfloat32m2_t merge2,vfloat32m2_t merge3,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_f32m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 22);
}

/*
** test0_vlseg4e32ff_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_f32mf2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_f32mf2(v0, v1, v2, v3, base, new_vl, 18);
}

/*
** test0_vlseg4e32ff_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_f32mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_f32mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 29);
}

/*
** test0_vlseg4e32ff_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_i32m1(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_i32m1(v0, v1, v2, v3, base, new_vl, 1);
}

/*
** test0_vlseg4e32ff_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_i32m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_i32m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 14);
}

/*
** test0_vlseg4e32ff_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_i32m2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_i32m2:
**  ...
**	vsetivli\s+zero,\s*3,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_i32m2(v0, v1, v2, v3, base, new_vl, 3);
}

/*
** test0_vlseg4e32ff_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,vint32m2_t merge2,vint32m2_t merge3,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_i32m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_i32m2_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,vint32m2_t merge2,vint32m2_t merge3,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_i32m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 18);
}

/*
** test0_vlseg4e32ff_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_i32mf2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_i32mf2(v0, v1, v2, v3, base, new_vl, 27);
}

/*
** test0_vlseg4e32ff_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_i32mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_i32mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 25);
}

/*
** test0_vlseg4e32ff_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_u32m1(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_u32m1(v0, v1, v2, v3, base, new_vl, 29);
}

/*
** test0_vlseg4e32ff_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_u32m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_u32m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 28);
}

/*
** test0_vlseg4e32ff_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_u32m2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_u32m2:
**  ...
**	vsetivli\s+zero,\s*10,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_u32m2(v0, v1, v2, v3, base, new_vl, 10);
}

/*
** test0_vlseg4e32ff_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,vuint32m2_t merge2,vuint32m2_t merge3,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_u32m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_u32m2_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,vuint32m2_t merge2,vuint32m2_t merge3,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_u32m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 1);
}

/*
** test0_vlseg4e32ff_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_u32mf2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_u32mf2(v0, v1, v2, v3, base, new_vl, 5);
}

/*
** test0_vlseg4e32ff_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32ff_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_u32mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e32ff_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32ff_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e32ff_v_u32mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 5);
}

/*
** test0_vlseg4e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,const float32_t *base,size_t vl)
{
    vlseg4e32_v_f32m1(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,const float32_t *base,size_t vl)
{
    vlseg4e32_v_f32m1(v0, v1, v2, v3, base, 1);
}

/*
** test0_vlseg4e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,const float32_t *base,size_t vl)
{
    vlseg4e32_v_f32m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,const float32_t *base,size_t vl)
{
    vlseg4e32_v_f32m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 3);
}

/*
** test0_vlseg4e32_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,const float32_t *base,size_t vl)
{
    vlseg4e32_v_f32m2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e32_v_f32m2:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32_v_f32m2(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,const float32_t *base,size_t vl)
{
    vlseg4e32_v_f32m2(v0, v1, v2, v3, base, 0);
}

/*
** test0_vlseg4e32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,vfloat32m2_t merge2,vfloat32m2_t merge3,const float32_t *base,size_t vl)
{
    vlseg4e32_v_f32m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e32_v_f32m2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vfloat32m2_t *v3,vbool16_t mask,vfloat32m2_t merge0,vfloat32m2_t merge1,vfloat32m2_t merge2,vfloat32m2_t merge3,const float32_t *base,size_t vl)
{
    vlseg4e32_v_f32m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 31);
}

/*
** test0_vlseg4e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,const float32_t *base,size_t vl)
{
    vlseg4e32_v_f32mf2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,const float32_t *base,size_t vl)
{
    vlseg4e32_v_f32mf2(v0, v1, v2, v3, base, 21);
}

/*
** test0_vlseg4e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,const float32_t *base,size_t vl)
{
    vlseg4e32_v_f32mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,const float32_t *base,size_t vl)
{
    vlseg4e32_v_f32mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 16);
}

/*
** test0_vlseg4e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,const int32_t *base,size_t vl)
{
    vlseg4e32_v_i32m1(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,const int32_t *base,size_t vl)
{
    vlseg4e32_v_i32m1(v0, v1, v2, v3, base, 1);
}

/*
** test0_vlseg4e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,const int32_t *base,size_t vl)
{
    vlseg4e32_v_i32m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,const int32_t *base,size_t vl)
{
    vlseg4e32_v_i32m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 19);
}

/*
** test0_vlseg4e32_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,const int32_t *base,size_t vl)
{
    vlseg4e32_v_i32m2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e32_v_i32m2:
**  ...
**	vsetivli\s+zero,\s*26,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32_v_i32m2(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,const int32_t *base,size_t vl)
{
    vlseg4e32_v_i32m2(v0, v1, v2, v3, base, 26);
}

/*
** test0_vlseg4e32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,vint32m2_t merge2,vint32m2_t merge3,const int32_t *base,size_t vl)
{
    vlseg4e32_v_i32m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e32_v_i32m2_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vint32m2_t *v2,vint32m2_t *v3,vbool16_t mask,vint32m2_t merge0,vint32m2_t merge1,vint32m2_t merge2,vint32m2_t merge3,const int32_t *base,size_t vl)
{
    vlseg4e32_v_i32m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 11);
}

/*
** test0_vlseg4e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,const int32_t *base,size_t vl)
{
    vlseg4e32_v_i32mf2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,const int32_t *base,size_t vl)
{
    vlseg4e32_v_i32mf2(v0, v1, v2, v3, base, 29);
}

/*
** test0_vlseg4e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,const int32_t *base,size_t vl)
{
    vlseg4e32_v_i32mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,const int32_t *base,size_t vl)
{
    vlseg4e32_v_i32mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 9);
}

/*
** test0_vlseg4e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,const uint32_t *base,size_t vl)
{
    vlseg4e32_v_u32m1(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,const uint32_t *base,size_t vl)
{
    vlseg4e32_v_u32m1(v0, v1, v2, v3, base, 0);
}

/*
** test0_vlseg4e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,const uint32_t *base,size_t vl)
{
    vlseg4e32_v_u32m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,const uint32_t *base,size_t vl)
{
    vlseg4e32_v_u32m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 14);
}

/*
** test0_vlseg4e32_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,const uint32_t *base,size_t vl)
{
    vlseg4e32_v_u32m2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e32_v_u32m2:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32_v_u32m2(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,const uint32_t *base,size_t vl)
{
    vlseg4e32_v_u32m2(v0, v1, v2, v3, base, 6);
}

/*
** test0_vlseg4e32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,vuint32m2_t merge2,vuint32m2_t merge3,const uint32_t *base,size_t vl)
{
    vlseg4e32_v_u32m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e32_v_u32m2_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32_v_u32m2_m(vuint32m2_t *v0,vuint32m2_t *v1,vuint32m2_t *v2,vuint32m2_t *v3,vbool16_t mask,vuint32m2_t merge0,vuint32m2_t merge1,vuint32m2_t merge2,vuint32m2_t merge3,const uint32_t *base,size_t vl)
{
    vlseg4e32_v_u32m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 17);
}

/*
** test0_vlseg4e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,const uint32_t *base,size_t vl)
{
    vlseg4e32_v_u32mf2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,const uint32_t *base,size_t vl)
{
    vlseg4e32_v_u32mf2(v0, v1, v2, v3, base, 7);
}

/*
** test0_vlseg4e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,const uint32_t *base,size_t vl)
{
    vlseg4e32_v_u32mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,const uint32_t *base,size_t vl)
{
    vlseg4e32_v_u32mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 20);
}

/*
** test0_vlseg4e64ff_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e64ff_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_f64m1(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e64ff_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*7,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e64ff_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_f64m1(v0, v1, v2, v3, base, new_vl, 7);
}

/*
** test0_vlseg4e64ff_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e64ff_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_f64m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e64ff_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e64ff_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_f64m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 1);
}

/*
** test0_vlseg4e64ff_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e64ff_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_f64m2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e64ff_v_f64m2:
**  ...
**	vsetivli\s+zero,\s*23,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e64ff_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_f64m2(v0, v1, v2, v3, base, new_vl, 23);
}

/*
** test0_vlseg4e64ff_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e64ff_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,vfloat64m2_t merge2,vfloat64m2_t merge3,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_f64m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e64ff_v_f64m2_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e64ff_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,vfloat64m2_t merge2,vfloat64m2_t merge3,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_f64m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 3);
}

/*
** test0_vlseg4e64ff_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e64ff_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_i64m1(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e64ff_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*12,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e64ff_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_i64m1(v0, v1, v2, v3, base, new_vl, 12);
}

/*
** test0_vlseg4e64ff_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e64ff_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_i64m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e64ff_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e64ff_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_i64m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 15);
}

/*
** test0_vlseg4e64ff_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e64ff_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_i64m2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e64ff_v_i64m2:
**  ...
**	vsetivli\s+zero,\s*24,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e64ff_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_i64m2(v0, v1, v2, v3, base, new_vl, 24);
}

/*
** test0_vlseg4e64ff_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e64ff_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,vint64m2_t merge2,vint64m2_t merge3,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_i64m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e64ff_v_i64m2_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e64ff_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,vint64m2_t merge2,vint64m2_t merge3,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_i64m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 12);
}

/*
** test0_vlseg4e64ff_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e64ff_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_u64m1(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e64ff_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*23,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e64ff_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_u64m1(v0, v1, v2, v3, base, new_vl, 23);
}

/*
** test0_vlseg4e64ff_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e64ff_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_u64m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e64ff_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e64ff_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_u64m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 2);
}

/*
** test0_vlseg4e64ff_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e64ff_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_u64m2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e64ff_v_u64m2:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e64ff_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_u64m2(v0, v1, v2, v3, base, new_vl, 31);
}

/*
** test0_vlseg4e64ff_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e64ff_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,vuint64m2_t merge2,vuint64m2_t merge3,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_u64m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e64ff_v_u64m2_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e64ff_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,vuint64m2_t merge2,vuint64m2_t merge3,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_u64m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 22);
}

/*
** test0_vlseg4e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,const float64_t *base,size_t vl)
{
    vlseg4e64_v_f64m1(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*4,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,const float64_t *base,size_t vl)
{
    vlseg4e64_v_f64m1(v0, v1, v2, v3, base, 4);
}

/*
** test0_vlseg4e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,const float64_t *base,size_t vl)
{
    vlseg4e64_v_f64m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,const float64_t *base,size_t vl)
{
    vlseg4e64_v_f64m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 16);
}

/*
** test0_vlseg4e64_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e64_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,const float64_t *base,size_t vl)
{
    vlseg4e64_v_f64m2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e64_v_f64m2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e64_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,const float64_t *base,size_t vl)
{
    vlseg4e64_v_f64m2(v0, v1, v2, v3, base, 12);
}

/*
** test0_vlseg4e64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e64_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,vfloat64m2_t merge2,vfloat64m2_t merge3,const float64_t *base,size_t vl)
{
    vlseg4e64_v_f64m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e64_v_f64m2_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e64_v_f64m2_m(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,vbool32_t mask,vfloat64m2_t merge0,vfloat64m2_t merge1,vfloat64m2_t merge2,vfloat64m2_t merge3,const float64_t *base,size_t vl)
{
    vlseg4e64_v_f64m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 9);
}

/*
** test0_vlseg4e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,const int64_t *base,size_t vl)
{
    vlseg4e64_v_i64m1(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*19,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,const int64_t *base,size_t vl)
{
    vlseg4e64_v_i64m1(v0, v1, v2, v3, base, 19);
}

/*
** test0_vlseg4e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,const int64_t *base,size_t vl)
{
    vlseg4e64_v_i64m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,const int64_t *base,size_t vl)
{
    vlseg4e64_v_i64m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 26);
}

/*
** test0_vlseg4e64_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e64_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,const int64_t *base,size_t vl)
{
    vlseg4e64_v_i64m2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e64_v_i64m2:
**  ...
**	vsetivli\s+zero,\s*25,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e64_v_i64m2(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,const int64_t *base,size_t vl)
{
    vlseg4e64_v_i64m2(v0, v1, v2, v3, base, 25);
}

/*
** test0_vlseg4e64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e64_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,vint64m2_t merge2,vint64m2_t merge3,const int64_t *base,size_t vl)
{
    vlseg4e64_v_i64m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e64_v_i64m2_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e64_v_i64m2_m(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,vint64m2_t *v3,vbool32_t mask,vint64m2_t merge0,vint64m2_t merge1,vint64m2_t merge2,vint64m2_t merge3,const int64_t *base,size_t vl)
{
    vlseg4e64_v_i64m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 28);
}

/*
** test0_vlseg4e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,const uint64_t *base,size_t vl)
{
    vlseg4e64_v_u64m1(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*9,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,const uint64_t *base,size_t vl)
{
    vlseg4e64_v_u64m1(v0, v1, v2, v3, base, 9);
}

/*
** test0_vlseg4e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,const uint64_t *base,size_t vl)
{
    vlseg4e64_v_u64m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,const uint64_t *base,size_t vl)
{
    vlseg4e64_v_u64m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 14);
}

/*
** test0_vlseg4e64_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e64_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,const uint64_t *base,size_t vl)
{
    vlseg4e64_v_u64m2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e64_v_u64m2:
**  ...
**	vsetivli\s+zero,\s*27,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e64_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,const uint64_t *base,size_t vl)
{
    vlseg4e64_v_u64m2(v0, v1, v2, v3, base, 27);
}

/*
** test0_vlseg4e64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e64_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,vuint64m2_t merge2,vuint64m2_t merge3,const uint64_t *base,size_t vl)
{
    vlseg4e64_v_u64m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e64_v_u64m2_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e64_v_u64m2_m(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,vuint64m2_t *v3,vbool32_t mask,vuint64m2_t merge0,vuint64m2_t merge1,vuint64m2_t merge2,vuint64m2_t merge3,const uint64_t *base,size_t vl)
{
    vlseg4e64_v_u64m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 23);
}

/*
** test0_vlseg4e8ff_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8m1(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8m1(v0, v1, v2, v3, base, new_vl, 7);
}

/*
** test0_vlseg4e8ff_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 14);
}

/*
** test0_vlseg4e8ff_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_i8m2(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8m2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_i8m2:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_i8m2(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8m2(v0, v1, v2, v3, base, new_vl, 26);
}

/*
** test0_vlseg4e8ff_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,vint8m2_t merge2,vint8m2_t merge3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_i8m2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,vint8m2_t merge2,vint8m2_t merge3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 13);
}

/*
** test0_vlseg4e8ff_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8mf2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*5,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8mf2(v0, v1, v2, v3, base, new_vl, 5);
}

/*
** test0_vlseg4e8ff_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 31);
}

/*
** test0_vlseg4e8ff_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8mf4(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8mf4(v0, v1, v2, v3, base, new_vl, 25);
}

/*
** test0_vlseg4e8ff_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 19);
}

/*
** test0_vlseg4e8ff_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8mf8(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*28,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8mf8(v0, v1, v2, v3, base, new_vl, 28);
}

/*
** test0_vlseg4e8ff_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8mf8_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8mf8_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 11);
}

/*
** test0_vlseg4e8ff_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8m1(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8m1(v0, v1, v2, v3, base, new_vl, 7);
}

/*
** test0_vlseg4e8ff_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 2);
}

/*
** test0_vlseg4e8ff_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_u8m2(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vuint8m2_t *v3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8m2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_u8m2:
**  ...
**	vsetivli\s+zero,\s*8,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_u8m2(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vuint8m2_t *v3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8m2(v0, v1, v2, v3, base, new_vl, 8);
}

/*
** test0_vlseg4e8ff_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vuint8m2_t *v3,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,vuint8m2_t merge2,vuint8m2_t merge3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_u8m2_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vuint8m2_t *v3,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,vuint8m2_t merge2,vuint8m2_t merge3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 7);
}

/*
** test0_vlseg4e8ff_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8mf2(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8mf2(v0, v1, v2, v3, base, new_vl, 30);
}

/*
** test0_vlseg4e8ff_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 2);
}

/*
** test0_vlseg4e8ff_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8mf4(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8mf4(v0, v1, v2, v3, base, new_vl, 11);
}

/*
** test0_vlseg4e8ff_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 14);
}

/*
** test0_vlseg4e8ff_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8mf8(v0, v1, v2, v3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8mf8(v0, v1, v2, v3, base, new_vl, 18);
}

/*
** test0_vlseg4e8ff_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8ff_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8mf8_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, vl);
}

/*
** test1_vlseg4e8ff_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8ff_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_u8mf8_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, new_vl, 27);
}

/*
** test0_vlseg4e8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8m1(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e8_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*4,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8m1(v0, v1, v2, v3, base, 4);
}

/*
** test0_vlseg4e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 20);
}

/*
** test0_vlseg4e8_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8_v_i8m2(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8m2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e8_v_i8m2:
**  ...
**	vsetivli\s+zero,\s*1,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8_v_i8m2(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8m2(v0, v1, v2, v3, base, 1);
}

/*
** test0_vlseg4e8_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,vint8m2_t merge2,vint8m2_t merge3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e8_v_i8m2_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,vbool4_t mask,vint8m2_t merge0,vint8m2_t merge1,vint8m2_t merge2,vint8m2_t merge3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 24);
}

/*
** test0_vlseg4e8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8mf2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e8_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*9,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8mf2(v0, v1, v2, v3, base, 9);
}

/*
** test0_vlseg4e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 7);
}

/*
** test0_vlseg4e8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8mf4(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e8_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8mf4(v0, v1, v2, v3, base, 30);
}

/*
** test0_vlseg4e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 7);
}

/*
** test0_vlseg4e8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8mf8(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e8_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*4,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8mf8(v0, v1, v2, v3, base, 4);
}

/*
** test0_vlseg4e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8mf8_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,const int8_t *base,size_t vl)
{
    vlseg4e8_v_i8mf8_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 26);
}

/*
** test0_vlseg4e8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8m1(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e8_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8m1(v0, v1, v2, v3, base, 25);
}

/*
** test0_vlseg4e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8m1_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 7);
}

/*
** test0_vlseg4e8_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8_v_u8m2(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vuint8m2_t *v3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8m2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e8_v_u8m2:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8_v_u8m2(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vuint8m2_t *v3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8m2(v0, v1, v2, v3, base, 22);
}

/*
** test0_vlseg4e8_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vuint8m2_t *v3,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,vuint8m2_t merge2,vuint8m2_t merge3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e8_v_u8m2_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8_v_u8m2_m(vuint8m2_t *v0,vuint8m2_t *v1,vuint8m2_t *v2,vuint8m2_t *v3,vbool4_t mask,vuint8m2_t merge0,vuint8m2_t merge1,vuint8m2_t merge2,vuint8m2_t merge3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8m2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 6);
}

/*
** test0_vlseg4e8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8mf2(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e8_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*1,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8mf2(v0, v1, v2, v3, base, 1);
}

/*
** test0_vlseg4e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8mf2_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 11);
}

/*
** test0_vlseg4e8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8mf4(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e8_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8mf4(v0, v1, v2, v3, base, 16);
}

/*
** test0_vlseg4e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8mf4_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 18);
}

/*
** test0_vlseg4e8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg4e8_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8mf8(v0, v1, v2, v3, base, vl);
}

/*
** test1_vlseg4e8_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg4e8_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8mf8(v0, v1, v2, v3, base, 0);
}

/*
** test0_vlseg4e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg4e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8mf8_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, vl);
}

/*
** test1_vlseg4e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg4e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,const uint8_t *base,size_t vl)
{
    vlseg4e8_v_u8mf8_m(v0, v1, v2, v3, mask, merge0, merge1, merge2, merge3, base, 14);
}

/*
** test0_vlseg5e16ff_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_f16m1(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_f16m1(v0, v1, v2, v3, v4, base, new_vl, 4);
}

/*
** test0_vlseg5e16ff_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_f16m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_f16m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 27);
}

/*
** test0_vlseg5e16ff_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_f16mf2(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_f16mf2(v0, v1, v2, v3, v4, base, new_vl, 31);
}

/*
** test0_vlseg5e16ff_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_f16mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_f16mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 12);
}

/*
** test0_vlseg5e16ff_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_f16mf4(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_f16mf4(v0, v1, v2, v3, v4, base, new_vl, 8);
}

/*
** test0_vlseg5e16ff_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_f16mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_f16mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 7);
}

/*
** test0_vlseg5e16ff_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_i16m1(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_i16m1(v0, v1, v2, v3, v4, base, new_vl, 3);
}

/*
** test0_vlseg5e16ff_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_i16m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_i16m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 18);
}

/*
** test0_vlseg5e16ff_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_i16mf2(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_i16mf2(v0, v1, v2, v3, v4, base, new_vl, 16);
}

/*
** test0_vlseg5e16ff_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_i16mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_i16mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 0);
}

/*
** test0_vlseg5e16ff_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_i16mf4(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_i16mf4(v0, v1, v2, v3, v4, base, new_vl, 9);
}

/*
** test0_vlseg5e16ff_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_i16mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_i16mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 10);
}

/*
** test0_vlseg5e16ff_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_u16m1(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_u16m1(v0, v1, v2, v3, v4, base, new_vl, 24);
}

/*
** test0_vlseg5e16ff_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_u16m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_u16m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 5);
}

/*
** test0_vlseg5e16ff_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_u16mf2(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_u16mf2(v0, v1, v2, v3, v4, base, new_vl, 19);
}

/*
** test0_vlseg5e16ff_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_u16mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_u16mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 0);
}

/*
** test0_vlseg5e16ff_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_u16mf4(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_u16mf4(v0, v1, v2, v3, v4, base, new_vl, 17);
}

/*
** test0_vlseg5e16ff_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16ff_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_u16mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e16ff_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16ff_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_u16mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 26);
}

/*
** test0_vlseg5e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,const float16_t *base,size_t vl)
{
    vlseg5e16_v_f16m1(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,const float16_t *base,size_t vl)
{
    vlseg5e16_v_f16m1(v0, v1, v2, v3, v4, base, 8);
}

/*
** test0_vlseg5e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,const float16_t *base,size_t vl)
{
    vlseg5e16_v_f16m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,const float16_t *base,size_t vl)
{
    vlseg5e16_v_f16m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 26);
}

/*
** test0_vlseg5e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,const float16_t *base,size_t vl)
{
    vlseg5e16_v_f16mf2(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,const float16_t *base,size_t vl)
{
    vlseg5e16_v_f16mf2(v0, v1, v2, v3, v4, base, 25);
}

/*
** test0_vlseg5e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,const float16_t *base,size_t vl)
{
    vlseg5e16_v_f16mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,const float16_t *base,size_t vl)
{
    vlseg5e16_v_f16mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 27);
}

/*
** test0_vlseg5e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,const float16_t *base,size_t vl)
{
    vlseg5e16_v_f16mf4(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,const float16_t *base,size_t vl)
{
    vlseg5e16_v_f16mf4(v0, v1, v2, v3, v4, base, 24);
}

/*
** test0_vlseg5e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,const float16_t *base,size_t vl)
{
    vlseg5e16_v_f16mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,const float16_t *base,size_t vl)
{
    vlseg5e16_v_f16mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 23);
}

/*
** test0_vlseg5e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,const int16_t *base,size_t vl)
{
    vlseg5e16_v_i16m1(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,const int16_t *base,size_t vl)
{
    vlseg5e16_v_i16m1(v0, v1, v2, v3, v4, base, 22);
}

/*
** test0_vlseg5e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,const int16_t *base,size_t vl)
{
    vlseg5e16_v_i16m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,const int16_t *base,size_t vl)
{
    vlseg5e16_v_i16m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 23);
}

/*
** test0_vlseg5e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,const int16_t *base,size_t vl)
{
    vlseg5e16_v_i16mf2(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,const int16_t *base,size_t vl)
{
    vlseg5e16_v_i16mf2(v0, v1, v2, v3, v4, base, 30);
}

/*
** test0_vlseg5e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,const int16_t *base,size_t vl)
{
    vlseg5e16_v_i16mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,const int16_t *base,size_t vl)
{
    vlseg5e16_v_i16mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 0);
}

/*
** test0_vlseg5e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,const int16_t *base,size_t vl)
{
    vlseg5e16_v_i16mf4(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,const int16_t *base,size_t vl)
{
    vlseg5e16_v_i16mf4(v0, v1, v2, v3, v4, base, 18);
}

/*
** test0_vlseg5e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,const int16_t *base,size_t vl)
{
    vlseg5e16_v_i16mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,const int16_t *base,size_t vl)
{
    vlseg5e16_v_i16mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 1);
}

/*
** test0_vlseg5e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,const uint16_t *base,size_t vl)
{
    vlseg5e16_v_u16m1(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,const uint16_t *base,size_t vl)
{
    vlseg5e16_v_u16m1(v0, v1, v2, v3, v4, base, 8);
}

/*
** test0_vlseg5e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,const uint16_t *base,size_t vl)
{
    vlseg5e16_v_u16m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,const uint16_t *base,size_t vl)
{
    vlseg5e16_v_u16m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 6);
}

/*
** test0_vlseg5e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,const uint16_t *base,size_t vl)
{
    vlseg5e16_v_u16mf2(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,const uint16_t *base,size_t vl)
{
    vlseg5e16_v_u16mf2(v0, v1, v2, v3, v4, base, 7);
}

/*
** test0_vlseg5e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,const uint16_t *base,size_t vl)
{
    vlseg5e16_v_u16mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,const uint16_t *base,size_t vl)
{
    vlseg5e16_v_u16mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 1);
}

/*
** test0_vlseg5e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,const uint16_t *base,size_t vl)
{
    vlseg5e16_v_u16mf4(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,const uint16_t *base,size_t vl)
{
    vlseg5e16_v_u16mf4(v0, v1, v2, v3, v4, base, 26);
}

/*
** test0_vlseg5e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,const uint16_t *base,size_t vl)
{
    vlseg5e16_v_u16mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,const uint16_t *base,size_t vl)
{
    vlseg5e16_v_u16mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 19);
}

/*
** test0_vlseg5e32ff_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e32ff_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_f32m1(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e32ff_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e32ff_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_f32m1(v0, v1, v2, v3, v4, base, new_vl, 23);
}

/*
** test0_vlseg5e32ff_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e32ff_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_f32m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e32ff_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e32ff_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_f32m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 16);
}

/*
** test0_vlseg5e32ff_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e32ff_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_f32mf2(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e32ff_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e32ff_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_f32mf2(v0, v1, v2, v3, v4, base, new_vl, 29);
}

/*
** test0_vlseg5e32ff_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e32ff_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_f32mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e32ff_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e32ff_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_f32mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 9);
}

/*
** test0_vlseg5e32ff_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e32ff_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_i32m1(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e32ff_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e32ff_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_i32m1(v0, v1, v2, v3, v4, base, new_vl, 9);
}

/*
** test0_vlseg5e32ff_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e32ff_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_i32m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e32ff_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e32ff_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_i32m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 23);
}

/*
** test0_vlseg5e32ff_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e32ff_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_i32mf2(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e32ff_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*25,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e32ff_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_i32mf2(v0, v1, v2, v3, v4, base, new_vl, 25);
}

/*
** test0_vlseg5e32ff_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e32ff_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_i32mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e32ff_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e32ff_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_i32mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 14);
}

/*
** test0_vlseg5e32ff_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e32ff_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_u32m1(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e32ff_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e32ff_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_u32m1(v0, v1, v2, v3, v4, base, new_vl, 2);
}

/*
** test0_vlseg5e32ff_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e32ff_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_u32m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e32ff_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e32ff_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_u32m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 6);
}

/*
** test0_vlseg5e32ff_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e32ff_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_u32mf2(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e32ff_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e32ff_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_u32mf2(v0, v1, v2, v3, v4, base, new_vl, 18);
}

/*
** test0_vlseg5e32ff_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e32ff_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_u32mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e32ff_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e32ff_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e32ff_v_u32mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 14);
}

/*
** test0_vlseg5e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,const float32_t *base,size_t vl)
{
    vlseg5e32_v_f32m1(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,const float32_t *base,size_t vl)
{
    vlseg5e32_v_f32m1(v0, v1, v2, v3, v4, base, 2);
}

/*
** test0_vlseg5e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,const float32_t *base,size_t vl)
{
    vlseg5e32_v_f32m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,const float32_t *base,size_t vl)
{
    vlseg5e32_v_f32m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 10);
}

/*
** test0_vlseg5e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,const float32_t *base,size_t vl)
{
    vlseg5e32_v_f32mf2(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*22,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,const float32_t *base,size_t vl)
{
    vlseg5e32_v_f32mf2(v0, v1, v2, v3, v4, base, 22);
}

/*
** test0_vlseg5e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,const float32_t *base,size_t vl)
{
    vlseg5e32_v_f32mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,const float32_t *base,size_t vl)
{
    vlseg5e32_v_f32mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 4);
}

/*
** test0_vlseg5e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,const int32_t *base,size_t vl)
{
    vlseg5e32_v_i32m1(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,const int32_t *base,size_t vl)
{
    vlseg5e32_v_i32m1(v0, v1, v2, v3, v4, base, 9);
}

/*
** test0_vlseg5e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,const int32_t *base,size_t vl)
{
    vlseg5e32_v_i32m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,const int32_t *base,size_t vl)
{
    vlseg5e32_v_i32m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 30);
}

/*
** test0_vlseg5e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,const int32_t *base,size_t vl)
{
    vlseg5e32_v_i32mf2(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,const int32_t *base,size_t vl)
{
    vlseg5e32_v_i32mf2(v0, v1, v2, v3, v4, base, 13);
}

/*
** test0_vlseg5e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,const int32_t *base,size_t vl)
{
    vlseg5e32_v_i32mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,const int32_t *base,size_t vl)
{
    vlseg5e32_v_i32mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 18);
}

/*
** test0_vlseg5e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,const uint32_t *base,size_t vl)
{
    vlseg5e32_v_u32m1(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,const uint32_t *base,size_t vl)
{
    vlseg5e32_v_u32m1(v0, v1, v2, v3, v4, base, 13);
}

/*
** test0_vlseg5e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,const uint32_t *base,size_t vl)
{
    vlseg5e32_v_u32m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,const uint32_t *base,size_t vl)
{
    vlseg5e32_v_u32m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 20);
}

/*
** test0_vlseg5e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,const uint32_t *base,size_t vl)
{
    vlseg5e32_v_u32mf2(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,const uint32_t *base,size_t vl)
{
    vlseg5e32_v_u32mf2(v0, v1, v2, v3, v4, base, 29);
}

/*
** test0_vlseg5e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,const uint32_t *base,size_t vl)
{
    vlseg5e32_v_u32mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,const uint32_t *base,size_t vl)
{
    vlseg5e32_v_u32mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 8);
}

/*
** test0_vlseg5e64ff_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e64ff_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e64ff_v_f64m1(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e64ff_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*8,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e64ff_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e64ff_v_f64m1(v0, v1, v2, v3, v4, base, new_vl, 8);
}

/*
** test0_vlseg5e64ff_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e64ff_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e64ff_v_f64m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e64ff_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e64ff_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e64ff_v_f64m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 1);
}

/*
** test0_vlseg5e64ff_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e64ff_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e64ff_v_i64m1(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e64ff_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*5,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e64ff_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e64ff_v_i64m1(v0, v1, v2, v3, v4, base, new_vl, 5);
}

/*
** test0_vlseg5e64ff_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e64ff_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e64ff_v_i64m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e64ff_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e64ff_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e64ff_v_i64m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 11);
}

/*
** test0_vlseg5e64ff_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e64ff_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e64ff_v_u64m1(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e64ff_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*14,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e64ff_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e64ff_v_u64m1(v0, v1, v2, v3, v4, base, new_vl, 14);
}

/*
** test0_vlseg5e64ff_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e64ff_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e64ff_v_u64m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e64ff_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e64ff_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e64ff_v_u64m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 1);
}

/*
** test0_vlseg5e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,const float64_t *base,size_t vl)
{
    vlseg5e64_v_f64m1(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,const float64_t *base,size_t vl)
{
    vlseg5e64_v_f64m1(v0, v1, v2, v3, v4, base, 0);
}

/*
** test0_vlseg5e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,const float64_t *base,size_t vl)
{
    vlseg5e64_v_f64m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,const float64_t *base,size_t vl)
{
    vlseg5e64_v_f64m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 27);
}

/*
** test0_vlseg5e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,const int64_t *base,size_t vl)
{
    vlseg5e64_v_i64m1(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*5,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,const int64_t *base,size_t vl)
{
    vlseg5e64_v_i64m1(v0, v1, v2, v3, v4, base, 5);
}

/*
** test0_vlseg5e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,const int64_t *base,size_t vl)
{
    vlseg5e64_v_i64m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,const int64_t *base,size_t vl)
{
    vlseg5e64_v_i64m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 0);
}

/*
** test0_vlseg5e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,const uint64_t *base,size_t vl)
{
    vlseg5e64_v_u64m1(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,const uint64_t *base,size_t vl)
{
    vlseg5e64_v_u64m1(v0, v1, v2, v3, v4, base, 31);
}

/*
** test0_vlseg5e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,const uint64_t *base,size_t vl)
{
    vlseg5e64_v_u64m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,const uint64_t *base,size_t vl)
{
    vlseg5e64_v_u64m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 16);
}

/*
** test0_vlseg5e8ff_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e8ff_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_i8m1(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e8ff_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e8ff_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_i8m1(v0, v1, v2, v3, v4, base, new_vl, 15);
}

/*
** test0_vlseg5e8ff_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e8ff_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_i8m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e8ff_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e8ff_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_i8m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 0);
}

/*
** test0_vlseg5e8ff_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e8ff_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_i8mf2(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e8ff_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*17,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e8ff_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_i8mf2(v0, v1, v2, v3, v4, base, new_vl, 17);
}

/*
** test0_vlseg5e8ff_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e8ff_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_i8mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e8ff_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e8ff_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_i8mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 26);
}

/*
** test0_vlseg5e8ff_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e8ff_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_i8mf4(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e8ff_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e8ff_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_i8mf4(v0, v1, v2, v3, v4, base, new_vl, 19);
}

/*
** test0_vlseg5e8ff_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e8ff_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_i8mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e8ff_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e8ff_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_i8mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 23);
}

/*
** test0_vlseg5e8ff_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e8ff_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_i8mf8(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e8ff_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*8,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e8ff_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_i8mf8(v0, v1, v2, v3, v4, base, new_vl, 8);
}

/*
** test0_vlseg5e8ff_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e8ff_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_i8mf8_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e8ff_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e8ff_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_i8mf8_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 15);
}

/*
** test0_vlseg5e8ff_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e8ff_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_u8m1(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e8ff_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e8ff_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_u8m1(v0, v1, v2, v3, v4, base, new_vl, 16);
}

/*
** test0_vlseg5e8ff_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e8ff_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_u8m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e8ff_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e8ff_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_u8m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 29);
}

/*
** test0_vlseg5e8ff_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e8ff_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_u8mf2(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e8ff_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e8ff_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_u8mf2(v0, v1, v2, v3, v4, base, new_vl, 19);
}

/*
** test0_vlseg5e8ff_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e8ff_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_u8mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e8ff_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e8ff_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_u8mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 15);
}

/*
** test0_vlseg5e8ff_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e8ff_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_u8mf4(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e8ff_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e8ff_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_u8mf4(v0, v1, v2, v3, v4, base, new_vl, 24);
}

/*
** test0_vlseg5e8ff_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e8ff_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_u8mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e8ff_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e8ff_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_u8mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 20);
}

/*
** test0_vlseg5e8ff_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e8ff_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_u8mf8(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/*
** test1_vlseg5e8ff_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e8ff_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_u8mf8(v0, v1, v2, v3, v4, base, new_vl, 25);
}

/*
** test0_vlseg5e8ff_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e8ff_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_u8mf8_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, vl);
}

/*
** test1_vlseg5e8ff_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e8ff_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e8ff_v_u8mf8_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, new_vl, 24);
}

/*
** test0_vlseg5e8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,const int8_t *base,size_t vl)
{
    vlseg5e8_v_i8m1(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e8_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*8,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,const int8_t *base,size_t vl)
{
    vlseg5e8_v_i8m1(v0, v1, v2, v3, v4, base, 8);
}

/*
** test0_vlseg5e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,const int8_t *base,size_t vl)
{
    vlseg5e8_v_i8m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,const int8_t *base,size_t vl)
{
    vlseg5e8_v_i8m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 6);
}

/*
** test0_vlseg5e8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e8_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,const int8_t *base,size_t vl)
{
    vlseg5e8_v_i8mf2(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e8_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*5,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e8_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,const int8_t *base,size_t vl)
{
    vlseg5e8_v_i8mf2(v0, v1, v2, v3, v4, base, 5);
}

/*
** test0_vlseg5e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,const int8_t *base,size_t vl)
{
    vlseg5e8_v_i8mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,const int8_t *base,size_t vl)
{
    vlseg5e8_v_i8mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 10);
}

/*
** test0_vlseg5e8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e8_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,const int8_t *base,size_t vl)
{
    vlseg5e8_v_i8mf4(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e8_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e8_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,const int8_t *base,size_t vl)
{
    vlseg5e8_v_i8mf4(v0, v1, v2, v3, v4, base, 22);
}

/*
** test0_vlseg5e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,const int8_t *base,size_t vl)
{
    vlseg5e8_v_i8mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,const int8_t *base,size_t vl)
{
    vlseg5e8_v_i8mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 17);
}

/*
** test0_vlseg5e8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e8_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,const int8_t *base,size_t vl)
{
    vlseg5e8_v_i8mf8(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e8_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e8_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,const int8_t *base,size_t vl)
{
    vlseg5e8_v_i8mf8(v0, v1, v2, v3, v4, base, 20);
}

/*
** test0_vlseg5e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,const int8_t *base,size_t vl)
{
    vlseg5e8_v_i8mf8_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,const int8_t *base,size_t vl)
{
    vlseg5e8_v_i8mf8_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 1);
}

/*
** test0_vlseg5e8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e8_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,const uint8_t *base,size_t vl)
{
    vlseg5e8_v_u8m1(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e8_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e8_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,const uint8_t *base,size_t vl)
{
    vlseg5e8_v_u8m1(v0, v1, v2, v3, v4, base, 15);
}

/*
** test0_vlseg5e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,const uint8_t *base,size_t vl)
{
    vlseg5e8_v_u8m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,const uint8_t *base,size_t vl)
{
    vlseg5e8_v_u8m1_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 8);
}

/*
** test0_vlseg5e8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e8_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,const uint8_t *base,size_t vl)
{
    vlseg5e8_v_u8mf2(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e8_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e8_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,const uint8_t *base,size_t vl)
{
    vlseg5e8_v_u8mf2(v0, v1, v2, v3, v4, base, 12);
}

/*
** test0_vlseg5e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,const uint8_t *base,size_t vl)
{
    vlseg5e8_v_u8mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,const uint8_t *base,size_t vl)
{
    vlseg5e8_v_u8mf2_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 14);
}

/*
** test0_vlseg5e8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e8_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,const uint8_t *base,size_t vl)
{
    vlseg5e8_v_u8mf4(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e8_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e8_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,const uint8_t *base,size_t vl)
{
    vlseg5e8_v_u8mf4(v0, v1, v2, v3, v4, base, 0);
}

/*
** test0_vlseg5e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,const uint8_t *base,size_t vl)
{
    vlseg5e8_v_u8mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,const uint8_t *base,size_t vl)
{
    vlseg5e8_v_u8mf4_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 15);
}

/*
** test0_vlseg5e8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg5e8_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,const uint8_t *base,size_t vl)
{
    vlseg5e8_v_u8mf8(v0, v1, v2, v3, v4, base, vl);
}

/*
** test1_vlseg5e8_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg5e8_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,const uint8_t *base,size_t vl)
{
    vlseg5e8_v_u8mf8(v0, v1, v2, v3, v4, base, 22);
}

/*
** test0_vlseg5e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg5e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,const uint8_t *base,size_t vl)
{
    vlseg5e8_v_u8mf8_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, vl);
}

/*
** test1_vlseg5e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg5e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,const uint8_t *base,size_t vl)
{
    vlseg5e8_v_u8mf8_m(v0, v1, v2, v3, v4, mask, merge0, merge1, merge2, merge3, merge4, base, 7);
}

/*
** test0_vlseg6e16ff_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_f16m1(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_f16m1(v0, v1, v2, v3, v4, v5, base, new_vl, 0);
}

/*
** test0_vlseg6e16ff_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_f16m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_f16m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 29);
}

/*
** test0_vlseg6e16ff_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_f16mf2(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_f16mf2(v0, v1, v2, v3, v4, v5, base, new_vl, 26);
}

/*
** test0_vlseg6e16ff_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_f16mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_f16mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 27);
}

/*
** test0_vlseg6e16ff_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_f16mf4(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_f16mf4(v0, v1, v2, v3, v4, v5, base, new_vl, 20);
}

/*
** test0_vlseg6e16ff_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_f16mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_f16mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 28);
}

/*
** test0_vlseg6e16ff_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_i16m1(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_i16m1(v0, v1, v2, v3, v4, v5, base, new_vl, 23);
}

/*
** test0_vlseg6e16ff_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_i16m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_i16m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 12);
}

/*
** test0_vlseg6e16ff_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_i16mf2(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_i16mf2(v0, v1, v2, v3, v4, v5, base, new_vl, 23);
}

/*
** test0_vlseg6e16ff_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_i16mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_i16mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 29);
}

/*
** test0_vlseg6e16ff_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_i16mf4(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_i16mf4(v0, v1, v2, v3, v4, v5, base, new_vl, 7);
}

/*
** test0_vlseg6e16ff_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_i16mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_i16mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 2);
}

/*
** test0_vlseg6e16ff_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_u16m1(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_u16m1(v0, v1, v2, v3, v4, v5, base, new_vl, 4);
}

/*
** test0_vlseg6e16ff_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_u16m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_u16m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 25);
}

/*
** test0_vlseg6e16ff_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_u16mf2(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_u16mf2(v0, v1, v2, v3, v4, v5, base, new_vl, 7);
}

/*
** test0_vlseg6e16ff_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_u16mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_u16mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 0);
}

/*
** test0_vlseg6e16ff_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_u16mf4(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_u16mf4(v0, v1, v2, v3, v4, v5, base, new_vl, 16);
}

/*
** test0_vlseg6e16ff_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16ff_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_u16mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e16ff_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16ff_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e16ff_v_u16mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 7);
}

/*
** test0_vlseg6e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,const float16_t *base,size_t vl)
{
    vlseg6e16_v_f16m1(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,const float16_t *base,size_t vl)
{
    vlseg6e16_v_f16m1(v0, v1, v2, v3, v4, v5, base, 31);
}

/*
** test0_vlseg6e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,const float16_t *base,size_t vl)
{
    vlseg6e16_v_f16m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,const float16_t *base,size_t vl)
{
    vlseg6e16_v_f16m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 22);
}

/*
** test0_vlseg6e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,const float16_t *base,size_t vl)
{
    vlseg6e16_v_f16mf2(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,const float16_t *base,size_t vl)
{
    vlseg6e16_v_f16mf2(v0, v1, v2, v3, v4, v5, base, 10);
}

/*
** test0_vlseg6e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,const float16_t *base,size_t vl)
{
    vlseg6e16_v_f16mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,const float16_t *base,size_t vl)
{
    vlseg6e16_v_f16mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 2);
}

/*
** test0_vlseg6e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,const float16_t *base,size_t vl)
{
    vlseg6e16_v_f16mf4(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,const float16_t *base,size_t vl)
{
    vlseg6e16_v_f16mf4(v0, v1, v2, v3, v4, v5, base, 4);
}

/*
** test0_vlseg6e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,const float16_t *base,size_t vl)
{
    vlseg6e16_v_f16mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,const float16_t *base,size_t vl)
{
    vlseg6e16_v_f16mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 21);
}

/*
** test0_vlseg6e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,const int16_t *base,size_t vl)
{
    vlseg6e16_v_i16m1(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,const int16_t *base,size_t vl)
{
    vlseg6e16_v_i16m1(v0, v1, v2, v3, v4, v5, base, 10);
}

/*
** test0_vlseg6e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,const int16_t *base,size_t vl)
{
    vlseg6e16_v_i16m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,const int16_t *base,size_t vl)
{
    vlseg6e16_v_i16m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 19);
}

/*
** test0_vlseg6e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,const int16_t *base,size_t vl)
{
    vlseg6e16_v_i16mf2(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,const int16_t *base,size_t vl)
{
    vlseg6e16_v_i16mf2(v0, v1, v2, v3, v4, v5, base, 27);
}

/*
** test0_vlseg6e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,const int16_t *base,size_t vl)
{
    vlseg6e16_v_i16mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,const int16_t *base,size_t vl)
{
    vlseg6e16_v_i16mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 17);
}

/*
** test0_vlseg6e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,const int16_t *base,size_t vl)
{
    vlseg6e16_v_i16mf4(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,const int16_t *base,size_t vl)
{
    vlseg6e16_v_i16mf4(v0, v1, v2, v3, v4, v5, base, 1);
}

/*
** test0_vlseg6e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,const int16_t *base,size_t vl)
{
    vlseg6e16_v_i16mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,const int16_t *base,size_t vl)
{
    vlseg6e16_v_i16mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 28);
}

/*
** test0_vlseg6e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,const uint16_t *base,size_t vl)
{
    vlseg6e16_v_u16m1(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,const uint16_t *base,size_t vl)
{
    vlseg6e16_v_u16m1(v0, v1, v2, v3, v4, v5, base, 7);
}

/*
** test0_vlseg6e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,const uint16_t *base,size_t vl)
{
    vlseg6e16_v_u16m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,const uint16_t *base,size_t vl)
{
    vlseg6e16_v_u16m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 11);
}

/*
** test0_vlseg6e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,const uint16_t *base,size_t vl)
{
    vlseg6e16_v_u16mf2(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,const uint16_t *base,size_t vl)
{
    vlseg6e16_v_u16mf2(v0, v1, v2, v3, v4, v5, base, 25);
}

/*
** test0_vlseg6e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,const uint16_t *base,size_t vl)
{
    vlseg6e16_v_u16mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,const uint16_t *base,size_t vl)
{
    vlseg6e16_v_u16mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 3);
}

/*
** test0_vlseg6e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,const uint16_t *base,size_t vl)
{
    vlseg6e16_v_u16mf4(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*4,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,const uint16_t *base,size_t vl)
{
    vlseg6e16_v_u16mf4(v0, v1, v2, v3, v4, v5, base, 4);
}

/*
** test0_vlseg6e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,const uint16_t *base,size_t vl)
{
    vlseg6e16_v_u16mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,const uint16_t *base,size_t vl)
{
    vlseg6e16_v_u16mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 1);
}

/*
** test0_vlseg6e32ff_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e32ff_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_f32m1(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e32ff_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*24,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e32ff_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_f32m1(v0, v1, v2, v3, v4, v5, base, new_vl, 24);
}

/*
** test0_vlseg6e32ff_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e32ff_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_f32m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e32ff_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e32ff_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_f32m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 23);
}

/*
** test0_vlseg6e32ff_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e32ff_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_f32mf2(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e32ff_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e32ff_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_f32mf2(v0, v1, v2, v3, v4, v5, base, new_vl, 31);
}

/*
** test0_vlseg6e32ff_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e32ff_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_f32mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e32ff_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e32ff_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_f32mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 17);
}

/*
** test0_vlseg6e32ff_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e32ff_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_i32m1(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e32ff_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*19,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e32ff_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_i32m1(v0, v1, v2, v3, v4, v5, base, new_vl, 19);
}

/*
** test0_vlseg6e32ff_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e32ff_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_i32m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e32ff_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e32ff_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_i32m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 2);
}

/*
** test0_vlseg6e32ff_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e32ff_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_i32mf2(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e32ff_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e32ff_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_i32mf2(v0, v1, v2, v3, v4, v5, base, new_vl, 13);
}

/*
** test0_vlseg6e32ff_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e32ff_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_i32mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e32ff_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e32ff_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_i32mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 22);
}

/*
** test0_vlseg6e32ff_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e32ff_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_u32m1(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e32ff_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e32ff_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_u32m1(v0, v1, v2, v3, v4, v5, base, new_vl, 5);
}

/*
** test0_vlseg6e32ff_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e32ff_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_u32m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e32ff_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e32ff_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_u32m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 31);
}

/*
** test0_vlseg6e32ff_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e32ff_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_u32mf2(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e32ff_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e32ff_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_u32mf2(v0, v1, v2, v3, v4, v5, base, new_vl, 23);
}

/*
** test0_vlseg6e32ff_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e32ff_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_u32mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e32ff_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e32ff_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_u32mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 1);
}

/*
** test0_vlseg6e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,const float32_t *base,size_t vl)
{
    vlseg6e32_v_f32m1(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,const float32_t *base,size_t vl)
{
    vlseg6e32_v_f32m1(v0, v1, v2, v3, v4, v5, base, 9);
}

/*
** test0_vlseg6e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,const float32_t *base,size_t vl)
{
    vlseg6e32_v_f32m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,const float32_t *base,size_t vl)
{
    vlseg6e32_v_f32m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 21);
}

/*
** test0_vlseg6e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,const float32_t *base,size_t vl)
{
    vlseg6e32_v_f32mf2(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,const float32_t *base,size_t vl)
{
    vlseg6e32_v_f32mf2(v0, v1, v2, v3, v4, v5, base, 18);
}

/*
** test0_vlseg6e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,const float32_t *base,size_t vl)
{
    vlseg6e32_v_f32mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,const float32_t *base,size_t vl)
{
    vlseg6e32_v_f32mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 13);
}

/*
** test0_vlseg6e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,const int32_t *base,size_t vl)
{
    vlseg6e32_v_i32m1(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,const int32_t *base,size_t vl)
{
    vlseg6e32_v_i32m1(v0, v1, v2, v3, v4, v5, base, 6);
}

/*
** test0_vlseg6e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,const int32_t *base,size_t vl)
{
    vlseg6e32_v_i32m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,const int32_t *base,size_t vl)
{
    vlseg6e32_v_i32m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 12);
}

/*
** test0_vlseg6e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,const int32_t *base,size_t vl)
{
    vlseg6e32_v_i32mf2(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,const int32_t *base,size_t vl)
{
    vlseg6e32_v_i32mf2(v0, v1, v2, v3, v4, v5, base, 6);
}

/*
** test0_vlseg6e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,const int32_t *base,size_t vl)
{
    vlseg6e32_v_i32mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,const int32_t *base,size_t vl)
{
    vlseg6e32_v_i32mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 31);
}

/*
** test0_vlseg6e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,const uint32_t *base,size_t vl)
{
    vlseg6e32_v_u32m1(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,const uint32_t *base,size_t vl)
{
    vlseg6e32_v_u32m1(v0, v1, v2, v3, v4, v5, base, 29);
}

/*
** test0_vlseg6e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,const uint32_t *base,size_t vl)
{
    vlseg6e32_v_u32m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,const uint32_t *base,size_t vl)
{
    vlseg6e32_v_u32m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 15);
}

/*
** test0_vlseg6e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,const uint32_t *base,size_t vl)
{
    vlseg6e32_v_u32mf2(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,const uint32_t *base,size_t vl)
{
    vlseg6e32_v_u32mf2(v0, v1, v2, v3, v4, v5, base, 18);
}

/*
** test0_vlseg6e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,const uint32_t *base,size_t vl)
{
    vlseg6e32_v_u32mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,const uint32_t *base,size_t vl)
{
    vlseg6e32_v_u32mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 26);
}

/*
** test0_vlseg6e64ff_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e64ff_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e64ff_v_f64m1(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e64ff_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*5,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e64ff_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e64ff_v_f64m1(v0, v1, v2, v3, v4, v5, base, new_vl, 5);
}

/*
** test0_vlseg6e64ff_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e64ff_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e64ff_v_f64m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e64ff_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e64ff_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e64ff_v_f64m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 5);
}

/*
** test0_vlseg6e64ff_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e64ff_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e64ff_v_i64m1(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e64ff_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*3,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e64ff_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e64ff_v_i64m1(v0, v1, v2, v3, v4, v5, base, new_vl, 3);
}

/*
** test0_vlseg6e64ff_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e64ff_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e64ff_v_i64m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e64ff_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e64ff_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e64ff_v_i64m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 13);
}

/*
** test0_vlseg6e64ff_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e64ff_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e64ff_v_u64m1(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e64ff_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*5,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e64ff_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e64ff_v_u64m1(v0, v1, v2, v3, v4, v5, base, new_vl, 5);
}

/*
** test0_vlseg6e64ff_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e64ff_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e64ff_v_u64m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e64ff_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e64ff_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e64ff_v_u64m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 9);
}

/*
** test0_vlseg6e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,const float64_t *base,size_t vl)
{
    vlseg6e64_v_f64m1(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*26,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,const float64_t *base,size_t vl)
{
    vlseg6e64_v_f64m1(v0, v1, v2, v3, v4, v5, base, 26);
}

/*
** test0_vlseg6e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,const float64_t *base,size_t vl)
{
    vlseg6e64_v_f64m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,const float64_t *base,size_t vl)
{
    vlseg6e64_v_f64m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 4);
}

/*
** test0_vlseg6e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,const int64_t *base,size_t vl)
{
    vlseg6e64_v_i64m1(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*9,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,const int64_t *base,size_t vl)
{
    vlseg6e64_v_i64m1(v0, v1, v2, v3, v4, v5, base, 9);
}

/*
** test0_vlseg6e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,const int64_t *base,size_t vl)
{
    vlseg6e64_v_i64m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,const int64_t *base,size_t vl)
{
    vlseg6e64_v_i64m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 18);
}

/*
** test0_vlseg6e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,const uint64_t *base,size_t vl)
{
    vlseg6e64_v_u64m1(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*26,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,const uint64_t *base,size_t vl)
{
    vlseg6e64_v_u64m1(v0, v1, v2, v3, v4, v5, base, 26);
}

/*
** test0_vlseg6e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,const uint64_t *base,size_t vl)
{
    vlseg6e64_v_u64m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,const uint64_t *base,size_t vl)
{
    vlseg6e64_v_u64m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 24);
}

/*
** test0_vlseg6e8ff_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e8ff_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8m1(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e8ff_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e8ff_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8m1(v0, v1, v2, v3, v4, v5, base, new_vl, 2);
}

/*
** test0_vlseg6e8ff_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e8ff_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e8ff_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e8ff_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 1);
}

/*
** test0_vlseg6e8ff_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e8ff_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8mf2(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e8ff_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e8ff_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8mf2(v0, v1, v2, v3, v4, v5, base, new_vl, 30);
}

/*
** test0_vlseg6e8ff_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e8ff_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e8ff_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e8ff_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 29);
}

/*
** test0_vlseg6e8ff_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e8ff_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8mf4(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e8ff_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*10,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e8ff_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8mf4(v0, v1, v2, v3, v4, v5, base, new_vl, 10);
}

/*
** test0_vlseg6e8ff_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e8ff_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e8ff_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e8ff_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 0);
}

/*
** test0_vlseg6e8ff_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e8ff_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8mf8(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e8ff_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e8ff_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8mf8(v0, v1, v2, v3, v4, v5, base, new_vl, 20);
}

/*
** test0_vlseg6e8ff_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e8ff_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8mf8_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e8ff_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e8ff_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8mf8_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 30);
}

/*
** test0_vlseg6e8ff_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e8ff_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_u8m1(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e8ff_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*21,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e8ff_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_u8m1(v0, v1, v2, v3, v4, v5, base, new_vl, 21);
}

/*
** test0_vlseg6e8ff_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e8ff_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_u8m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e8ff_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e8ff_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_u8m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 24);
}

/*
** test0_vlseg6e8ff_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e8ff_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_u8mf2(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e8ff_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e8ff_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_u8mf2(v0, v1, v2, v3, v4, v5, base, new_vl, 15);
}

/*
** test0_vlseg6e8ff_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e8ff_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_u8mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e8ff_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e8ff_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_u8mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 19);
}

/*
** test0_vlseg6e8ff_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e8ff_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_u8mf4(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e8ff_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*5,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e8ff_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_u8mf4(v0, v1, v2, v3, v4, v5, base, new_vl, 5);
}

/*
** test0_vlseg6e8ff_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e8ff_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_u8mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e8ff_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e8ff_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_u8mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 16);
}

/*
** test0_vlseg6e8ff_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e8ff_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_u8mf8(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/*
** test1_vlseg6e8ff_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*28,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e8ff_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_u8mf8(v0, v1, v2, v3, v4, v5, base, new_vl, 28);
}

/*
** test0_vlseg6e8ff_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e8ff_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_u8mf8_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, vl);
}

/*
** test1_vlseg6e8ff_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e8ff_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_u8mf8_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, new_vl, 28);
}

/*
** test0_vlseg6e8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8m1(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e8_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8m1(v0, v1, v2, v3, v4, v5, base, 7);
}

/*
** test0_vlseg6e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 29);
}

/*
** test0_vlseg6e8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e8_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8mf2(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e8_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*9,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e8_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8mf2(v0, v1, v2, v3, v4, v5, base, 9);
}

/*
** test0_vlseg6e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 29);
}

/*
** test0_vlseg6e8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e8_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8mf4(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e8_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*20,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e8_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8mf4(v0, v1, v2, v3, v4, v5, base, 20);
}

/*
** test0_vlseg6e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 31);
}

/*
** test0_vlseg6e8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e8_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8mf8(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e8_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e8_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8mf8(v0, v1, v2, v3, v4, v5, base, 26);
}

/*
** test0_vlseg6e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8mf8_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8mf8_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 31);
}

/*
** test0_vlseg6e8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e8_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,const uint8_t *base,size_t vl)
{
    vlseg6e8_v_u8m1(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e8_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e8_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,const uint8_t *base,size_t vl)
{
    vlseg6e8_v_u8m1(v0, v1, v2, v3, v4, v5, base, 11);
}

/*
** test0_vlseg6e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,const uint8_t *base,size_t vl)
{
    vlseg6e8_v_u8m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,const uint8_t *base,size_t vl)
{
    vlseg6e8_v_u8m1_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 1);
}

/*
** test0_vlseg6e8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e8_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,const uint8_t *base,size_t vl)
{
    vlseg6e8_v_u8mf2(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e8_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*4,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e8_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,const uint8_t *base,size_t vl)
{
    vlseg6e8_v_u8mf2(v0, v1, v2, v3, v4, v5, base, 4);
}

/*
** test0_vlseg6e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,const uint8_t *base,size_t vl)
{
    vlseg6e8_v_u8mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,const uint8_t *base,size_t vl)
{
    vlseg6e8_v_u8mf2_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 26);
}

/*
** test0_vlseg6e8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e8_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,const uint8_t *base,size_t vl)
{
    vlseg6e8_v_u8mf4(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e8_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e8_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,const uint8_t *base,size_t vl)
{
    vlseg6e8_v_u8mf4(v0, v1, v2, v3, v4, v5, base, 22);
}

/*
** test0_vlseg6e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,const uint8_t *base,size_t vl)
{
    vlseg6e8_v_u8mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,const uint8_t *base,size_t vl)
{
    vlseg6e8_v_u8mf4_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 22);
}

/*
** test0_vlseg6e8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg6e8_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,const uint8_t *base,size_t vl)
{
    vlseg6e8_v_u8mf8(v0, v1, v2, v3, v4, v5, base, vl);
}

/*
** test1_vlseg6e8_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*29,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg6e8_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,const uint8_t *base,size_t vl)
{
    vlseg6e8_v_u8mf8(v0, v1, v2, v3, v4, v5, base, 29);
}

/*
** test0_vlseg6e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg6e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,const uint8_t *base,size_t vl)
{
    vlseg6e8_v_u8mf8_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, vl);
}

/*
** test1_vlseg6e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg6e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,const uint8_t *base,size_t vl)
{
    vlseg6e8_v_u8mf8_m(v0, v1, v2, v3, v4, v5, mask, merge0, merge1, merge2, merge3, merge4, merge5, base, 1);
}

/*
** test0_vlseg7e16ff_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_f16m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_f16m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 3);
}

/*
** test0_vlseg7e16ff_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,vfloat16m1_t merge6,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_f16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,vfloat16m1_t merge6,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_f16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 28);
}

/*
** test0_vlseg7e16ff_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_f16mf2(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_f16mf2(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 19);
}

/*
** test0_vlseg7e16ff_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,vfloat16mf2_t merge6,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_f16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,vfloat16mf2_t merge6,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_f16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 11);
}

/*
** test0_vlseg7e16ff_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_f16mf4(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_f16mf4(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 26);
}

/*
** test0_vlseg7e16ff_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,vfloat16mf4_t merge6,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_f16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,vfloat16mf4_t merge6,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_f16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 3);
}

/*
** test0_vlseg7e16ff_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_i16m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*27,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_i16m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 27);
}

/*
** test0_vlseg7e16ff_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,vint16m1_t merge6,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_i16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,vint16m1_t merge6,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_i16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 15);
}

/*
** test0_vlseg7e16ff_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_i16mf2(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_i16mf2(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 21);
}

/*
** test0_vlseg7e16ff_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,vint16mf2_t merge6,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_i16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,vint16mf2_t merge6,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_i16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 9);
}

/*
** test0_vlseg7e16ff_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_i16mf4(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*19,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_i16mf4(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 19);
}

/*
** test0_vlseg7e16ff_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,vint16mf4_t merge6,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_i16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,vint16mf4_t merge6,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_i16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 14);
}

/*
** test0_vlseg7e16ff_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_u16m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_u16m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 26);
}

/*
** test0_vlseg7e16ff_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,vuint16m1_t merge6,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_u16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,vuint16m1_t merge6,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_u16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 16);
}

/*
** test0_vlseg7e16ff_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_u16mf2(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_u16mf2(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 12);
}

/*
** test0_vlseg7e16ff_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,vuint16mf2_t merge6,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_u16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,vuint16mf2_t merge6,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_u16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 24);
}

/*
** test0_vlseg7e16ff_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_u16mf4(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*16,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_u16mf4(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 16);
}

/*
** test0_vlseg7e16ff_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16ff_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,vuint16mf4_t merge6,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_u16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e16ff_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16ff_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,vuint16mf4_t merge6,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e16ff_v_u16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 25);
}

/*
** test0_vlseg7e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,const float16_t *base,size_t vl)
{
    vlseg7e16_v_f16m1(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,const float16_t *base,size_t vl)
{
    vlseg7e16_v_f16m1(v0, v1, v2, v3, v4, v5, v6, base, 31);
}

/*
** test0_vlseg7e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,vfloat16m1_t merge6,const float16_t *base,size_t vl)
{
    vlseg7e16_v_f16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,vfloat16m1_t merge6,const float16_t *base,size_t vl)
{
    vlseg7e16_v_f16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 21);
}

/*
** test0_vlseg7e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,const float16_t *base,size_t vl)
{
    vlseg7e16_v_f16mf2(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,const float16_t *base,size_t vl)
{
    vlseg7e16_v_f16mf2(v0, v1, v2, v3, v4, v5, v6, base, 15);
}

/*
** test0_vlseg7e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,vfloat16mf2_t merge6,const float16_t *base,size_t vl)
{
    vlseg7e16_v_f16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,vfloat16mf2_t merge6,const float16_t *base,size_t vl)
{
    vlseg7e16_v_f16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 26);
}

/*
** test0_vlseg7e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,const float16_t *base,size_t vl)
{
    vlseg7e16_v_f16mf4(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,const float16_t *base,size_t vl)
{
    vlseg7e16_v_f16mf4(v0, v1, v2, v3, v4, v5, v6, base, 11);
}

/*
** test0_vlseg7e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,vfloat16mf4_t merge6,const float16_t *base,size_t vl)
{
    vlseg7e16_v_f16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,vfloat16mf4_t merge6,const float16_t *base,size_t vl)
{
    vlseg7e16_v_f16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 10);
}

/*
** test0_vlseg7e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,const int16_t *base,size_t vl)
{
    vlseg7e16_v_i16m1(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,const int16_t *base,size_t vl)
{
    vlseg7e16_v_i16m1(v0, v1, v2, v3, v4, v5, v6, base, 0);
}

/*
** test0_vlseg7e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,vint16m1_t merge6,const int16_t *base,size_t vl)
{
    vlseg7e16_v_i16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,vint16m1_t merge6,const int16_t *base,size_t vl)
{
    vlseg7e16_v_i16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 12);
}

/*
** test0_vlseg7e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,const int16_t *base,size_t vl)
{
    vlseg7e16_v_i16mf2(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,const int16_t *base,size_t vl)
{
    vlseg7e16_v_i16mf2(v0, v1, v2, v3, v4, v5, v6, base, 17);
}

/*
** test0_vlseg7e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,vint16mf2_t merge6,const int16_t *base,size_t vl)
{
    vlseg7e16_v_i16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,vint16mf2_t merge6,const int16_t *base,size_t vl)
{
    vlseg7e16_v_i16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 6);
}

/*
** test0_vlseg7e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,const int16_t *base,size_t vl)
{
    vlseg7e16_v_i16mf4(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*12,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,const int16_t *base,size_t vl)
{
    vlseg7e16_v_i16mf4(v0, v1, v2, v3, v4, v5, v6, base, 12);
}

/*
** test0_vlseg7e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,vint16mf4_t merge6,const int16_t *base,size_t vl)
{
    vlseg7e16_v_i16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,vint16mf4_t merge6,const int16_t *base,size_t vl)
{
    vlseg7e16_v_i16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 3);
}

/*
** test0_vlseg7e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,const uint16_t *base,size_t vl)
{
    vlseg7e16_v_u16m1(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,const uint16_t *base,size_t vl)
{
    vlseg7e16_v_u16m1(v0, v1, v2, v3, v4, v5, v6, base, 24);
}

/*
** test0_vlseg7e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,vuint16m1_t merge6,const uint16_t *base,size_t vl)
{
    vlseg7e16_v_u16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*17,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,vuint16m1_t merge6,const uint16_t *base,size_t vl)
{
    vlseg7e16_v_u16m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 17);
}

/*
** test0_vlseg7e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,const uint16_t *base,size_t vl)
{
    vlseg7e16_v_u16mf2(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*6,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,const uint16_t *base,size_t vl)
{
    vlseg7e16_v_u16mf2(v0, v1, v2, v3, v4, v5, v6, base, 6);
}

/*
** test0_vlseg7e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,vuint16mf2_t merge6,const uint16_t *base,size_t vl)
{
    vlseg7e16_v_u16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,vuint16mf2_t merge6,const uint16_t *base,size_t vl)
{
    vlseg7e16_v_u16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 20);
}

/*
** test0_vlseg7e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,const uint16_t *base,size_t vl)
{
    vlseg7e16_v_u16mf4(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*9,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,const uint16_t *base,size_t vl)
{
    vlseg7e16_v_u16mf4(v0, v1, v2, v3, v4, v5, v6, base, 9);
}

/*
** test0_vlseg7e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,vuint16mf4_t merge6,const uint16_t *base,size_t vl)
{
    vlseg7e16_v_u16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,vuint16mf4_t merge6,const uint16_t *base,size_t vl)
{
    vlseg7e16_v_u16mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 8);
}

/*
** test0_vlseg7e32ff_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e32ff_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_f32m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e32ff_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e32ff_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_f32m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 16);
}

/*
** test0_vlseg7e32ff_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e32ff_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,vfloat32m1_t merge6,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_f32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e32ff_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e32ff_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,vfloat32m1_t merge6,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_f32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 18);
}

/*
** test0_vlseg7e32ff_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e32ff_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_f32mf2(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e32ff_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e32ff_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_f32mf2(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 13);
}

/*
** test0_vlseg7e32ff_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e32ff_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,vfloat32mf2_t merge6,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_f32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e32ff_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e32ff_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,vfloat32mf2_t merge6,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_f32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 4);
}

/*
** test0_vlseg7e32ff_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e32ff_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_i32m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e32ff_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*16,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e32ff_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_i32m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 16);
}

/*
** test0_vlseg7e32ff_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e32ff_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,vint32m1_t merge6,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_i32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e32ff_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e32ff_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,vint32m1_t merge6,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_i32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 26);
}

/*
** test0_vlseg7e32ff_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e32ff_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_i32mf2(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e32ff_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e32ff_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_i32mf2(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 13);
}

/*
** test0_vlseg7e32ff_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e32ff_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,vint32mf2_t merge6,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_i32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e32ff_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e32ff_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,vint32mf2_t merge6,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_i32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 3);
}

/*
** test0_vlseg7e32ff_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e32ff_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_u32m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e32ff_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*22,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e32ff_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_u32m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 22);
}

/*
** test0_vlseg7e32ff_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e32ff_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,vuint32m1_t merge6,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_u32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e32ff_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e32ff_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,vuint32m1_t merge6,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_u32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 20);
}

/*
** test0_vlseg7e32ff_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e32ff_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_u32mf2(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e32ff_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*21,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e32ff_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_u32mf2(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 21);
}

/*
** test0_vlseg7e32ff_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e32ff_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,vuint32mf2_t merge6,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_u32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e32ff_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*9,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e32ff_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,vuint32mf2_t merge6,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_u32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 9);
}

/*
** test0_vlseg7e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,const float32_t *base,size_t vl)
{
    vlseg7e32_v_f32m1(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*7,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,const float32_t *base,size_t vl)
{
    vlseg7e32_v_f32m1(v0, v1, v2, v3, v4, v5, v6, base, 7);
}

/*
** test0_vlseg7e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,vfloat32m1_t merge6,const float32_t *base,size_t vl)
{
    vlseg7e32_v_f32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,vfloat32m1_t merge6,const float32_t *base,size_t vl)
{
    vlseg7e32_v_f32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 0);
}

/*
** test0_vlseg7e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,const float32_t *base,size_t vl)
{
    vlseg7e32_v_f32mf2(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*24,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,const float32_t *base,size_t vl)
{
    vlseg7e32_v_f32mf2(v0, v1, v2, v3, v4, v5, v6, base, 24);
}

/*
** test0_vlseg7e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,vfloat32mf2_t merge6,const float32_t *base,size_t vl)
{
    vlseg7e32_v_f32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,vfloat32mf2_t merge6,const float32_t *base,size_t vl)
{
    vlseg7e32_v_f32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 29);
}

/*
** test0_vlseg7e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,const int32_t *base,size_t vl)
{
    vlseg7e32_v_i32m1(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,const int32_t *base,size_t vl)
{
    vlseg7e32_v_i32m1(v0, v1, v2, v3, v4, v5, v6, base, 20);
}

/*
** test0_vlseg7e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,vint32m1_t merge6,const int32_t *base,size_t vl)
{
    vlseg7e32_v_i32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,vint32m1_t merge6,const int32_t *base,size_t vl)
{
    vlseg7e32_v_i32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 12);
}

/*
** test0_vlseg7e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,const int32_t *base,size_t vl)
{
    vlseg7e32_v_i32mf2(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,const int32_t *base,size_t vl)
{
    vlseg7e32_v_i32mf2(v0, v1, v2, v3, v4, v5, v6, base, 20);
}

/*
** test0_vlseg7e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,vint32mf2_t merge6,const int32_t *base,size_t vl)
{
    vlseg7e32_v_i32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,vint32mf2_t merge6,const int32_t *base,size_t vl)
{
    vlseg7e32_v_i32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 31);
}

/*
** test0_vlseg7e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,const uint32_t *base,size_t vl)
{
    vlseg7e32_v_u32m1(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,const uint32_t *base,size_t vl)
{
    vlseg7e32_v_u32m1(v0, v1, v2, v3, v4, v5, v6, base, 23);
}

/*
** test0_vlseg7e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,vuint32m1_t merge6,const uint32_t *base,size_t vl)
{
    vlseg7e32_v_u32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,vuint32m1_t merge6,const uint32_t *base,size_t vl)
{
    vlseg7e32_v_u32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 11);
}

/*
** test0_vlseg7e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,const uint32_t *base,size_t vl)
{
    vlseg7e32_v_u32mf2(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*15,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,const uint32_t *base,size_t vl)
{
    vlseg7e32_v_u32mf2(v0, v1, v2, v3, v4, v5, v6, base, 15);
}

/*
** test0_vlseg7e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,vuint32mf2_t merge6,const uint32_t *base,size_t vl)
{
    vlseg7e32_v_u32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,vuint32mf2_t merge6,const uint32_t *base,size_t vl)
{
    vlseg7e32_v_u32mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 31);
}

/*
** test0_vlseg7e64ff_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e64ff_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e64ff_v_f64m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e64ff_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*17,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e64ff_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e64ff_v_f64m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 17);
}

/*
** test0_vlseg7e64ff_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e64ff_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,vfloat64m1_t merge6,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e64ff_v_f64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e64ff_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e64ff_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,vfloat64m1_t merge6,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e64ff_v_f64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 25);
}

/*
** test0_vlseg7e64ff_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e64ff_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e64ff_v_i64m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e64ff_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*3,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e64ff_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e64ff_v_i64m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 3);
}

/*
** test0_vlseg7e64ff_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e64ff_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,vint64m1_t merge6,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e64ff_v_i64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e64ff_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e64ff_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,vint64m1_t merge6,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e64ff_v_i64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 8);
}

/*
** test0_vlseg7e64ff_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e64ff_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e64ff_v_u64m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e64ff_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*8,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e64ff_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e64ff_v_u64m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 8);
}

/*
** test0_vlseg7e64ff_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e64ff_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,vuint64m1_t merge6,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e64ff_v_u64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e64ff_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e64ff_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,vuint64m1_t merge6,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e64ff_v_u64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 8);
}

/*
** test0_vlseg7e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,const float64_t *base,size_t vl)
{
    vlseg7e64_v_f64m1(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*13,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,const float64_t *base,size_t vl)
{
    vlseg7e64_v_f64m1(v0, v1, v2, v3, v4, v5, v6, base, 13);
}

/*
** test0_vlseg7e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,vfloat64m1_t merge6,const float64_t *base,size_t vl)
{
    vlseg7e64_v_f64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,vfloat64m1_t merge6,const float64_t *base,size_t vl)
{
    vlseg7e64_v_f64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 8);
}

/*
** test0_vlseg7e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,const int64_t *base,size_t vl)
{
    vlseg7e64_v_i64m1(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*19,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,const int64_t *base,size_t vl)
{
    vlseg7e64_v_i64m1(v0, v1, v2, v3, v4, v5, v6, base, 19);
}

/*
** test0_vlseg7e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,vint64m1_t merge6,const int64_t *base,size_t vl)
{
    vlseg7e64_v_i64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*21,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,vint64m1_t merge6,const int64_t *base,size_t vl)
{
    vlseg7e64_v_i64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 21);
}

/*
** test0_vlseg7e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,const uint64_t *base,size_t vl)
{
    vlseg7e64_v_u64m1(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*3,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,const uint64_t *base,size_t vl)
{
    vlseg7e64_v_u64m1(v0, v1, v2, v3, v4, v5, v6, base, 3);
}

/*
** test0_vlseg7e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,vuint64m1_t merge6,const uint64_t *base,size_t vl)
{
    vlseg7e64_v_u64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,vuint64m1_t merge6,const uint64_t *base,size_t vl)
{
    vlseg7e64_v_u64m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 12);
}

/*
** test0_vlseg7e8ff_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e8ff_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_i8m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e8ff_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e8ff_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_i8m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 25);
}

/*
** test0_vlseg7e8ff_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e8ff_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,vint8m1_t merge6,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_i8m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e8ff_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e8ff_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,vint8m1_t merge6,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_i8m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 18);
}

/*
** test0_vlseg7e8ff_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e8ff_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_i8mf2(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e8ff_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*2,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e8ff_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_i8mf2(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 2);
}

/*
** test0_vlseg7e8ff_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e8ff_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,vint8mf2_t merge6,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_i8mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e8ff_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e8ff_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,vint8mf2_t merge6,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_i8mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 15);
}

/*
** test0_vlseg7e8ff_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e8ff_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_i8mf4(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e8ff_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*29,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e8ff_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_i8mf4(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 29);
}

/*
** test0_vlseg7e8ff_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e8ff_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,vint8mf4_t merge6,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_i8mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e8ff_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e8ff_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,vint8mf4_t merge6,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_i8mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 22);
}

/*
** test0_vlseg7e8ff_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e8ff_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_i8mf8(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e8ff_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*4,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e8ff_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_i8mf8(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 4);
}

/*
** test0_vlseg7e8ff_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e8ff_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,vint8mf8_t merge6,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_i8mf8_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e8ff_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e8ff_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,vint8mf8_t merge6,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_i8mf8_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 14);
}

/*
** test0_vlseg7e8ff_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e8ff_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_u8m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e8ff_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e8ff_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_u8m1(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 26);
}

/*
** test0_vlseg7e8ff_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e8ff_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,vuint8m1_t merge6,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_u8m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e8ff_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e8ff_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,vuint8m1_t merge6,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_u8m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 1);
}

/*
** test0_vlseg7e8ff_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e8ff_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_u8mf2(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e8ff_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*15,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e8ff_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_u8mf2(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 15);
}

/*
** test0_vlseg7e8ff_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e8ff_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,vuint8mf2_t merge6,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_u8mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e8ff_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e8ff_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,vuint8mf2_t merge6,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_u8mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 12);
}

/*
** test0_vlseg7e8ff_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e8ff_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_u8mf4(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e8ff_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*13,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e8ff_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_u8mf4(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 13);
}

/*
** test0_vlseg7e8ff_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e8ff_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,vuint8mf4_t merge6,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_u8mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e8ff_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e8ff_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,vuint8mf4_t merge6,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_u8mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 11);
}

/*
** test0_vlseg7e8ff_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e8ff_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_u8mf8(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/*
** test1_vlseg7e8ff_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*23,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e8ff_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_u8mf8(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 23);
}

/*
** test0_vlseg7e8ff_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e8ff_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,vuint8mf8_t merge6,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_u8mf8_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, vl);
}

/*
** test1_vlseg7e8ff_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e8ff_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,vuint8mf8_t merge6,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e8ff_v_u8mf8_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, new_vl, 7);
}

/*
** test0_vlseg7e8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,const int8_t *base,size_t vl)
{
    vlseg7e8_v_i8m1(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e8_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,const int8_t *base,size_t vl)
{
    vlseg7e8_v_i8m1(v0, v1, v2, v3, v4, v5, v6, base, 16);
}

/*
** test0_vlseg7e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,vint8m1_t merge6,const int8_t *base,size_t vl)
{
    vlseg7e8_v_i8m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,vint8m1_t merge6,const int8_t *base,size_t vl)
{
    vlseg7e8_v_i8m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 7);
}

/*
** test0_vlseg7e8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e8_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,const int8_t *base,size_t vl)
{
    vlseg7e8_v_i8mf2(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e8_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e8_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,const int8_t *base,size_t vl)
{
    vlseg7e8_v_i8mf2(v0, v1, v2, v3, v4, v5, v6, base, 24);
}

/*
** test0_vlseg7e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,vint8mf2_t merge6,const int8_t *base,size_t vl)
{
    vlseg7e8_v_i8mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,vint8mf2_t merge6,const int8_t *base,size_t vl)
{
    vlseg7e8_v_i8mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 25);
}

/*
** test0_vlseg7e8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e8_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,const int8_t *base,size_t vl)
{
    vlseg7e8_v_i8mf4(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e8_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*9,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e8_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,const int8_t *base,size_t vl)
{
    vlseg7e8_v_i8mf4(v0, v1, v2, v3, v4, v5, v6, base, 9);
}

/*
** test0_vlseg7e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,vint8mf4_t merge6,const int8_t *base,size_t vl)
{
    vlseg7e8_v_i8mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,vint8mf4_t merge6,const int8_t *base,size_t vl)
{
    vlseg7e8_v_i8mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 24);
}

/*
** test0_vlseg7e8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e8_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,const int8_t *base,size_t vl)
{
    vlseg7e8_v_i8mf8(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e8_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*9,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e8_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,const int8_t *base,size_t vl)
{
    vlseg7e8_v_i8mf8(v0, v1, v2, v3, v4, v5, v6, base, 9);
}

/*
** test0_vlseg7e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,vint8mf8_t merge6,const int8_t *base,size_t vl)
{
    vlseg7e8_v_i8mf8_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,vint8mf8_t merge6,const int8_t *base,size_t vl)
{
    vlseg7e8_v_i8mf8_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 31);
}

/*
** test0_vlseg7e8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e8_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,const uint8_t *base,size_t vl)
{
    vlseg7e8_v_u8m1(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e8_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*21,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e8_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,const uint8_t *base,size_t vl)
{
    vlseg7e8_v_u8m1(v0, v1, v2, v3, v4, v5, v6, base, 21);
}

/*
** test0_vlseg7e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,vuint8m1_t merge6,const uint8_t *base,size_t vl)
{
    vlseg7e8_v_u8m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,vuint8m1_t merge6,const uint8_t *base,size_t vl)
{
    vlseg7e8_v_u8m1_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 0);
}

/*
** test0_vlseg7e8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e8_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,const uint8_t *base,size_t vl)
{
    vlseg7e8_v_u8mf2(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e8_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e8_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,const uint8_t *base,size_t vl)
{
    vlseg7e8_v_u8mf2(v0, v1, v2, v3, v4, v5, v6, base, 22);
}

/*
** test0_vlseg7e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,vuint8mf2_t merge6,const uint8_t *base,size_t vl)
{
    vlseg7e8_v_u8mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,vuint8mf2_t merge6,const uint8_t *base,size_t vl)
{
    vlseg7e8_v_u8mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 24);
}

/*
** test0_vlseg7e8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e8_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,const uint8_t *base,size_t vl)
{
    vlseg7e8_v_u8mf4(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e8_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e8_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,const uint8_t *base,size_t vl)
{
    vlseg7e8_v_u8mf4(v0, v1, v2, v3, v4, v5, v6, base, 19);
}

/*
** test0_vlseg7e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,vuint8mf4_t merge6,const uint8_t *base,size_t vl)
{
    vlseg7e8_v_u8mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,vuint8mf4_t merge6,const uint8_t *base,size_t vl)
{
    vlseg7e8_v_u8mf4_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 30);
}

/*
** test0_vlseg7e8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg7e8_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,const uint8_t *base,size_t vl)
{
    vlseg7e8_v_u8mf8(v0, v1, v2, v3, v4, v5, v6, base, vl);
}

/*
** test1_vlseg7e8_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*23,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg7e8_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,const uint8_t *base,size_t vl)
{
    vlseg7e8_v_u8mf8(v0, v1, v2, v3, v4, v5, v6, base, 23);
}

/*
** test0_vlseg7e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg7e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,vuint8mf8_t merge6,const uint8_t *base,size_t vl)
{
    vlseg7e8_v_u8mf8_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, vl);
}

/*
** test1_vlseg7e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*28,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg7e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,vuint8mf8_t merge6,const uint8_t *base,size_t vl)
{
    vlseg7e8_v_u8mf8_m(v0, v1, v2, v3, v4, v5, v6, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, base, 28);
}

/*
** test0_vlseg8e16ff_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_f16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_f16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 7);
}

/*
** test0_vlseg8e16ff_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,vfloat16m1_t merge6,vfloat16m1_t merge7,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_f16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,vfloat16m1_t merge6,vfloat16m1_t merge7,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_f16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 22);
}

/*
** test0_vlseg8e16ff_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_f16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*24,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_f16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 24);
}

/*
** test0_vlseg8e16ff_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,vfloat16mf2_t merge6,vfloat16mf2_t merge7,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_f16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*22,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,vfloat16mf2_t merge6,vfloat16mf2_t merge7,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_f16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 22);
}

/*
** test0_vlseg8e16ff_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_f16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_f16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 8);
}

/*
** test0_vlseg8e16ff_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,vfloat16mf4_t merge6,vfloat16mf4_t merge7,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_f16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,vfloat16mf4_t merge6,vfloat16mf4_t merge7,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_f16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 11);
}

/*
** test0_vlseg8e16ff_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_i16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_i16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 11);
}

/*
** test0_vlseg8e16ff_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,vint16m1_t merge6,vint16m1_t merge7,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_i16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*15,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,vint16m1_t merge6,vint16m1_t merge7,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_i16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 15);
}

/*
** test0_vlseg8e16ff_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_i16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_i16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 11);
}

/*
** test0_vlseg8e16ff_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,vint16mf2_t merge6,vint16mf2_t merge7,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_i16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,vint16mf2_t merge6,vint16mf2_t merge7,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_i16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 0);
}

/*
** test0_vlseg8e16ff_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_i16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*13,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_i16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 13);
}

/*
** test0_vlseg8e16ff_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,vint16mf4_t merge6,vint16mf4_t merge7,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_i16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*3,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,vint16mf4_t merge6,vint16mf4_t merge7,const int16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_i16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 3);
}

/*
** test0_vlseg8e16ff_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_u16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_u16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 31);
}

/*
** test0_vlseg8e16ff_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,vuint16m1_t merge6,vuint16m1_t merge7,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_u16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,vuint16m1_t merge6,vuint16m1_t merge7,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_u16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 7);
}

/*
** test0_vlseg8e16ff_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_u16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*2,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_u16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 2);
}

/*
** test0_vlseg8e16ff_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,vuint16mf2_t merge6,vuint16mf2_t merge7,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_u16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,vuint16mf2_t merge6,vuint16mf2_t merge7,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_u16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 5);
}

/*
** test0_vlseg8e16ff_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_u16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_u16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 28);
}

/*
** test0_vlseg8e16ff_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16ff_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,vuint16mf4_t merge6,vuint16mf4_t merge7,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_u16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e16ff_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16ff_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,vuint16mf4_t merge6,vuint16mf4_t merge7,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_u16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 23);
}

/*
** test0_vlseg8e16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,const float16_t *base,size_t vl)
{
    vlseg8e16_v_f16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e16_v_f16m1:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,const float16_t *base,size_t vl)
{
    vlseg8e16_v_f16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, 21);
}

/*
** test0_vlseg8e16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,vfloat16m1_t merge6,vfloat16m1_t merge7,const float16_t *base,size_t vl)
{
    vlseg8e16_v_f16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e16_v_f16m1_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16_v_f16m1_m(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,vfloat16m1_t *v5,vfloat16m1_t *v6,vfloat16m1_t *v7,vbool16_t mask,vfloat16m1_t merge0,vfloat16m1_t merge1,vfloat16m1_t merge2,vfloat16m1_t merge3,vfloat16m1_t merge4,vfloat16m1_t merge5,vfloat16m1_t merge6,vfloat16m1_t merge7,const float16_t *base,size_t vl)
{
    vlseg8e16_v_f16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 0);
}

/*
** test0_vlseg8e16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,const float16_t *base,size_t vl)
{
    vlseg8e16_v_f16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e16_v_f16mf2:
**  ...
**	vsetivli\s+zero,\s*21,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,const float16_t *base,size_t vl)
{
    vlseg8e16_v_f16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, 21);
}

/*
** test0_vlseg8e16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,vfloat16mf2_t merge6,vfloat16mf2_t merge7,const float16_t *base,size_t vl)
{
    vlseg8e16_v_f16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e16_v_f16mf2_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,vbool32_t mask,vfloat16mf2_t merge0,vfloat16mf2_t merge1,vfloat16mf2_t merge2,vfloat16mf2_t merge3,vfloat16mf2_t merge4,vfloat16mf2_t merge5,vfloat16mf2_t merge6,vfloat16mf2_t merge7,const float16_t *base,size_t vl)
{
    vlseg8e16_v_f16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 26);
}

/*
** test0_vlseg8e16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,const float16_t *base,size_t vl)
{
    vlseg8e16_v_f16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e16_v_f16mf4:
**  ...
**	vsetivli\s+zero,\s*28,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,const float16_t *base,size_t vl)
{
    vlseg8e16_v_f16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, 28);
}

/*
** test0_vlseg8e16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,vfloat16mf4_t merge6,vfloat16mf4_t merge7,const float16_t *base,size_t vl)
{
    vlseg8e16_v_f16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e16_v_f16mf4_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vfloat16mf4_t *v6,vfloat16mf4_t *v7,vbool64_t mask,vfloat16mf4_t merge0,vfloat16mf4_t merge1,vfloat16mf4_t merge2,vfloat16mf4_t merge3,vfloat16mf4_t merge4,vfloat16mf4_t merge5,vfloat16mf4_t merge6,vfloat16mf4_t merge7,const float16_t *base,size_t vl)
{
    vlseg8e16_v_f16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 1);
}

/*
** test0_vlseg8e16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,const int16_t *base,size_t vl)
{
    vlseg8e16_v_i16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e16_v_i16m1:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16_v_i16m1(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,const int16_t *base,size_t vl)
{
    vlseg8e16_v_i16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, 29);
}

/*
** test0_vlseg8e16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,vint16m1_t merge6,vint16m1_t merge7,const int16_t *base,size_t vl)
{
    vlseg8e16_v_i16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e16_v_i16m1_m:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,vbool16_t mask,vint16m1_t merge0,vint16m1_t merge1,vint16m1_t merge2,vint16m1_t merge3,vint16m1_t merge4,vint16m1_t merge5,vint16m1_t merge6,vint16m1_t merge7,const int16_t *base,size_t vl)
{
    vlseg8e16_v_i16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 8);
}

/*
** test0_vlseg8e16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,const int16_t *base,size_t vl)
{
    vlseg8e16_v_i16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e16_v_i16mf2:
**  ...
**	vsetivli\s+zero,\s*8,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16_v_i16mf2(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,const int16_t *base,size_t vl)
{
    vlseg8e16_v_i16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, 8);
}

/*
** test0_vlseg8e16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,vint16mf2_t merge6,vint16mf2_t merge7,const int16_t *base,size_t vl)
{
    vlseg8e16_v_i16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e16_v_i16mf2_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vint16mf2_t *v7,vbool32_t mask,vint16mf2_t merge0,vint16mf2_t merge1,vint16mf2_t merge2,vint16mf2_t merge3,vint16mf2_t merge4,vint16mf2_t merge5,vint16mf2_t merge6,vint16mf2_t merge7,const int16_t *base,size_t vl)
{
    vlseg8e16_v_i16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 11);
}

/*
** test0_vlseg8e16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,const int16_t *base,size_t vl)
{
    vlseg8e16_v_i16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e16_v_i16mf4:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,const int16_t *base,size_t vl)
{
    vlseg8e16_v_i16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, 30);
}

/*
** test0_vlseg8e16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,vint16mf4_t merge6,vint16mf4_t merge7,const int16_t *base,size_t vl)
{
    vlseg8e16_v_i16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e16_v_i16mf4_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,vint16mf4_t *v5,vint16mf4_t *v6,vint16mf4_t *v7,vbool64_t mask,vint16mf4_t merge0,vint16mf4_t merge1,vint16mf4_t merge2,vint16mf4_t merge3,vint16mf4_t merge4,vint16mf4_t merge5,vint16mf4_t merge6,vint16mf4_t merge7,const int16_t *base,size_t vl)
{
    vlseg8e16_v_i16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 11);
}

/*
** test0_vlseg8e16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,const uint16_t *base,size_t vl)
{
    vlseg8e16_v_u16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e16_v_u16m1:
**  ...
**	vsetivli\s+zero,\s*20,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,const uint16_t *base,size_t vl)
{
    vlseg8e16_v_u16m1(v0, v1, v2, v3, v4, v5, v6, v7, base, 20);
}

/*
** test0_vlseg8e16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,vuint16m1_t merge6,vuint16m1_t merge7,const uint16_t *base,size_t vl)
{
    vlseg8e16_v_u16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e16_v_u16m1_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,vbool16_t mask,vuint16m1_t merge0,vuint16m1_t merge1,vuint16m1_t merge2,vuint16m1_t merge3,vuint16m1_t merge4,vuint16m1_t merge5,vuint16m1_t merge6,vuint16m1_t merge7,const uint16_t *base,size_t vl)
{
    vlseg8e16_v_u16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 29);
}

/*
** test0_vlseg8e16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,const uint16_t *base,size_t vl)
{
    vlseg8e16_v_u16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e16_v_u16mf2:
**  ...
**	vsetivli\s+zero,\s*10,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16_v_u16mf2(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,const uint16_t *base,size_t vl)
{
    vlseg8e16_v_u16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, 10);
}

/*
** test0_vlseg8e16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,vuint16mf2_t merge6,vuint16mf2_t merge7,const uint16_t *base,size_t vl)
{
    vlseg8e16_v_u16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e16_v_u16mf2_m:
**  ...
**	vsetivli\s+zero,\s*0,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vuint16mf2_t *v7,vbool32_t mask,vuint16mf2_t merge0,vuint16mf2_t merge1,vuint16mf2_t merge2,vuint16mf2_t merge3,vuint16mf2_t merge4,vuint16mf2_t merge5,vuint16mf2_t merge6,vuint16mf2_t merge7,const uint16_t *base,size_t vl)
{
    vlseg8e16_v_u16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 0);
}

/*
** test0_vlseg8e16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,const uint16_t *base,size_t vl)
{
    vlseg8e16_v_u16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e16_v_u16mf4:
**  ...
**	vsetivli\s+zero,\s*30,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e16_v_u16mf4(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,const uint16_t *base,size_t vl)
{
    vlseg8e16_v_u16mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, 30);
}

/*
** test0_vlseg8e16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,vuint16mf4_t merge6,vuint16mf4_t merge7,const uint16_t *base,size_t vl)
{
    vlseg8e16_v_u16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e16_v_u16mf4_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e16_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vuint16mf4_t *v6,vuint16mf4_t *v7,vbool64_t mask,vuint16mf4_t merge0,vuint16mf4_t merge1,vuint16mf4_t merge2,vuint16mf4_t merge3,vuint16mf4_t merge4,vuint16mf4_t merge5,vuint16mf4_t merge6,vuint16mf4_t merge7,const uint16_t *base,size_t vl)
{
    vlseg8e16_v_u16mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 18);
}

/*
** test0_vlseg8e32ff_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e32ff_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_f32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e32ff_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*8,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e32ff_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_f32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 8);
}

/*
** test0_vlseg8e32ff_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e32ff_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,vfloat32m1_t merge6,vfloat32m1_t merge7,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_f32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e32ff_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e32ff_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,vfloat32m1_t merge6,vfloat32m1_t merge7,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_f32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 5);
}

/*
** test0_vlseg8e32ff_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e32ff_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_f32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e32ff_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*2,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e32ff_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_f32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 2);
}

/*
** test0_vlseg8e32ff_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e32ff_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,vfloat32mf2_t merge6,vfloat32mf2_t merge7,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_f32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e32ff_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e32ff_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,vfloat32mf2_t merge6,vfloat32mf2_t merge7,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_f32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 10);
}

/*
** test0_vlseg8e32ff_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e32ff_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_i32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e32ff_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e32ff_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_i32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 6);
}

/*
** test0_vlseg8e32ff_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e32ff_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,vint32m1_t merge6,vint32m1_t merge7,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_i32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e32ff_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e32ff_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,vint32m1_t merge6,vint32m1_t merge7,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_i32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 5);
}

/*
** test0_vlseg8e32ff_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e32ff_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_i32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e32ff_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e32ff_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_i32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 20);
}

/*
** test0_vlseg8e32ff_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e32ff_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,vint32mf2_t merge6,vint32mf2_t merge7,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_i32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e32ff_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*23,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e32ff_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,vint32mf2_t merge6,vint32mf2_t merge7,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_i32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 23);
}

/*
** test0_vlseg8e32ff_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e32ff_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_u32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e32ff_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e32ff_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_u32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 20);
}

/*
** test0_vlseg8e32ff_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e32ff_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,vuint32m1_t merge6,vuint32m1_t merge7,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_u32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e32ff_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e32ff_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,vuint32m1_t merge6,vuint32m1_t merge7,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_u32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 1);
}

/*
** test0_vlseg8e32ff_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e32ff_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_u32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e32ff_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*11,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e32ff_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_u32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 11);
}

/*
** test0_vlseg8e32ff_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e32ff_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,vuint32mf2_t merge6,vuint32mf2_t merge7,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_u32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e32ff_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*29,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e32ff_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,vuint32mf2_t merge6,vuint32mf2_t merge7,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_u32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 29);
}

/*
** test0_vlseg8e32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,const float32_t *base,size_t vl)
{
    vlseg8e32_v_f32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e32_v_f32m1:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e32_v_f32m1(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,const float32_t *base,size_t vl)
{
    vlseg8e32_v_f32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, 13);
}

/*
** test0_vlseg8e32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,vfloat32m1_t merge6,vfloat32m1_t merge7,const float32_t *base,size_t vl)
{
    vlseg8e32_v_f32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e32_v_f32m1_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,vfloat32m1_t *v7,vbool32_t mask,vfloat32m1_t merge0,vfloat32m1_t merge1,vfloat32m1_t merge2,vfloat32m1_t merge3,vfloat32m1_t merge4,vfloat32m1_t merge5,vfloat32m1_t merge6,vfloat32m1_t merge7,const float32_t *base,size_t vl)
{
    vlseg8e32_v_f32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 25);
}

/*
** test0_vlseg8e32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,const float32_t *base,size_t vl)
{
    vlseg8e32_v_f32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e32_v_f32mf2:
**  ...
**	vsetivli\s+zero,\s*3,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,const float32_t *base,size_t vl)
{
    vlseg8e32_v_f32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, 3);
}

/*
** test0_vlseg8e32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,vfloat32mf2_t merge6,vfloat32mf2_t merge7,const float32_t *base,size_t vl)
{
    vlseg8e32_v_f32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e32_v_f32mf2_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e32_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,vfloat32mf2_t *v5,vfloat32mf2_t *v6,vfloat32mf2_t *v7,vbool64_t mask,vfloat32mf2_t merge0,vfloat32mf2_t merge1,vfloat32mf2_t merge2,vfloat32mf2_t merge3,vfloat32mf2_t merge4,vfloat32mf2_t merge5,vfloat32mf2_t merge6,vfloat32mf2_t merge7,const float32_t *base,size_t vl)
{
    vlseg8e32_v_f32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 27);
}

/*
** test0_vlseg8e32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,const int32_t *base,size_t vl)
{
    vlseg8e32_v_i32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e32_v_i32m1:
**  ...
**	vsetivli\s+zero,\s*5,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e32_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,const int32_t *base,size_t vl)
{
    vlseg8e32_v_i32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, 5);
}

/*
** test0_vlseg8e32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,vint32m1_t merge6,vint32m1_t merge7,const int32_t *base,size_t vl)
{
    vlseg8e32_v_i32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e32_v_i32m1_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e32_v_i32m1_m(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,vint32m1_t *v6,vint32m1_t *v7,vbool32_t mask,vint32m1_t merge0,vint32m1_t merge1,vint32m1_t merge2,vint32m1_t merge3,vint32m1_t merge4,vint32m1_t merge5,vint32m1_t merge6,vint32m1_t merge7,const int32_t *base,size_t vl)
{
    vlseg8e32_v_i32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 6);
}

/*
** test0_vlseg8e32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,const int32_t *base,size_t vl)
{
    vlseg8e32_v_i32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e32_v_i32mf2:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e32_v_i32mf2(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,const int32_t *base,size_t vl)
{
    vlseg8e32_v_i32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, 13);
}

/*
** test0_vlseg8e32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,vint32mf2_t merge6,vint32mf2_t merge7,const int32_t *base,size_t vl)
{
    vlseg8e32_v_i32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e32_v_i32mf2_m:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e32_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vint32mf2_t *v6,vint32mf2_t *v7,vbool64_t mask,vint32mf2_t merge0,vint32mf2_t merge1,vint32mf2_t merge2,vint32mf2_t merge3,vint32mf2_t merge4,vint32mf2_t merge5,vint32mf2_t merge6,vint32mf2_t merge7,const int32_t *base,size_t vl)
{
    vlseg8e32_v_i32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 31);
}

/*
** test0_vlseg8e32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,const uint32_t *base,size_t vl)
{
    vlseg8e32_v_u32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e32_v_u32m1:
**  ...
**	vsetivli\s+zero,\s*12,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,const uint32_t *base,size_t vl)
{
    vlseg8e32_v_u32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, 12);
}

/*
** test0_vlseg8e32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,vuint32m1_t merge6,vuint32m1_t merge7,const uint32_t *base,size_t vl)
{
    vlseg8e32_v_u32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e32_v_u32m1_m:
**  ...
**	vsetivli\s+zero,\s*13,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e32_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,vbool32_t mask,vuint32m1_t merge0,vuint32m1_t merge1,vuint32m1_t merge2,vuint32m1_t merge3,vuint32m1_t merge4,vuint32m1_t merge5,vuint32m1_t merge6,vuint32m1_t merge7,const uint32_t *base,size_t vl)
{
    vlseg8e32_v_u32m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 13);
}

/*
** test0_vlseg8e32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,const uint32_t *base,size_t vl)
{
    vlseg8e32_v_u32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e32_v_u32mf2:
**  ...
**	vsetivli\s+zero,\s*20,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e32_v_u32mf2(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,const uint32_t *base,size_t vl)
{
    vlseg8e32_v_u32mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, 20);
}

/*
** test0_vlseg8e32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,vuint32mf2_t merge6,vuint32mf2_t merge7,const uint32_t *base,size_t vl)
{
    vlseg8e32_v_u32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e32_v_u32mf2_m:
**  ...
**	vsetivli\s+zero,\s*4,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e32_v_u32mf2_m(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,vuint32mf2_t *v7,vbool64_t mask,vuint32mf2_t merge0,vuint32mf2_t merge1,vuint32mf2_t merge2,vuint32mf2_t merge3,vuint32mf2_t merge4,vuint32mf2_t merge5,vuint32mf2_t merge6,vuint32mf2_t merge7,const uint32_t *base,size_t vl)
{
    vlseg8e32_v_u32mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 4);
}

/*
** test0_vlseg8e64ff_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e64ff_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e64ff_v_f64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e64ff_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*16,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e64ff_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e64ff_v_f64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 16);
}

/*
** test0_vlseg8e64ff_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e64ff_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,vfloat64m1_t merge6,vfloat64m1_t merge7,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e64ff_v_f64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e64ff_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*12,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e64ff_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,vfloat64m1_t merge6,vfloat64m1_t merge7,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e64ff_v_f64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 12);
}

/*
** test0_vlseg8e64ff_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e64ff_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e64ff_v_i64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e64ff_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*23,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e64ff_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e64ff_v_i64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 23);
}

/*
** test0_vlseg8e64ff_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e64ff_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,vint64m1_t merge6,vint64m1_t merge7,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e64ff_v_i64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e64ff_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*10,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e64ff_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,vint64m1_t merge6,vint64m1_t merge7,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e64ff_v_i64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 10);
}

/*
** test0_vlseg8e64ff_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e64ff_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e64ff_v_u64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e64ff_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*23,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e64ff_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e64ff_v_u64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 23);
}

/*
** test0_vlseg8e64ff_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e64ff_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,vuint64m1_t merge6,vuint64m1_t merge7,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e64ff_v_u64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e64ff_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*7,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e64ff_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,vuint64m1_t merge6,vuint64m1_t merge7,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e64ff_v_u64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 7);
}

/*
** test0_vlseg8e64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,const float64_t *base,size_t vl)
{
    vlseg8e64_v_f64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e64_v_f64m1:
**  ...
**	vsetivli\s+zero,\s*1,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,const float64_t *base,size_t vl)
{
    vlseg8e64_v_f64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, 1);
}

/*
** test0_vlseg8e64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,vfloat64m1_t merge6,vfloat64m1_t merge7,const float64_t *base,size_t vl)
{
    vlseg8e64_v_f64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e64_v_f64m1_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e64_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,vbool64_t mask,vfloat64m1_t merge0,vfloat64m1_t merge1,vfloat64m1_t merge2,vfloat64m1_t merge3,vfloat64m1_t merge4,vfloat64m1_t merge5,vfloat64m1_t merge6,vfloat64m1_t merge7,const float64_t *base,size_t vl)
{
    vlseg8e64_v_f64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 1);
}

/*
** test0_vlseg8e64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,const int64_t *base,size_t vl)
{
    vlseg8e64_v_i64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e64_v_i64m1:
**  ...
**	vsetivli\s+zero,\s*14,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e64_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,const int64_t *base,size_t vl)
{
    vlseg8e64_v_i64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, 14);
}

/*
** test0_vlseg8e64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,vint64m1_t merge6,vint64m1_t merge7,const int64_t *base,size_t vl)
{
    vlseg8e64_v_i64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e64_v_i64m1_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,vint64m1_t *v6,vint64m1_t *v7,vbool64_t mask,vint64m1_t merge0,vint64m1_t merge1,vint64m1_t merge2,vint64m1_t merge3,vint64m1_t merge4,vint64m1_t merge5,vint64m1_t merge6,vint64m1_t merge7,const int64_t *base,size_t vl)
{
    vlseg8e64_v_i64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 25);
}

/*
** test0_vlseg8e64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,const uint64_t *base,size_t vl)
{
    vlseg8e64_v_u64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e64_v_u64m1:
**  ...
**	vsetivli\s+zero,\s*10,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,const uint64_t *base,size_t vl)
{
    vlseg8e64_v_u64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, 10);
}

/*
** test0_vlseg8e64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,vuint64m1_t merge6,vuint64m1_t merge7,const uint64_t *base,size_t vl)
{
    vlseg8e64_v_u64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e64_v_u64m1_m:
**  ...
**	vsetivli\s+zero,\s*30,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e64_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,vbool64_t mask,vuint64m1_t merge0,vuint64m1_t merge1,vuint64m1_t merge2,vuint64m1_t merge3,vuint64m1_t merge4,vuint64m1_t merge5,vuint64m1_t merge6,vuint64m1_t merge7,const uint64_t *base,size_t vl)
{
    vlseg8e64_v_u64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 30);
}

/*
** test0_vlseg8e8ff_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e8ff_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_i8m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e8ff_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*29,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e8ff_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_i8m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 29);
}

/*
** test0_vlseg8e8ff_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e8ff_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,vint8m1_t merge6,vint8m1_t merge7,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_i8m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e8ff_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e8ff_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,vint8m1_t merge6,vint8m1_t merge7,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_i8m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 18);
}

/*
** test0_vlseg8e8ff_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e8ff_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_i8mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e8ff_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*29,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e8ff_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_i8mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 29);
}

/*
** test0_vlseg8e8ff_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e8ff_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,vint8mf2_t merge6,vint8mf2_t merge7,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_i8mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e8ff_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e8ff_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,vint8mf2_t merge6,vint8mf2_t merge7,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_i8mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 14);
}

/*
** test0_vlseg8e8ff_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e8ff_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vint8mf4_t *v7,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_i8mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e8ff_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*12,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e8ff_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vint8mf4_t *v7,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_i8mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 12);
}

/*
** test0_vlseg8e8ff_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e8ff_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vint8mf4_t *v7,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,vint8mf4_t merge6,vint8mf4_t merge7,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_i8mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e8ff_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e8ff_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vint8mf4_t *v7,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,vint8mf4_t merge6,vint8mf4_t merge7,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_i8mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 25);
}

/*
** test0_vlseg8e8ff_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e8ff_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_i8mf8(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e8ff_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*21,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e8ff_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_i8mf8(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 21);
}

/*
** test0_vlseg8e8ff_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e8ff_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,vint8mf8_t merge6,vint8mf8_t merge7,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_i8mf8_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e8ff_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e8ff_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,vint8mf8_t merge6,vint8mf8_t merge7,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_i8mf8_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 19);
}

/*
** test0_vlseg8e8ff_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e8ff_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_u8m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e8ff_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*0,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e8ff_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_u8m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 0);
}

/*
** test0_vlseg8e8ff_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e8ff_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,vuint8m1_t merge6,vuint8m1_t merge7,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_u8m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e8ff_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*26,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e8ff_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,vuint8m1_t merge6,vuint8m1_t merge7,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_u8m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 26);
}

/*
** test0_vlseg8e8ff_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e8ff_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vuint8mf2_t *v7,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_u8mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e8ff_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*22,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e8ff_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vuint8mf2_t *v7,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_u8mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 22);
}

/*
** test0_vlseg8e8ff_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e8ff_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vuint8mf2_t *v7,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,vuint8mf2_t merge6,vuint8mf2_t merge7,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_u8mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e8ff_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e8ff_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vuint8mf2_t *v7,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,vuint8mf2_t merge6,vuint8mf2_t merge7,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_u8mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 19);
}

/*
** test0_vlseg8e8ff_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e8ff_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vuint8mf4_t *v7,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_u8mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e8ff_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e8ff_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vuint8mf4_t *v7,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_u8mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 18);
}

/*
** test0_vlseg8e8ff_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e8ff_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vuint8mf4_t *v7,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,vuint8mf4_t merge6,vuint8mf4_t merge7,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_u8mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e8ff_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*6,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e8ff_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vuint8mf4_t *v7,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,vuint8mf4_t merge6,vuint8mf4_t merge7,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_u8mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 6);
}

/*
** test0_vlseg8e8ff_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e8ff_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_u8mf8(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/*
** test1_vlseg8e8ff_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*4,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e8ff_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_u8mf8(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 4);
}

/*
** test0_vlseg8e8ff_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e8ff_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,vuint8mf8_t merge6,vuint8mf8_t merge7,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_u8mf8_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, vl);
}

/*
** test1_vlseg8e8ff_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*27,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e8ff_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,vuint8mf8_t merge6,vuint8mf8_t merge7,const uint8_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e8ff_v_u8mf8_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, new_vl, 27);
}

/*
** test0_vlseg8e8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8m1(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e8_v_i8m1:
**  ...
**	vsetivli\s+zero,\s*14,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8m1(v0, v1, v2, v3, v4, v5, v6, v7, base, 14);
}

/*
** test0_vlseg8e8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,vint8m1_t merge6,vint8m1_t merge7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e8_v_i8m1_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e8_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,vbool8_t mask,vint8m1_t merge0,vint8m1_t merge1,vint8m1_t merge2,vint8m1_t merge3,vint8m1_t merge4,vint8m1_t merge5,vint8m1_t merge6,vint8m1_t merge7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 18);
}

/*
** test0_vlseg8e8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e8_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e8_v_i8mf2:
**  ...
**	vsetivli\s+zero,\s*7,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e8_v_i8mf2(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, 7);
}

/*
** test0_vlseg8e8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,vint8mf2_t merge6,vint8mf2_t merge7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e8_v_i8mf2_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e8_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,vbool16_t mask,vint8mf2_t merge0,vint8mf2_t merge1,vint8mf2_t merge2,vint8mf2_t merge3,vint8mf2_t merge4,vint8mf2_t merge5,vint8mf2_t merge6,vint8mf2_t merge7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 11);
}

/*
** test0_vlseg8e8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e8_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vint8mf4_t *v7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e8_v_i8mf4:
**  ...
**	vsetivli\s+zero,\s*4,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e8_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vint8mf4_t *v7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, 4);
}

/*
** test0_vlseg8e8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vint8mf4_t *v7,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,vint8mf4_t merge6,vint8mf4_t merge7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e8_v_i8mf4_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vint8mf4_t *v6,vint8mf4_t *v7,vbool32_t mask,vint8mf4_t merge0,vint8mf4_t merge1,vint8mf4_t merge2,vint8mf4_t merge3,vint8mf4_t merge4,vint8mf4_t merge5,vint8mf4_t merge6,vint8mf4_t merge7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 16);
}

/*
** test0_vlseg8e8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e8_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8mf8(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e8_v_i8mf8:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e8_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8mf8(v0, v1, v2, v3, v4, v5, v6, v7, base, 25);
}

/*
** test0_vlseg8e8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,vint8mf8_t merge6,vint8mf8_t merge7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8mf8_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e8_v_i8mf8_m:
**  ...
**	vsetivli\s+zero,\s*11,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e8_v_i8mf8_m(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,vbool64_t mask,vint8mf8_t merge0,vint8mf8_t merge1,vint8mf8_t merge2,vint8mf8_t merge3,vint8mf8_t merge4,vint8mf8_t merge5,vint8mf8_t merge6,vint8mf8_t merge7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8mf8_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 11);
}

/*
** test0_vlseg8e8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e8_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,const uint8_t *base,size_t vl)
{
    vlseg8e8_v_u8m1(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e8_v_u8m1:
**  ...
**	vsetivli\s+zero,\s*23,\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e8_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,const uint8_t *base,size_t vl)
{
    vlseg8e8_v_u8m1(v0, v1, v2, v3, v4, v5, v6, v7, base, 23);
}

/*
** test0_vlseg8e8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,vuint8m1_t merge6,vuint8m1_t merge7,const uint8_t *base,size_t vl)
{
    vlseg8e8_v_u8m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e8_v_u8m1_m:
**  ...
**	vsetivli\s+zero,\s*16,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e8_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,vbool8_t mask,vuint8m1_t merge0,vuint8m1_t merge1,vuint8m1_t merge2,vuint8m1_t merge3,vuint8m1_t merge4,vuint8m1_t merge5,vuint8m1_t merge6,vuint8m1_t merge7,const uint8_t *base,size_t vl)
{
    vlseg8e8_v_u8m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 16);
}

/*
** test0_vlseg8e8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e8_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vuint8mf2_t *v7,const uint8_t *base,size_t vl)
{
    vlseg8e8_v_u8mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e8_v_u8mf2:
**  ...
**	vsetivli\s+zero,\s*19,\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e8_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vuint8mf2_t *v7,const uint8_t *base,size_t vl)
{
    vlseg8e8_v_u8mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, 19);
}

/*
** test0_vlseg8e8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vuint8mf2_t *v7,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,vuint8mf2_t merge6,vuint8mf2_t merge7,const uint8_t *base,size_t vl)
{
    vlseg8e8_v_u8mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e8_v_u8mf2_m:
**  ...
**	vsetivli\s+zero,\s*1,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e8_v_u8mf2_m(vuint8mf2_t *v0,vuint8mf2_t *v1,vuint8mf2_t *v2,vuint8mf2_t *v3,vuint8mf2_t *v4,vuint8mf2_t *v5,vuint8mf2_t *v6,vuint8mf2_t *v7,vbool16_t mask,vuint8mf2_t merge0,vuint8mf2_t merge1,vuint8mf2_t merge2,vuint8mf2_t merge3,vuint8mf2_t merge4,vuint8mf2_t merge5,vuint8mf2_t merge6,vuint8mf2_t merge7,const uint8_t *base,size_t vl)
{
    vlseg8e8_v_u8mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 1);
}

/*
** test0_vlseg8e8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e8_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vuint8mf4_t *v7,const uint8_t *base,size_t vl)
{
    vlseg8e8_v_u8mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e8_v_u8mf4:
**  ...
**	vsetivli\s+zero,\s*27,\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e8_v_u8mf4(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vuint8mf4_t *v7,const uint8_t *base,size_t vl)
{
    vlseg8e8_v_u8mf4(v0, v1, v2, v3, v4, v5, v6, v7, base, 27);
}

/*
** test0_vlseg8e8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vuint8mf4_t *v7,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,vuint8mf4_t merge6,vuint8mf4_t merge7,const uint8_t *base,size_t vl)
{
    vlseg8e8_v_u8mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e8_v_u8mf4_m:
**  ...
**	vsetivli\s+zero,\s*25,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e8_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vuint8mf4_t *v5,vuint8mf4_t *v6,vuint8mf4_t *v7,vbool32_t mask,vuint8mf4_t merge0,vuint8mf4_t merge1,vuint8mf4_t merge2,vuint8mf4_t merge3,vuint8mf4_t merge4,vuint8mf4_t merge5,vuint8mf4_t merge6,vuint8mf4_t merge7,const uint8_t *base,size_t vl)
{
    vlseg8e8_v_u8mf4_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 25);
}

/*
** test0_vlseg8e8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test0_vlseg8e8_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,const uint8_t *base,size_t vl)
{
    vlseg8e8_v_u8mf8(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/*
** test1_vlseg8e8_v_u8mf8:
**  ...
**	vsetivli\s+zero,\s*24,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
void
test1_vlseg8e8_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,const uint8_t *base,size_t vl)
{
    vlseg8e8_v_u8mf8(v0, v1, v2, v3, v4, v5, v6, v7, base, 24);
}

/*
** test0_vlseg8e8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test0_vlseg8e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,vuint8mf8_t merge6,vuint8mf8_t merge7,const uint8_t *base,size_t vl)
{
    vlseg8e8_v_u8mf8_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, vl);
}

/*
** test1_vlseg8e8_v_u8mf8_m:
**  ...
**	vsetivli\s+zero,\s*18,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vlseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
void
test1_vlseg8e8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,vbool64_t mask,vuint8mf8_t merge0,vuint8mf8_t merge1,vuint8mf8_t merge2,vuint8mf8_t merge3,vuint8mf8_t merge4,vuint8mf8_t merge5,vuint8mf8_t merge6,vuint8mf8_t merge7,const uint8_t *base,size_t vl)
{
    vlseg8e8_v_u8mf8_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, merge0, merge1, merge2, merge3, merge4, merge5, merge6, merge7, base, 18);
}

