/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg2ei16_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,const uint8_t *base,vuint16mf4_t bindex,size_t vl)
{
    vluxseg2ei16_v_u8mf8(v0, v1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu} 1 } } */

void
test1_vluxseg2ei16_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,const uint8_t *base,vuint16mf4_t bindex,size_t vl)
{
    vluxseg2ei16_v_u8mf8(v0, v1, base, bindex, 7);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*7,\s*e8,\s*mf8,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg2ei16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 4 } } */

