/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat32m4_t
test0_vluxei8_v_f32m4_m(vbool8_t mask,vfloat32m4_t maskedoff,const float32_t *base,vuint8m1_t bindex,size_t vl)
{
    return vluxei8_v_f32m4_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu} 1 } } */

vfloat32m4_t
test1_vluxei8_v_f32m4_m(vbool8_t mask,vfloat32m4_t maskedoff,const float32_t *base,vuint8m1_t bindex,size_t vl)
{
    return vluxei8_v_f32m4_m(mask, maskedoff, base, bindex, 31);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei8\.v} 2 } } */
