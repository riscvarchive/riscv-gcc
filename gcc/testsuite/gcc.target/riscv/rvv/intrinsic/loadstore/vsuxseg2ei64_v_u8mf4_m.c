/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg2ei64_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint64m2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vsuxseg2ei64_v_u8mf4_m(mask, base, bindex, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxseg2ei64_v_u8mf4_m(vbool32_t mask,uint8_t *base,vuint64m2_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vsuxseg2ei64_v_u8mf4_m(mask, base, bindex, v0, v1, 4);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*4,\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg2ei64\.v} 2 } } */
