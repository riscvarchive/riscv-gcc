/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlsseg2e64_v_f64m4_tu(vfloat64m4_t *v0,vfloat64m4_t *v1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m4_tu(v0, v1, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu} 1 } } */

void
test1_vlsseg2e64_v_f64m4_tu(vfloat64m4_t *v0,vfloat64m4_t *v1,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_f64m4_tu(v0, v1, base, bstride, 26);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*26,\s*e64,\s*m4,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlsseg2e64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs4r\.v} 4 } } */

