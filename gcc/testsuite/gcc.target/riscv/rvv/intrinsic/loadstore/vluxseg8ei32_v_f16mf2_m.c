/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg8ei32_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,vfloat16mf2_t maskedoff3,vfloat16mf2_t maskedoff4,vfloat16mf2_t maskedoff5,vfloat16mf2_t maskedoff6,vfloat16mf2_t maskedoff7,const float16_t *base,vuint32m1_t bindex,size_t vl)
{
    vluxseg8ei32_v_f16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vluxseg8ei32_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vfloat16mf2_t *v3,vfloat16mf2_t *v4,vfloat16mf2_t *v5,vfloat16mf2_t *v6,vfloat16mf2_t *v7,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,vfloat16mf2_t maskedoff3,vfloat16mf2_t maskedoff4,vfloat16mf2_t maskedoff5,vfloat16mf2_t maskedoff6,vfloat16mf2_t maskedoff7,const float16_t *base,vuint32m1_t bindex,size_t vl)
{
    vluxseg8ei32_v_f16mf2_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, 30);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*30,\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg8ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 16 } } */

