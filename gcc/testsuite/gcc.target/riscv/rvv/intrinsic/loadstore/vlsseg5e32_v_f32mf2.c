/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlsseg5e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_f32mf2(v0, v1, v2, v3, v4, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vlsseg5e32_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vfloat32mf2_t *v4,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e32_v_f32mf2(v0, v1, v2, v3, v4, base, bstride, 24);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*24,\s*e32,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlsseg5e32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse32\.v} 10 } } */

