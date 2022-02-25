/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat32m4_t
test0_vle32ff_v_f32m4_tu(vfloat32m4_t dest,const float32_t *base,size_t *new_vl,size_t vl)
{
    return vle32ff_v_f32m4_tu(dest, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu} 1 } } */

vfloat32m4_t
test1_vle32ff_v_f32m4_tu(vfloat32m4_t dest,const float32_t *base,size_t *new_vl,size_t vl)
{
    return vle32ff_v_f32m4_tu(dest, base, new_vl, 16);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*16,\s*e32,\s*m4,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle32ff\.v} 2 } } */
