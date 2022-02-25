/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat32m1_t
test0_vloxei32_v_f32m1_tu(vfloat32m1_t dest,const float32_t *base,vuint32m1_t bindex,size_t vl)
{
    return vloxei32_v_f32m1_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu} 1 } } */

vfloat32m1_t
test1_vloxei32_v_f32m1_tu(vfloat32m1_t dest,const float32_t *base,vuint32m1_t bindex,size_t vl)
{
    return vloxei32_v_f32m1_tu(dest, base, bindex, 31);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei32\.v} 2 } } */
