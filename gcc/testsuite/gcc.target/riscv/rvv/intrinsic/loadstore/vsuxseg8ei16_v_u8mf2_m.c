/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg8ei16_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,vuint8mf2_t v7,size_t vl)
{
    vsuxseg8ei16_v_u8mf2_m(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxseg8ei16_v_u8mf2_m(vbool16_t mask,uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,vuint8mf2_t v3,vuint8mf2_t v4,vuint8mf2_t v5,vuint8mf2_t v6,vuint8mf2_t v7,size_t vl)
{
    vsuxseg8ei16_v_u8mf2_m(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 3);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*3,\s*e8,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg8ei16\.v} 2 } } */
