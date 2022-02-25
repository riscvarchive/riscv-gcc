/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint16m4_t
test0_vloxei32_v_i16m4_m(vbool4_t mask,vint16m4_t maskedoff,const int16_t *base,vuint32m8_t bindex,size_t vl)
{
    return vloxei32_v_i16m4_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu} 1 } } */

vint16m4_t
test1_vloxei32_v_i16m4_m(vbool4_t mask,vint16m4_t maskedoff,const int16_t *base,vuint32m8_t bindex,size_t vl)
{
    return vloxei32_v_i16m4_m(mask, maskedoff, base, bindex, 9);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*9,\s*e16,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei32\.v} 2 } } */
