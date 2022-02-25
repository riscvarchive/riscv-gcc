/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxei16_v_i64m2(int64_t *base,vuint16mf2_t bindex,vint64m2_t value,size_t vl)
{
    vsuxei16_v_i64m2(base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu} 1 } } */

void
test1_vsuxei16_v_i64m2(int64_t *base,vuint16mf2_t bindex,vint64m2_t value,size_t vl)
{
    vsuxei16_v_i64m2(base, bindex, value, 26);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*26,\s*e64,\s*m2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxei16\.v} 2 } } */
