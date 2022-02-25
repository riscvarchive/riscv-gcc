/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg2ei16_v_u64m4(uint64_t *base,vuint16m1_t bindex,vuint64m4_t v0,vuint64m4_t v1,size_t vl)
{
    vsoxseg2ei16_v_u64m4(base, bindex, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu} 1 } } */

void
test1_vsoxseg2ei16_v_u64m4(uint64_t *base,vuint16m1_t bindex,vuint64m4_t v0,vuint64m4_t v1,size_t vl)
{
    vsoxseg2ei16_v_u64m4(base, bindex, v0, v1, 2);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*2,\s*e64,\s*m4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg2ei16\.v} 2 } } */
