/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg2ei64_v_f16m1(float16_t *base,vuint64m4_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,size_t vl)
{
    vsoxseg2ei64_v_f16m1(base, bindex, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vsoxseg2ei64_v_f16m1(float16_t *base,vuint64m4_t bindex,vfloat16m1_t v0,vfloat16m1_t v1,size_t vl)
{
    vsoxseg2ei64_v_f16m1(base, bindex, v0, v1, 20);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*20,\s*e16,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg2ei64\.v} 2 } } */
