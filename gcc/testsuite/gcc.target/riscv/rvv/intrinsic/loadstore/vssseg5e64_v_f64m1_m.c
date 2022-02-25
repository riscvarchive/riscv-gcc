/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vssseg5e64_v_f64m1_m(vbool64_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,size_t vl)
{
    vssseg5e64_v_f64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vssseg5e64_v_f64m1_m(vbool64_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,size_t vl)
{
    vssseg5e64_v_f64m1_m(mask, base, bstride, v0, v1, v2, v3, v4, 23);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*23,\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vssseg5e64\.v} 2 } } */
