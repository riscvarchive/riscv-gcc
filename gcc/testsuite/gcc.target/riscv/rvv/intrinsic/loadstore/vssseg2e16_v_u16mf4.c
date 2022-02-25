/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vssseg2e16_v_u16mf4(uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vssseg2e16_v_u16mf4(base, bstride, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

void
test1_vssseg2e16_v_u16mf4(uint16_t *base,ptrdiff_t bstride,vuint16mf4_t v0,vuint16mf4_t v1,size_t vl)
{
    vssseg2e16_v_u16mf4(base, bstride, v0, v1, 31);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vssseg2e16\.v} 2 } } */
