/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint8m1_t
test0_vluxei16_v_u8m1_m(vbool8_t mask,vuint8m1_t maskedoff,const uint8_t *base,vuint16m2_t bindex,size_t vl)
{
    return vluxei16_v_u8m1_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu} 1 } } */

vuint8m1_t
test1_vluxei16_v_u8m1_m(vbool8_t mask,vuint8m1_t maskedoff,const uint8_t *base,vuint16m2_t bindex,size_t vl)
{
    return vluxei16_v_u8m1_m(mask, maskedoff, base, bindex, 8);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*8,\s*e8,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei16\.v} 2 } } */
