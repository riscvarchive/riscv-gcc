/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint32m1_t
test0_vlse32_v_i32m1(const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse32_v_i32m1(base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

vint32m1_t
test1_vlse32_v_i32m1(const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse32_v_i32m1(base, bstride, 3);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*3,\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlse32\.v} 2 } } */
