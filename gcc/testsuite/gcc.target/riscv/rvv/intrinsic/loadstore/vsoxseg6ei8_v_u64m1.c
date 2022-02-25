/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg6ei8_v_u64m1(uint64_t *base,vuint8mf8_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,size_t vl)
{
    vsoxseg6ei8_v_u64m1(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vsoxseg6ei8_v_u64m1(uint64_t *base,vuint8mf8_t bindex,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,size_t vl)
{
    vsoxseg6ei8_v_u64m1(base, bindex, v0, v1, v2, v3, v4, v5, 29);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*29,\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg6ei8\.v} 2 } } */
