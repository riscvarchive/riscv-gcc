/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint8m4_t
test0_vlse8_v_u8m4_m(vbool2_t mask,vuint8m4_t maskedoff,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse8_v_u8m4_m(mask, maskedoff, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu} 1 } } */

vuint8m4_t
test1_vlse8_v_u8m4_m(vbool2_t mask,vuint8m4_t maskedoff,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse8_v_u8m4_m(mask, maskedoff, base, bstride, 16);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*16,\s*e8,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlse8\.v} 2 } } */
