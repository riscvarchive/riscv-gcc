/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat32m4_t
test0_vluxei32_v_f32m4_tu(vfloat32m4_t dest,const float32_t *base,vuint32m4_t bindex,size_t vl)
{
    return vluxei32_v_f32m4_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu} 1 } } */

vfloat32m4_t
test1_vluxei32_v_f32m4_tu(vfloat32m4_t dest,const float32_t *base,vuint32m4_t bindex,size_t vl)
{
    return vluxei32_v_f32m4_tu(dest, base, bindex, 30);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*30,\s*e32,\s*m4,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei32\.v} 2 } } */
