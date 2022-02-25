/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint8mf4_t
test0_vloxei16_v_u8mf4_m(vbool32_t mask,vuint8mf4_t maskedoff,const uint8_t *base,vuint16mf2_t bindex,size_t vl)
{
    return vloxei16_v_u8mf4_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

vuint8mf4_t
test1_vloxei16_v_u8mf4_m(vbool32_t mask,vuint8mf4_t maskedoff,const uint8_t *base,vuint16mf2_t bindex,size_t vl)
{
    return vloxei16_v_u8mf4_m(mask, maskedoff, base, bindex, 20);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*20,\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei16\.v} 2 } } */
