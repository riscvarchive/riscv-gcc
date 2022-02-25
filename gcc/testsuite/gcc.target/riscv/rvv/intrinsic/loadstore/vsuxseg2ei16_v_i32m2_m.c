/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg2ei16_v_i32m2_m(vbool16_t mask,int32_t *base,vuint16m1_t bindex,vint32m2_t v0,vint32m2_t v1,size_t vl)
{
    vsuxseg2ei16_v_i32m2_m(mask, base, bindex, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxseg2ei16_v_i32m2_m(vbool16_t mask,int32_t *base,vuint16m1_t bindex,vint32m2_t v0,vint32m2_t v1,size_t vl)
{
    vsuxseg2ei16_v_i32m2_m(mask, base, bindex, v0, v1, 1);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*1,\s*e32,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg2ei16\.v} 2 } } */
