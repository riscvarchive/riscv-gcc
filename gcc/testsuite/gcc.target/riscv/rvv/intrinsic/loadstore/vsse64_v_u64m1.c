/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsse64_v_u64m1(uint64_t *base,ptrdiff_t bstride,vuint64m1_t value,size_t vl)
{
    vsse64_v_u64m1(base, bstride, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vsse64_v_u64m1(uint64_t *base,ptrdiff_t bstride,vuint64m1_t value,size_t vl)
{
    vsse64_v_u64m1(base, bstride, value, 17);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*17,\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsse64\.v} 2 } } */
