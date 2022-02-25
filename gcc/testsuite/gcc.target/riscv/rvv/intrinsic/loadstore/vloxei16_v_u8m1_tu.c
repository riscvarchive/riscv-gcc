/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint8m1_t
test0_vloxei16_v_u8m1_tu(vuint8m1_t dest,const uint8_t *base,vuint16m2_t bindex,size_t vl)
{
    return vloxei16_v_u8m1_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu} 1 } } */

vuint8m1_t
test1_vloxei16_v_u8m1_tu(vuint8m1_t dest,const uint8_t *base,vuint16m2_t bindex,size_t vl)
{
    return vloxei16_v_u8m1_tu(dest, base, bindex, 9);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*9,\s*e8,\s*m1,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei16\.v} 2 } } */
