/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg2ei16_v_f16m4(float16_t *base,vuint16m4_t bindex,vfloat16m4_t v0,vfloat16m4_t v1,size_t vl)
{
    vsuxseg2ei16_v_f16m4(base, bindex, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu} 1 } } */

void
test1_vsuxseg2ei16_v_f16m4(float16_t *base,vuint16m4_t bindex,vfloat16m4_t v0,vfloat16m4_t v1,size_t vl)
{
    vsuxseg2ei16_v_f16m4(base, bindex, v0, v1, 23);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*23,\s*e16,\s*m4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg2ei16\.v} 2 } } */
