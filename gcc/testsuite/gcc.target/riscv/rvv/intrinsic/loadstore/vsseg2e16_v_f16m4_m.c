/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsseg2e16_v_f16m4_m(vbool4_t mask,float16_t *base,vfloat16m4_t v0,vfloat16m4_t v1,size_t vl)
{
    vsseg2e16_v_f16m4_m(mask, base, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu} 1 } } */

void
test1_vsseg2e16_v_f16m4_m(vbool4_t mask,float16_t *base,vfloat16m4_t v0,vfloat16m4_t v1,size_t vl)
{
    vsseg2e16_v_f16m4_m(mask, base, v0, v1, 29);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*29,\s*e16,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsseg2e16\.v} 2 } } */
