/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat32m2_t
test0_vluxei32_v_f32m2_m(vbool16_t mask,vfloat32m2_t maskedoff,const float32_t *base,vuint32m2_t bindex,size_t vl)
{
    return vluxei32_v_f32m2_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu} 1 } } */

vfloat32m2_t
test1_vluxei32_v_f32m2_m(vbool16_t mask,vfloat32m2_t maskedoff,const float32_t *base,vuint32m2_t bindex,size_t vl)
{
    return vluxei32_v_f32m2_m(mask, maskedoff, base, bindex, 31);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei32\.v} 2 } } */
