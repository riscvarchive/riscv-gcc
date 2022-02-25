/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg5e16ff_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_f16m1_tu(v0, v1, v2, v3, v4, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu} 1 } } */

void
test1_vlseg5e16ff_v_f16m1_tu(vfloat16m1_t *v0,vfloat16m1_t *v1,vfloat16m1_t *v2,vfloat16m1_t *v3,vfloat16m1_t *v4,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_f16m1_tu(v0, v1, v2, v3, v4, base, new_vl, 12);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*12,\s*e16,\s*m1,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg5e16ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 10 } } */

