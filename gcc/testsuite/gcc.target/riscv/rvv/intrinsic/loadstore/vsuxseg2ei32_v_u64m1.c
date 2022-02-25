/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg2ei32_v_u64m1(uint64_t *base,vuint32mf2_t bindex,vuint64m1_t v0,vuint64m1_t v1,size_t vl)
{
    vsuxseg2ei32_v_u64m1(base, bindex, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vsuxseg2ei32_v_u64m1(uint64_t *base,vuint32mf2_t bindex,vuint64m1_t v0,vuint64m1_t v1,size_t vl)
{
    vsuxseg2ei32_v_u64m1(base, bindex, v0, v1, 0);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg2ei32\.v} 2 } } */
