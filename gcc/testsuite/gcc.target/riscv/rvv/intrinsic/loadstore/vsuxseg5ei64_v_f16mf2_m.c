/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg5ei64_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint64m2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vsuxseg5ei64_v_f16mf2_m(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxseg5ei64_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint64m2_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,size_t vl)
{
    vsuxseg5ei64_v_f16mf2_m(mask, base, bindex, v0, v1, v2, v3, v4, 5);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*5,\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg5ei64\.v} 2 } } */
