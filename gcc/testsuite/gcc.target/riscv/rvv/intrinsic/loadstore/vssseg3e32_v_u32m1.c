/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vssseg3e32_v_u32m1(uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,size_t vl)
{
    vssseg3e32_v_u32m1(base, bstride, v0, v1, v2, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vssseg3e32_v_u32m1(uint32_t *base,ptrdiff_t bstride,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,size_t vl)
{
    vssseg3e32_v_u32m1(base, bstride, v0, v1, v2, 6);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*6,\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vssseg3e32\.v} 2 } } */
