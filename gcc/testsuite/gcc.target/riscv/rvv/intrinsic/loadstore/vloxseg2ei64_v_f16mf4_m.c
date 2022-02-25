/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg2ei64_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,const float16_t *base,vuint64m1_t bindex,size_t vl)
{
    vloxseg2ei64_v_f16mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vloxseg2ei64_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,const float16_t *base,vuint64m1_t bindex,size_t vl)
{
    vloxseg2ei64_v_f16mf4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, 22);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*22,\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg2ei64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 4 } } */

