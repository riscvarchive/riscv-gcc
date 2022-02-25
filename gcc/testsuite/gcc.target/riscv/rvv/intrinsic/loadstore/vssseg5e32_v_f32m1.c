/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vssseg5e32_v_f32m1(float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,size_t vl)
{
    vssseg5e32_v_f32m1(base, bstride, v0, v1, v2, v3, v4, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vssseg5e32_v_f32m1(float32_t *base,ptrdiff_t bstride,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,vfloat32m1_t v4,size_t vl)
{
    vssseg5e32_v_f32m1(base, bstride, v0, v1, v2, v3, v4, 11);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*11,\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vssseg5e32\.v} 2 } } */
