/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat32m2_t
test0_vlse32_v_f32m2_m(vbool16_t mask,vfloat32m2_t maskedoff,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse32_v_f32m2_m(mask, maskedoff, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu} 1 } } */

vfloat32m2_t
test1_vlse32_v_f32m2_m(vbool16_t mask,vfloat32m2_t maskedoff,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse32_v_f32m2_m(mask, maskedoff, base, bstride, 6);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*6,\s*e32,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlse32\.v} 2 } } */
