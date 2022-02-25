/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg6ei64_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,vfloat16mf4_t maskedoff2,vfloat16mf4_t maskedoff3,vfloat16mf4_t maskedoff4,vfloat16mf4_t maskedoff5,const float16_t *base,vuint64m1_t bindex,size_t vl)
{
    vluxseg6ei64_v_f16mf4_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vluxseg6ei64_v_f16mf4_m(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,vfloat16mf4_t *v3,vfloat16mf4_t *v4,vfloat16mf4_t *v5,vbool64_t mask,vfloat16mf4_t maskedoff0,vfloat16mf4_t maskedoff1,vfloat16mf4_t maskedoff2,vfloat16mf4_t maskedoff3,vfloat16mf4_t maskedoff4,vfloat16mf4_t maskedoff5,const float16_t *base,vuint64m1_t bindex,size_t vl)
{
    vluxseg6ei64_v_f16mf4_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, 31);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg6ei64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 12 } } */

