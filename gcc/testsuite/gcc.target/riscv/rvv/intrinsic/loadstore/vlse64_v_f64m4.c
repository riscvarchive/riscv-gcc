/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat64m4_t
test0_vlse64_v_f64m4(const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse64_v_f64m4(base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu} 1 } } */

vfloat64m4_t
test1_vlse64_v_f64m4(const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse64_v_f64m4(base, bstride, 21);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*21,\s*e64,\s*m4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlse64\.v} 2 } } */
