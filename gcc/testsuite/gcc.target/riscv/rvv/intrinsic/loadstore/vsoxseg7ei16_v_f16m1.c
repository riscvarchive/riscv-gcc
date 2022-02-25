/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg7ei16_v_f16m1(float16_t *base,vuint16m1_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,size_t vl)
{
    vsoxseg7ei16_v_f16m1(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vsoxseg7ei16_v_f16m1(float16_t *base,vuint16m1_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,vfloat16m1_t v2,vfloat16m1_t v3,vfloat16m1_t v4,vfloat16m1_t v5,vfloat16m1_t v6,size_t vl)
{
    vsoxseg7ei16_v_f16m1(base, bindex, v0, v1, v2, v3, v4, v5, v6, 7);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*7,\s*e16,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg7ei16\.v} 2 } } */
