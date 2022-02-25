/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat32m1_t
test0_vloxei8_v_f32m1(const float32_t *base,vuint8mf4_t bindex,size_t vl)
{
    return vloxei8_v_f32m1(base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

vfloat32m1_t
test1_vloxei8_v_f32m1(const float32_t *base,vuint8mf4_t bindex,size_t vl)
{
    return vloxei8_v_f32m1(base, bindex, 23);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*23,\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei8\.v} 2 } } */
