/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat64m2_t
test0_vle64ff_v_f64m2_m(vbool32_t mask,vfloat64m2_t maskedoff,const float64_t *base,size_t *new_vl,size_t vl)
{
    return vle64ff_v_f64m2_m(mask, maskedoff, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu} 1 } } */

vfloat64m2_t
test1_vle64ff_v_f64m2_m(vbool32_t mask,vfloat64m2_t maskedoff,const float64_t *base,size_t *new_vl,size_t vl)
{
    return vle64ff_v_f64m2_m(mask, maskedoff, base, new_vl, 28);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*28,\s*e64,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle64ff\.v} 2 } } */
