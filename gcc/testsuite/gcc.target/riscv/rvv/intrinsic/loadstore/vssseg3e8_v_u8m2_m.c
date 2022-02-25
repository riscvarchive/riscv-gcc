/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vssseg3e8_v_u8m2_m(vbool4_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,size_t vl)
{
    vssseg3e8_v_u8m2_m(mask, base, bstride, v0, v1, v2, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vssseg3e8_v_u8m2_m(vbool4_t mask,uint8_t *base,ptrdiff_t bstride,vuint8m2_t v0,vuint8m2_t v1,vuint8m2_t v2,size_t vl)
{
    vssseg3e8_v_u8m2_m(mask, base, bstride, v0, v1, v2, 4);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*4,\s*e8,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vssseg3e8\.v} 2 } } */
