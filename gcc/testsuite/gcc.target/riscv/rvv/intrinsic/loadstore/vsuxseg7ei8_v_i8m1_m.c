/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg7ei8_v_i8m1_m(vbool8_t mask,int8_t *base,vuint8m1_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,size_t vl)
{
    vsuxseg7ei8_v_i8m1_m(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxseg7ei8_v_i8m1_m(vbool8_t mask,int8_t *base,vuint8m1_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,vint8m1_t v6,size_t vl)
{
    vsuxseg7ei8_v_i8m1_m(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 15);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*15,\s*e8,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg7ei8\.v} 2 } } */
