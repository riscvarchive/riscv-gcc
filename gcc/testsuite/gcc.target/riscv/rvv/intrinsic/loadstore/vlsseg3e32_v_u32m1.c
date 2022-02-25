/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlsseg3e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32m1(v0, v1, v2, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vlsseg3e32_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e32_v_u32m1(v0, v1, v2, base, bstride, 29);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*29,\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlsseg3e32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 6 } } */

