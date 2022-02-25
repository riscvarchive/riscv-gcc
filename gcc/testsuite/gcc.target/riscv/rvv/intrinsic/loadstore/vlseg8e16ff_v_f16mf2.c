/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg8e16ff_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_f16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vlseg8e16ff_v_f16mf2(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e16ff_v_f16mf2(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 27);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*27,\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg8e16ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 16 } } */

