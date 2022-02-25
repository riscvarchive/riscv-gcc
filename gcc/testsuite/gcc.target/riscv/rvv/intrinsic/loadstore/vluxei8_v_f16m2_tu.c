/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat16m2_t
test0_vluxei8_v_f16m2_tu(vfloat16m2_t dest,const float16_t *base,vuint8m1_t bindex,size_t vl)
{
    return vluxei8_v_f16m2_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu} 1 } } */

vfloat16m2_t
test1_vluxei8_v_f16m2_tu(vfloat16m2_t dest,const float16_t *base,vuint8m1_t bindex,size_t vl)
{
    return vluxei8_v_f16m2_tu(dest, base, bindex, 14);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*14,\s*e16,\s*m2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei8\.v} 2 } } */
