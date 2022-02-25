/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat64m2_t
test0_vlse64_v_f64m2_tu(vfloat64m2_t dest,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse64_v_f64m2_tu(dest, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu} 1 } } */

vfloat64m2_t
test1_vlse64_v_f64m2_tu(vfloat64m2_t dest,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse64_v_f64m2_tu(dest, base, bstride, 16);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*16,\s*e64,\s*m2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlse64\.v} 2 } } */
