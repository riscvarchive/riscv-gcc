/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vssseg2e32_v_u32m2(uint32_t *base,ptrdiff_t bstride,vuint32m2_t v0,vuint32m2_t v1,size_t vl)
{
    vssseg2e32_v_u32m2(base, bstride, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu} 1 } } */

void
test1_vssseg2e32_v_u32m2(uint32_t *base,ptrdiff_t bstride,vuint32m2_t v0,vuint32m2_t v1,size_t vl)
{
    vssseg2e32_v_u32m2(base, bstride, v0, v1, 26);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*26,\s*e32,\s*m2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vssseg2e32\.v} 2 } } */
