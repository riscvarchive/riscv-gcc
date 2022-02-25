/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg3ei16_v_u16mf2(uint16_t *base,vuint16mf2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vsuxseg3ei16_v_u16mf2(base, bindex, v0, v1, v2, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vsuxseg3ei16_v_u16mf2(uint16_t *base,vuint16mf2_t bindex,vuint16mf2_t v0,vuint16mf2_t v1,vuint16mf2_t v2,size_t vl)
{
    vsuxseg3ei16_v_u16mf2(base, bindex, v0, v1, v2, 21);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*21,\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg3ei16\.v} 2 } } */
