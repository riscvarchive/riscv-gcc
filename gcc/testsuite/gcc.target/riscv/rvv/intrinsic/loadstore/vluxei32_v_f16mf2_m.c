/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat16mf2_t
test0_vluxei32_v_f16mf2_m(vbool32_t mask,vfloat16mf2_t maskedoff,const float16_t *base,vuint32m1_t bindex,size_t vl)
{
    return vluxei32_v_f16mf2_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

vfloat16mf2_t
test1_vluxei32_v_f16mf2_m(vbool32_t mask,vfloat16mf2_t maskedoff,const float16_t *base,vuint32m1_t bindex,size_t vl)
{
    return vluxei32_v_f16mf2_m(mask, maskedoff, base, bindex, 7);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*7,\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei32\.v} 2 } } */
