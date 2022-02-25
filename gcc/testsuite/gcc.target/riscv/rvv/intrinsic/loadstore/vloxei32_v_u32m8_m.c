/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint32m8_t
test0_vloxei32_v_u32m8_m(vbool4_t mask,vuint32m8_t maskedoff,const uint32_t *base,vuint32m8_t bindex,size_t vl)
{
    return vloxei32_v_u32m8_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu} 1 } } */

vuint32m8_t
test1_vloxei32_v_u32m8_m(vbool4_t mask,vuint32m8_t maskedoff,const uint32_t *base,vuint32m8_t bindex,size_t vl)
{
    return vloxei32_v_u32m8_m(mask, maskedoff, base, bindex, 20);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*20,\s*e32,\s*m8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei32\.v} 2 } } */
