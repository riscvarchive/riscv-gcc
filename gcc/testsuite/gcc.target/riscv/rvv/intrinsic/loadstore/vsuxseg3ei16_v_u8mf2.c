/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg3ei16_v_u8mf2(uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,size_t vl)
{
    vsuxseg3ei16_v_u8mf2(base, bindex, v0, v1, v2, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vsuxseg3ei16_v_u8mf2(uint8_t *base,vuint16m1_t bindex,vuint8mf2_t v0,vuint8mf2_t v1,vuint8mf2_t v2,size_t vl)
{
    vsuxseg3ei16_v_u8mf2(base, bindex, v0, v1, v2, 3);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*3,\s*e8,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg3ei16\.v} 2 } } */
