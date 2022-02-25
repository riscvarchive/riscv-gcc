/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg7e32ff_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_f32m1_tu(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu} 1 } } */

void
test1_vlseg7e32ff_v_f32m1_tu(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vfloat32m1_t *v4,vfloat32m1_t *v5,vfloat32m1_t *v6,const float32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_f32m1_tu(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 20);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*20,\s*e32,\s*m1,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg7e32ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 14 } } */

