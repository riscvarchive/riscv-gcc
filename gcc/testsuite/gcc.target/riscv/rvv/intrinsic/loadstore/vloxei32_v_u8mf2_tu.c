/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint8mf2_t
test0_vloxei32_v_u8mf2_tu(vuint8mf2_t dest,const uint8_t *base,vuint32m2_t bindex,size_t vl)
{
    return vloxei32_v_u8mf2_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu} 1 } } */

vuint8mf2_t
test1_vloxei32_v_u8mf2_tu(vuint8mf2_t dest,const uint8_t *base,vuint32m2_t bindex,size_t vl)
{
    return vloxei32_v_u8mf2_tu(dest, base, bindex, 7);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*7,\s*e8,\s*mf2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei32\.v} 2 } } */
