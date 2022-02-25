/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxei32_v_f64m4(float64_t *base,vuint32m2_t bindex,vfloat64m4_t value,size_t vl)
{
    vsoxei32_v_f64m4(base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu} 1 } } */

void
test1_vsoxei32_v_f64m4(float64_t *base,vuint32m2_t bindex,vfloat64m4_t value,size_t vl)
{
    vsoxei32_v_f64m4(base, bindex, value, 18);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*18,\s*e64,\s*m4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxei32\.v} 2 } } */
