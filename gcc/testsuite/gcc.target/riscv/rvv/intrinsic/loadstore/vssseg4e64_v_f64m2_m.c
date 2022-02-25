/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vssseg4e64_v_f64m2_m(vbool32_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,vfloat64m2_t v3,size_t vl)
{
    vssseg4e64_v_f64m2_m(mask, base, bstride, v0, v1, v2, v3, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vssseg4e64_v_f64m2_m(vbool32_t mask,float64_t *base,ptrdiff_t bstride,vfloat64m2_t v0,vfloat64m2_t v1,vfloat64m2_t v2,vfloat64m2_t v3,size_t vl)
{
    vssseg4e64_v_f64m2_m(mask, base, bstride, v0, v1, v2, v3, 7);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*7,\s*e64,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vssseg4e64\.v} 2 } } */
