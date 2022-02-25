/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlsseg3e64_v_f64m2_tu(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_f64m2_tu(v0, v1, v2, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu} 1 } } */

void
test1_vlsseg3e64_v_f64m2_tu(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg3e64_v_f64m2_tu(v0, v1, v2, base, bstride, 28);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*28,\s*e64,\s*m2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlsseg3e64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs2r\.v} 6 } } */

