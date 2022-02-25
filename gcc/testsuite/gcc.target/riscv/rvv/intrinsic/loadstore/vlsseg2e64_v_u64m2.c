/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlsseg2e64_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m2(v0, v1, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu} 1 } } */

void
test1_vlsseg2e64_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_u64m2(v0, v1, base, bstride, 19);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*19,\s*e64,\s*m2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlsseg2e64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs2r\.v} 4 } } */

