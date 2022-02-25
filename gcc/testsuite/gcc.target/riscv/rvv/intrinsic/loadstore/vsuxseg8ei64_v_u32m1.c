/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg8ei64_v_u32m1(uint32_t *base,vuint64m2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,vuint32m1_t v7,size_t vl)
{
    vsuxseg8ei64_v_u32m1(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vsuxseg8ei64_v_u32m1(uint32_t *base,vuint64m2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,vuint32m1_t v4,vuint32m1_t v5,vuint32m1_t v6,vuint32m1_t v7,size_t vl)
{
    vsuxseg8ei64_v_u32m1(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 2);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*2,\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg8ei64\.v} 2 } } */
