/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg8ei32_v_f16mf2(float16_t *base,vuint32m1_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vsuxseg8ei32_v_f16mf2(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vsuxseg8ei32_v_f16mf2(float16_t *base,vuint32m1_t bindex,vfloat16mf2_t v0,vfloat16mf2_t v1,vfloat16mf2_t v2,vfloat16mf2_t v3,vfloat16mf2_t v4,vfloat16mf2_t v5,vfloat16mf2_t v6,vfloat16mf2_t v7,size_t vl)
{
    vsuxseg8ei32_v_f16mf2(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 30);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*30,\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg8ei32\.v} 2 } } */
