/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg2ei8_v_f32m1_m(vbool32_t mask,float32_t *base,vuint8mf4_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,size_t vl)
{
    vsoxseg2ei8_v_f32m1_m(mask, base, bindex, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vsoxseg2ei8_v_f32m1_m(vbool32_t mask,float32_t *base,vuint8mf4_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,size_t vl)
{
    vsoxseg2ei8_v_f32m1_m(mask, base, bindex, v0, v1, 21);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*21,\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg2ei8\.v} 2 } } */
