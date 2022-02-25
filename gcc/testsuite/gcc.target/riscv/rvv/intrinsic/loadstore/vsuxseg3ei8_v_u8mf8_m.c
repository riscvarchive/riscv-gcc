/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg3ei8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,size_t vl)
{
    vsuxseg3ei8_v_u8mf8_m(mask, base, bindex, v0, v1, v2, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxseg3ei8_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint8mf8_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,size_t vl)
{
    vsuxseg3ei8_v_u8mf8_m(mask, base, bindex, v0, v1, v2, 19);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*19,\s*e8,\s*mf8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg3ei8\.v} 2 } } */
