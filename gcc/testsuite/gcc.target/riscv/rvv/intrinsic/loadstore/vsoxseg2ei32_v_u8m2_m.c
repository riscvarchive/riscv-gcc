/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg2ei32_v_u8m2_m(vbool4_t mask,uint8_t *base,vuint32m8_t bindex,vuint8m2_t v0,vuint8m2_t v1,size_t vl)
{
    vsoxseg2ei32_v_u8m2_m(mask, base, bindex, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vsoxseg2ei32_v_u8m2_m(vbool4_t mask,uint8_t *base,vuint32m8_t bindex,vuint8m2_t v0,vuint8m2_t v1,size_t vl)
{
    vsoxseg2ei32_v_u8m2_m(mask, base, bindex, v0, v1, 20);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*20,\s*e8,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg2ei32\.v} 2 } } */
