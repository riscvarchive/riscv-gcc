/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg7ei32_v_i64m1(int64_t *base,vuint32mf2_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,size_t vl)
{
    vsuxseg7ei32_v_i64m1(base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vsuxseg7ei32_v_i64m1(int64_t *base,vuint32mf2_t bindex,vint64m1_t v0,vint64m1_t v1,vint64m1_t v2,vint64m1_t v3,vint64m1_t v4,vint64m1_t v5,vint64m1_t v6,size_t vl)
{
    vsuxseg7ei32_v_i64m1(base, bindex, v0, v1, v2, v3, v4, v5, v6, 10);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*10,\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg7ei32\.v} 2 } } */
