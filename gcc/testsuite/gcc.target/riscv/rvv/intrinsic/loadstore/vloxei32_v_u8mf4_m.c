/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint8mf4_t
test0_vloxei32_v_u8mf4_m(vbool32_t mask,vuint8mf4_t maskedoff,const uint8_t *base,vuint32m1_t bindex,size_t vl)
{
    return vloxei32_v_u8mf4_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

vuint8mf4_t
test1_vloxei32_v_u8mf4_m(vbool32_t mask,vuint8mf4_t maskedoff,const uint8_t *base,vuint32m1_t bindex,size_t vl)
{
    return vloxei32_v_u8mf4_m(mask, maskedoff, base, bindex, 14);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*14,\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei32\.v} 2 } } */
