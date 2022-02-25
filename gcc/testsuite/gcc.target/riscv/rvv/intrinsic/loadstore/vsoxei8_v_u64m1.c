/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxei8_v_u64m1(uint64_t *base,vuint8mf8_t bindex,vuint64m1_t value,size_t vl)
{
    vsoxei8_v_u64m1(base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vsoxei8_v_u64m1(uint64_t *base,vuint8mf8_t bindex,vuint64m1_t value,size_t vl)
{
    vsoxei8_v_u64m1(base, bindex, value, 25);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*25,\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxei8\.v} 2 } } */
