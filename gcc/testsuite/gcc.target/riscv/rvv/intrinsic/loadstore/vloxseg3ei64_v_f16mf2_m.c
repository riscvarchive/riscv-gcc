/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg3ei64_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,const float16_t *base,vuint64m2_t bindex,size_t vl)
{
    vloxseg3ei64_v_f16mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vloxseg3ei64_v_f16mf2_m(vfloat16mf2_t *v0,vfloat16mf2_t *v1,vfloat16mf2_t *v2,vbool32_t mask,vfloat16mf2_t maskedoff0,vfloat16mf2_t maskedoff1,vfloat16mf2_t maskedoff2,const float16_t *base,vuint64m2_t bindex,size_t vl)
{
    vloxseg3ei64_v_f16mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, bindex, 5);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*5,\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg3ei64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 6 } } */

