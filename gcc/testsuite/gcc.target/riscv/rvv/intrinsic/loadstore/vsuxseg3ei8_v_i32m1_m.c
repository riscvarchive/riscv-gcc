/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg3ei8_v_i32m1_m(vbool32_t mask,int32_t *base,vuint8mf4_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,size_t vl)
{
    vsuxseg3ei8_v_i32m1_m(mask, base, bindex, v0, v1, v2, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxseg3ei8_v_i32m1_m(vbool32_t mask,int32_t *base,vuint8mf4_t bindex,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,size_t vl)
{
    vsuxseg3ei8_v_i32m1_m(mask, base, bindex, v0, v1, v2, 22);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*22,\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg3ei8\.v} 2 } } */
