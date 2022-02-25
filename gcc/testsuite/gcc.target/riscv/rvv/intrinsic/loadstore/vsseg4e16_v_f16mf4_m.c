/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsseg4e16_v_f16mf4_m(vbool64_t mask,float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vsseg4e16_v_f16mf4_m(mask, base, v0, v1, v2, v3, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vsseg4e16_v_f16mf4_m(vbool64_t mask,float16_t *base,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,vfloat16mf4_t v3,size_t vl)
{
    vsseg4e16_v_f16mf4_m(mask, base, v0, v1, v2, v3, 23);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*23,\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsseg4e16\.v} 2 } } */
