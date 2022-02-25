/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat16mf4_t
test0_vluxei64_v_f16mf4_m(vbool64_t mask,vfloat16mf4_t maskedoff,const float16_t *base,vuint64m1_t bindex,size_t vl)
{
    return vluxei64_v_f16mf4_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

vfloat16mf4_t
test1_vluxei64_v_f16mf4_m(vbool64_t mask,vfloat16mf4_t maskedoff,const float16_t *base,vuint64m1_t bindex,size_t vl)
{
    return vluxei64_v_f16mf4_m(mask, maskedoff, base, bindex, 23);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*23,\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei64\.v} 2 } } */
