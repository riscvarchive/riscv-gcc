/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat32m2_t
test0_vloxei16_v_f32m2(const float32_t *base,vuint16m1_t bindex,size_t vl)
{
    return vloxei16_v_f32m2(base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu} 1 } } */

vfloat32m2_t
test1_vloxei16_v_f32m2(const float32_t *base,vuint16m1_t bindex,size_t vl)
{
    return vloxei16_v_f32m2(base, bindex, 24);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*24,\s*e32,\s*m2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei16\.v} 2 } } */
