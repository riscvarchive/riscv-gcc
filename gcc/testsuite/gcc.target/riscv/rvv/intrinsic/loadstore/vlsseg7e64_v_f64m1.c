/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlsseg7e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_f64m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vlsseg7e64_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e64_v_f64m1(v0, v1, v2, v3, v4, v5, v6, base, bstride, 7);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*7,\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlsseg7e64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 14 } } */

