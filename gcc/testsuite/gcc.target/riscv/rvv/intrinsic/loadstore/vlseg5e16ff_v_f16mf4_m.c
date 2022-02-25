/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg5e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,vfloat16mf4_t maskedoff2,vfloat16mf4_t maskedoff3,vfloat16mf4_t maskedoff4,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_f16mf4_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg5e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,vfloat16mf4_t maskedoff2,vfloat16mf4_t maskedoff3,vfloat16mf4_t maskedoff4,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg5e16ff_v_f16mf4_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, 3);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*3,\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg5e16ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 10 } } */

