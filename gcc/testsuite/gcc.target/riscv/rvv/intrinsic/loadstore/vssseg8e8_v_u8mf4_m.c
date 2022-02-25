/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vssseg8e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,vuint8mf4_t v7,size_t vl)
{
    vssseg8e8_v_u8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vssseg8e8_v_u8mf4_m(vbool32_t mask,uint8_t *base,ptrdiff_t bstride,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,vuint8mf4_t v6,vuint8mf4_t v7,size_t vl)
{
    vssseg8e8_v_u8mf4_m(mask, base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 2);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*2,\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vssseg8e8\.v} 2 } } */
