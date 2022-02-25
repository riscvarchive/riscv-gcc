/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat64m4_t
test0_vloxei32_v_f64m4_tu(vfloat64m4_t dest,const float64_t *base,vuint32m2_t bindex,size_t vl)
{
    return vloxei32_v_f64m4_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu} 1 } } */

vfloat64m4_t
test1_vloxei32_v_f64m4_tu(vfloat64m4_t dest,const float64_t *base,vuint32m2_t bindex,size_t vl)
{
    return vloxei32_v_f64m4_tu(dest, base, bindex, 11);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*11,\s*e64,\s*m4,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei32\.v} 2 } } */
