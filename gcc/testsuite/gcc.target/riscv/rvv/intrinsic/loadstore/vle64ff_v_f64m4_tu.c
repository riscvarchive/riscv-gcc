/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat64m4_t
test0_vle64ff_v_f64m4_tu(vfloat64m4_t dest,const float64_t *base,size_t *new_vl,size_t vl)
{
    return vle64ff_v_f64m4_tu(dest, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu} 1 } } */

vfloat64m4_t
test1_vle64ff_v_f64m4_tu(vfloat64m4_t dest,const float64_t *base,size_t *new_vl,size_t vl)
{
    return vle64ff_v_f64m4_tu(dest, base, new_vl, 12);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*12,\s*e64,\s*m4,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle64ff\.v} 2 } } */
