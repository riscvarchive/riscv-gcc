/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlsseg4e64_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_f64m2(v0, v1, v2, v3, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu} 1 } } */

void
test1_vlsseg4e64_v_f64m2(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e64_v_f64m2(v0, v1, v2, v3, base, bstride, 2);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*2,\s*e64,\s*m2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlsseg4e64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs2r\.v} 8 } } */

