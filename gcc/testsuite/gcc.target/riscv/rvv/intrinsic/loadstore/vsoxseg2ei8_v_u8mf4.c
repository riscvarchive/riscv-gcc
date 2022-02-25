/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg2ei8_v_u8mf4(uint8_t *base,vuint8mf4_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vsoxseg2ei8_v_u8mf4(base, bindex, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu} 1 } } */

void
test1_vsoxseg2ei8_v_u8mf4(uint8_t *base,vuint8mf4_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,size_t vl)
{
    vsoxseg2ei8_v_u8mf4(base, bindex, v0, v1, 12);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*12,\s*e8,\s*mf4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg2ei8\.v} 2 } } */
