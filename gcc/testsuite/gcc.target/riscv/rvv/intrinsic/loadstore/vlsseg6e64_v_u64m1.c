/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlsseg6e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_u64m1(v0, v1, v2, v3, v4, v5, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vlsseg6e64_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,const uint64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg6e64_v_u64m1(v0, v1, v2, v3, v4, v5, base, bstride, 25);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*25,\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlsseg6e64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 12 } } */

