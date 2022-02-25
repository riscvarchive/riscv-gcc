/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg4ei64_v_f16m2(float16_t *base,vuint64m8_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,vfloat16m2_t v3,size_t vl)
{
    vsoxseg4ei64_v_f16m2(base, bindex, v0, v1, v2, v3, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu} 1 } } */

void
test1_vsoxseg4ei64_v_f16m2(float16_t *base,vuint64m8_t bindex,vfloat16m2_t v0,vfloat16m2_t v1,vfloat16m2_t v2,vfloat16m2_t v3,size_t vl)
{
    vsoxseg4ei64_v_f16m2(base, bindex, v0, v1, v2, v3, 25);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*25,\s*e16,\s*m2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg4ei64\.v} 2 } } */
