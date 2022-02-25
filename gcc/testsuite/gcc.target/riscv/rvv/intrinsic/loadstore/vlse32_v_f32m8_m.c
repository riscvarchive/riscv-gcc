/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat32m8_t
test0_vlse32_v_f32m8_m(vbool4_t mask,vfloat32m8_t maskedoff,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse32_v_f32m8_m(mask, maskedoff, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu} 1 } } */

vfloat32m8_t
test1_vlse32_v_f32m8_m(vbool4_t mask,vfloat32m8_t maskedoff,const float32_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse32_v_f32m8_m(mask, maskedoff, base, bstride, 15);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*15,\s*e32,\s*m8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlse32\.v} 2 } } */
