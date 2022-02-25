/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat32m8_t
test0_vloxei8_v_f32m8_tu(vfloat32m8_t dest,const float32_t *base,vuint8m2_t bindex,size_t vl)
{
    return vloxei8_v_f32m8_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu} 1 } } */

vfloat32m8_t
test1_vloxei8_v_f32m8_tu(vfloat32m8_t dest,const float32_t *base,vuint8m2_t bindex,size_t vl)
{
    return vloxei8_v_f32m8_tu(dest, base, bindex, 6);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*6,\s*e32,\s*m8,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei8\.v} 2 } } */
