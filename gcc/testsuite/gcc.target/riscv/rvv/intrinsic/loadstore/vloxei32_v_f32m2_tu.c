/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat32m2_t
test0_vloxei32_v_f32m2_tu(vfloat32m2_t dest,const float32_t *base,vuint32m2_t bindex,size_t vl)
{
    return vloxei32_v_f32m2_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu} 1 } } */

vfloat32m2_t
test1_vloxei32_v_f32m2_tu(vfloat32m2_t dest,const float32_t *base,vuint32m2_t bindex,size_t vl)
{
    return vloxei32_v_f32m2_tu(dest, base, bindex, 13);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*13,\s*e32,\s*m2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei32\.v} 2 } } */
