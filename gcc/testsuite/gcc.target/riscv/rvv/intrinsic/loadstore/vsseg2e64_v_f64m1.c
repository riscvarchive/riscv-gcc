/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsseg2e64_v_f64m1(float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,size_t vl)
{
    vsseg2e64_v_f64m1(base, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vsseg2e64_v_f64m1(float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,size_t vl)
{
    vsseg2e64_v_f64m1(base, v0, v1, 31);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsseg2e64\.v} 2 } } */
