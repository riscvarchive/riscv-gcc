/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat32m1_t
test0_vluxei64_v_f32m1_m(vbool32_t mask,vfloat32m1_t maskedoff,const float32_t *base,vuint64m2_t bindex,size_t vl)
{
    return vluxei64_v_f32m1_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

vfloat32m1_t
test1_vluxei64_v_f32m1_m(vbool32_t mask,vfloat32m1_t maskedoff,const float32_t *base,vuint64m2_t bindex,size_t vl)
{
    return vluxei64_v_f32m1_m(mask, maskedoff, base, bindex, 21);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*21,\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei64\.v} 2 } } */
