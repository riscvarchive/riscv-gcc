/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg8e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,vfloat16mf2_t maskedoff3,vfloat16mf2_t maskedoff4,vfloat16mf2_t maskedoff5,vfloat16mf2_t maskedoff6,vfloat16mf2_t maskedoff7,const float16_t *base,size_t vl)
{
    vlseg8e16_v_f16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg8e16_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,vfloat16mf2_t maskedoff3,vfloat16mf2_t maskedoff4,vfloat16mf2_t maskedoff5,vfloat16mf2_t maskedoff6,vfloat16mf2_t maskedoff7,const float16_t *base,size_t vl)
{
    vlseg8e16_v_f16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, 31);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg8e16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 16 } } */

