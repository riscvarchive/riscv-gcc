/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsse32_v_f32m2_m(vbool16_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m2_t value,size_t vl)
{
    vsse32_v_f32m2_m(mask, base, bstride, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vsse32_v_f32m2_m(vbool16_t mask,float32_t *base,ptrdiff_t bstride,vfloat32m2_t value,size_t vl)
{
    vsse32_v_f32m2_m(mask, base, bstride, value, 12);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*12,\s*e32,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsse32\.v} 2 } } */
