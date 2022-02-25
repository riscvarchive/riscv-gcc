/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxei32_v_u16m4_m(vbool4_t mask,uint16_t *base,vuint32m8_t bindex,vuint16m4_t value,size_t vl)
{
    vsuxei32_v_u16m4_m(mask, base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxei32_v_u16m4_m(vbool4_t mask,uint16_t *base,vuint32m8_t bindex,vuint16m4_t value,size_t vl)
{
    vsuxei32_v_u16m4_m(mask, base, bindex, value, 29);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*29,\s*e16,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxei32\.v} 2 } } */
