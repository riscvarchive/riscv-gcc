/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint64m1_t
test0_vlse64_v_i64m1(const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse64_v_i64m1(base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

vint64m1_t
test1_vlse64_v_i64m1(const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse64_v_i64m1(base, bstride, 26);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*26,\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlse64\.v} 2 } } */
