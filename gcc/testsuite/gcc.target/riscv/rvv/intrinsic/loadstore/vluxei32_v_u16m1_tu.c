/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint16m1_t
test0_vluxei32_v_u16m1_tu(vuint16m1_t dest,const uint16_t *base,vuint32m2_t bindex,size_t vl)
{
    return vluxei32_v_u16m1_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu} 1 } } */

vuint16m1_t
test1_vluxei32_v_u16m1_tu(vuint16m1_t dest,const uint16_t *base,vuint32m2_t bindex,size_t vl)
{
    return vluxei32_v_u16m1_tu(dest, base, bindex, 16);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*16,\s*e16,\s*m1,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei32\.v} 2 } } */
