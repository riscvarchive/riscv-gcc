/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg2e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg2e16ff_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,const float16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_f16mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, new_vl, 29);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*29,\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg2e16ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 4 } } */

